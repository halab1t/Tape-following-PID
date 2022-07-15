// reflectance = analogRead(Sensor_Pin);
  // display_handler.clearDisplay();
  // display_handler.setCursor(0,0);
  // display_handler.print("i = ");
  // display_handler.print(measurement_no);
  // display_handler.print(" => ");
  // display_handler.println(measurements[measurement_no]);
  // display_handler.setCursor(0,15);
  // display_handler.display();
//  long time_now = micros();
//   if(time_now - last_time > MEASUREMENT_PERIOD_uS){
//     // if(analogRead(Sensor_Pin)>500){
//     //   measurements[measurement_no]=1;
//     // }else{
//     //   measurements[measurement_no]=0;
//     // }
//     measurements[measurement_no] = digitalRead(Sensor_Pin);
//     last_time = time_now;
//     measurement_no++;
//     if(measurement_no == 1){
//       first_time = last_time;
//     }
//     if(measurement_no >= NUM_MEASUREMENTS){
     
//       measurement_spacing = (last_time - first_time)/(NUM_MEASUREMENTS);
      
//       int on_per_period = ONEk_PERIOD_uS/(2*measurement_spacing); 
//       int val = 0;
//      for(int i =0; i< 2*NUM_MEASUREMENTS/on_per_period; i++){ 
//         if(val == 1){
//           val = 0;}
//         else{
//            val = 1;
//         }
//        for(int k =0; k < on_per_period; k++){
//          onek_reference[i*on_per_period + k]= val;
//        }
//       } 
//       on_per_period = TENk_PERIOD_uS/(2*measurement_spacing);
//       val=0;
//       for(int i =0; i< 2*NUM_MEASUREMENTS/on_per_period; i++){ 
//         if(val == 1){
//            val = 0;
//          }else{
//            val = 1;
//          }
//          for(int k =0; k < on_per_period; k++){
//          tenk_reference[i*on_per_period + k]= val;
//        }
//       } 
//        display_handler.clearDisplay();
//   // display_handler.setCursor(0,0);
//   // display_handler.print("i = ");
//   // display_handler.print(measurement_no);
//   // display_handler.print(" => ");
//   // display_handler.println(measurements[measurement_no]);
//   // display_handler.setCursor(0,15);
//   //  display_handler.print("j = ");
//   // display_handler.print(measurement_no);
//   // display_handler.print(" => ");
//   // display_handler.println(measurements[measurement_no]);
//   // display_handler.display();

      
      
//        onek_onek = 0;
//        tenk_tenk = 0;
//       for(int k = 0; k < NUM_MEASUREMENTS; k++){
//         onek_corr[k]=0;
//         tenk_corr[k]=0;
        
//         for(int i = 0; i < NUM_MEASUREMENTS; i++){
//           onek_corr[k] += onek_reference[k+i]*measurements[i];
//           tenk_corr[k] += tenk_reference[k+i]*measurements[i];
//         }
//       }
//       for(int k =0; k < 2*NUM_MEASUREMENTS; k++){
//         onek_onek += onek_reference[k]*onek_reference[k];
//         tenk_tenk += tenk_reference[k]*tenk_reference[k];
//       }
     
//       onek_max = find_max(onek_corr, NUM_MEASUREMENTS);
//       tenk_max = find_max(tenk_corr, NUM_MEASUREMENTS);
     
//       //onek_max = onek_max/onek_onek;
//       //tenk_max = tenk_max/tenk_tenk;
//       display_handler.clearDisplay();
//       display_handler.setCursor(0,0);
//       display_handler.print("Tenk: ");
//       display_handler.println(tenk_max/(2*tenk_tenk));
//       display_handler.print("Onek: ");
//       display_handler.println(onek_max/(2*onek_onek));
//       display_handler.print("ms => ");
//       display_handler.println(measurement_spacing);
//       display_handler.display();
//       measurement_no = 0;
      
         

//     }
//   }
// uint32_t delay_ms = 1000;

  //turn LED on (HIGH is the voltage level)
  //digitalWrite(LED_BUILTIN, HIGH);

  //wait for one second
  //delay(delay_ms);

  //turn LED off (LOW sets voltage to GND)
  //digitalWrite(LED_BUILTIN, LOW);

  //wait one more second
  //delay(delay_ms);
// long last_time=0;
// long first_time = 0;
// int measurements[NUM_MEASUREMENTS] = {};
// int onek_reference[2*NUM_MEASUREMENTS] = {};
// int tenk_reference[2*NUM_MEASUREMENTS] = {};
// int onek_corr[NUM_MEASUREMENTS] = {};
// int tenk_corr[NUM_MEASUREMENTS] = {};
// int onek_onek = 0;
// int tenk_tenk = 0;
// int measurement_spacing;
// float onek_max;
// float tenk_max;
// int on_per_period;
// int measurement_no = 0;
// int find_max(int array[], int size){
//   int max = 0;
//   for(int k = 0; k < size; k++){
//     if(array[k]> max){
//       max = array[k];
//     }
//   }
//   return max;
// }
// #define NUM_MEASUREMENTS 100
// #define MEASUREMENT_PERIOD_uS 25
// #define TENk_PERIOD_uS 100
// #define ONEk_PERIOD_uS 1000
