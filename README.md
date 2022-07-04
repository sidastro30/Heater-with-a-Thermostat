# Heater-with-a-Thermostat
```
Thermostat controller keeps the temperature between [MAX_Temp(70° F), MIN_Temp(66° F)]. The heater is switched OFF if the temperature rises above MAX_Temp and it is switched on in NORMAL_HEAT mode at a temperature between MIN_Temp upto MAX_Temp and FAST_HEAT mode if temperature goes below MIN_Temp. Sampling time of a controller is 0.2 second.

Thermostat controller also has logic to avoid chattering behaviour. If controller consecutively switches operation mode more than CHATTERING_LIMIT(2) , then it continues operating in previous mode without switching till next 5 sampling duration.

Initially, the temperature is any value between 55° to 75° F and controller mode is OFF.
```
![image](https://user-images.githubusercontent.com/81389879/177152426-a5c3bd20-e40d-42ed-b98a-68a91669465c.png)
```
The dynamics of the temperature is defined by the following equation: d\dt(T) = 0.5 * (u - T), where u = 20 if mode = OFF; u = 70 if mode = NORMAL_HEAT; u = 100 if mode = FAST_HEAT
```
