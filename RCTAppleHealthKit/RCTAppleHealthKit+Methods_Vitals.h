//
//  RCTAppleHealthKit+Methods_Vitals.h
//  RCTAppleHealthKit
//
//  This source code is licensed under the MIT-style license found in the
//  LICENSE file in the root directory of this source tree.

#import "RCTAppleHealthKit.h"

@interface RCTAppleHealthKit (Methods_Vitals)

- (void)vitals_getHeartRateSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;

- (void)vitals_getRestingHeartRate:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)vitals_getRestingHeartRateSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)vitals_getRestingHeartRateSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;

- (void)vitals_getWalkingHeartRateAverage:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)vitals_getBodyTemperatureSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)vitals_getBloodPressureSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)vitals_getRespiratoryRateSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)vitals_getHeartRateVariabilitySamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)vitals_getHeartbeatSeriesSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)vitals_getVo2MaxSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)vitals_getOxygenSaturationSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)vitals_getElectrocardiogramSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;

//new stuff 
//hearing
- (void)vitals_getEnvironmentalAudioExposureEvent:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)vitals_getHeadphoneAudioExposureEvent:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;

//falls
- (void)vitals_getNumberOfTimesFallen:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;

//Heart Events
- (void)vitals_getLowCardioFitnessEvent:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)vitals_getLowHeartRateEvent:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)vitals_getHighHeartRateEvent:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)vitals_getIrregularHeartRateEvent:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
//Mobility
- (void)vitals_getAppleWalkingSteadiness:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)vitals_getAppleWalkingSteadinessEvent:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
//- (void)vitals_saveAppleWalkingSteadiness:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)vitals_getSixMinuteWalkTestDistance:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)vitals_getWalkingSpeed:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)vitals_getWalkingStepLength:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)vitals_getWalkingAsymmetryPercentage:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)vitals_getWalkingDoubleSupportPercentage:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)vitals_getStairAscentSpeed:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)vitals_getStairDescentSpeed:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;


@end
