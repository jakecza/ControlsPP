#include "estimators/GHFilter.hpp"

template<typename T>
GHFilter<T>::GHFilter(vector<T> x_init, vector<T> dx_init, double dt, float g, float h)
{
    x = x_init;
    dx = dx_init;
    dt_ = dt;
    g_ = g;
    h_ = h;
}


template<typename T>
void GHFilter<T>::update(vector<T> meas)
{

}


template<typename T>
void GHFilter<T>::update(vector<T> meas, float alt_g, float alt_h)
{

}


template<typename T>
vector<T> GHFilter<T>::process(vector<T> meas)
{

}


template<typename T>
float GHFilter<T>::getVRF()
{

}


template<typename T>
float GHFilter<T>::getPredVRF()
{

}
