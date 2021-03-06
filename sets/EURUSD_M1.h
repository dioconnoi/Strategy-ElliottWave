//+------------------------------------------------------------------+
//|                  EA31337 - multi-strategy advanced trading robot |
//|                       Copyright 2016-2020, 31337 Investments Ltd |
//|                                       https://github.com/EA31337 |
//+------------------------------------------------------------------+

// Defines strategy's parameter values for the given pair symbol and timeframe.
struct Stg_ElliottWave_EURUSD_M1_Params : Stg_ElliottWave_Params {
  Stg_ElliottWave_EURUSD_M1_Params() {
    ElliottWave_Period = 32;
    ElliottWave_Applied_Price = 3;
    ElliottWave_Shift = 0;
    ElliottWave_SignalOpenMethod = 0;
    ElliottWave_SignalOpenLevel = 36;
    ElliottWave_SignalCloseMethod = 0;
    ElliottWave_SignalCloseLevel = 36;
    ElliottWave_PriceLimitMethod = 0;
    ElliottWave_PriceLimitLevel = 0;
    ElliottWave_MaxSpread = 2;
  }
} stg_elli_m1;
