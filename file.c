u16 MPX4115_GetPressure(void)
{
	u16 adc = ADC_Read(MPX4115_CH);
	
	u16 p = (((((u32)(adc - 55))*1000)) / (921)) + 150;
	return p;
}


u16 MPX4115_GetPressure(void)
{
	u16 adc = ADC_Read(MPX4115_CH);
	
	u16 p = (((((u32)(adc - 55))*1000)) / (921)) + 150;
	return p;
}