#include <vector>
using namespace std;

template <typename T>
class GHFilter {
    private:
    vector<T> x, dx; // current state and change in state
    vector<T> x_pred, dx_pred; // predicted state and change in state 
    double dt_; // time step
    float g_, h_; // filter scaling parameters
    vector<T> res; // residual between measurement and prior estimate
    vector<T> z; // measurements

    public:
    GHFilter(vector<T> x_init, vector<T> dx_init, double dt, float g, float h);
    virtual ~GHFilter() { ; }

    void update(vector<T> meas); // alters internal state
    void update(vector<T> meas, float alt_g, float alt_h); // alters internal state and uses alternative g-h values
    vector<T> process(vector<T> meas); // does not alter internal state
    float getVRF(); // returns VRF of the state (x) and its derivatives (dx)
    float getPredVRF(); // returns VRF for the prediction step
};

