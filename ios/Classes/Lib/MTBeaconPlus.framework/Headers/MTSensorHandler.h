//
//  MTSensorHandler.h
//  MTBeaconPlus
//
//  Created by Minewtech on 2018/12/24.
//  Copyright © 2018 MinewTech. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, MTSensitivityType) {
    MTSensitivityTypeSuperHigh,
    MTSensitivityTypeHigh,
    MTSensitivityTypeMiddle,
    MTSensitivityTypeLow,
    MTSensitivityTypeSuperLow,
    MTSensitivityTypeError,
};

typedef NS_ENUM(NSInteger, MTVibrationType) {
    MTVibrationTypeOpen,
    MTVibrationTypeClose,
    MTVibrationTypeError,
};

@class MTSensorData, MTConnectionHandler;

@protocol ConnectionDelegate;

typedef void(^MTSensorOperatBlock)( MTSensorData *sd);
typedef void(^MTSensorCountOperatBlock)( NSInteger count);
typedef void(^MTSensorResetOperatBlock)( BOOL isSuccess);
typedef void(^MTSensorQueryVibrationTypeOperatBlock)(BOOL isSuccess, MTVibrationType type);
typedef void(^MTSensorQuerySensitivityTypeOperatBlock)(BOOL isSuccess, MTSensitivityType type);
typedef void(^MTSensorTimeZoneOperatBlock)(BOOL isSuccess, MTVibrationType type, uint32_t startTime, uint32_t endTime);

// The array corresponds to six channels, the broadcast rate of each channel, 0 represents 1Mbps, 1 represents 125kbps of Bluetooth 5.0
typedef void(^MTSensorBroadcastSpeedQueryBlock)( BOOL isSuccess, NSArray<NSNumber *> *broadcastSpeedOfSlotArray);


@interface MTSensorHandler : NSObject


@property (nonatomic, strong) NSMutableDictionary *sensorDataDic;

@property (nonatomic,weak) id<ConnectionDelegate> delegate;

/**
 read HTSensor data from device
 
 @param completionHandler call back sensordata when data synced.
 */
- (void)readSensorHistory:(MTSensorOperatBlock)completionHandler;
/**
 set PIRSensor data to device
 
 @param completionHandler call back sensordata when data saved.
 */

- (void)pirSet:(BOOL)isRepeat andDelayTime:(uint16_t)time completion:(MTSensorOperatBlock)completionHandler;

/**
 Read history of six axis sensor from device
 @param completionHandler call back history of six axis sensor when data synced
 */
- (void)readSixAxisSensorHistory:(MTSensorOperatBlock)completionHandler;

/**
 Read history of magnetometer sensor from device
 @param completionHandler call back history of magnetometer sensor when data synced
 */
- (void)readMagnetometerSensorHistory:(MTSensorOperatBlock)completionHandler;

/**
 Read history of atmospheric pressure sensor from device
 @param completionHandler call back history of atmospheric pressure sensor when data synced
 */
- (void)readAtmosphericPressureSensorHistory:(MTSensorOperatBlock)completionHandler;

/**
 Read history of single temp sensor from device
 @param completionHandler call back history of single temp sensor when data synced
 */
- (void)readTempSensorHistory:(MTSensorOperatBlock)completionHandler;

/**
 Set sensitivity of vibration sensor from device
 @param completionHandler call back operation result of vibration sensor when data synced
 */
- (void)setSensitivity:(MTSensitivityType)sensitivityType CompletionHandler:(MTSensorResetOperatBlock)completionHandler;

/**
 Query sensitivity of vibration sensor from device
 @param completionHandler call back sensitivityType of vibration sensor when data synced
 */
- (void)querySensitivity:(MTSensorQuerySensitivityTypeOperatBlock)completionHandler;

/**
 Set vibration status of vibration sensor from device
 @param completionHandler call back operation result of vibration sensor when data synced
 */
- (void)setVibrationStatus:(MTVibrationType)vibrationType CompletionHandler:(MTSensorResetOperatBlock)completionHandler;

/**
 Query sensitivity of vibration sensor from device
 @param completionHandler call back vibrationType of vibration sensor when data synced
 */
- (void)queryVibrationStatu:(MTSensorQueryVibrationTypeOperatBlock)completionHandler;

/**
 Set first alarm time interval for device's vibration sensor
 @param completionHandler call back operation result of vibration sensor when data synced
 */
- (void)setFirstAlarmTimeIntervalWithAlarmStatus:(MTVibrationType)alarmStatus StartTime:(NSInteger)startTime EndTime:(NSInteger)endTime CompletionHandler:(MTSensorResetOperatBlock)completionHandler;


/**
 Query first alarm time interval of vibration sensor from device
 @param completionHandler call back startTime and endTime of vibration sensor when data synced
 */
- (void)queryFirstAlarmTimeInterval:(MTSensorTimeZoneOperatBlock)completionHandler;

/**
 Set second alarm time interval for device's vibration sensor
 @param completionHandler call back operation result of vibration sensor when data synced
 */
- (void)setSecondAlarmTimeIntervalWithAlarmStatus:(MTVibrationType)alarmStatus StartTime:(NSInteger)startTime EndTime:(NSInteger)endTime CompletionHandler:(MTSensorResetOperatBlock)completionHandler;


/**
 Query second alarm time interval of vibration sensor from device
 @param completionHandler call back startTime and endTime of vibration sensor when data synced
 */
- (void)querySecondAlarmTimeInterval:(MTSensorTimeZoneOperatBlock)completionHandler;

/**
 Set third alarm time interval  for device's vibration sensor
 @param completionHandler call back operation result of vibration sensor when data synced
 */
- (void)setThirdAlarmTimeIntervalWithAlarmStatus:(MTVibrationType)alarmStatus StartTime:(NSInteger)startTime EndTime:(NSInteger)endTime CompletionHandler:(MTSensorResetOperatBlock)completionHandler;


/**
 Query third alarm time interval of vibration sensor from device
 @param completionHandler call back startTime and endTime of vibration sensor when data synced
 */
- (void)queryThirdAlarmTimeInterval:(MTSensorTimeZoneOperatBlock)completionHandler;


/**
 Set broadcast speed  for device's sensor
 @param advSpeedArray The array corresponds to six channels, the broadcast rate of each channel, 0 represents 1Mbps, 1 represents 125kbps of Bluetooth 5.0.
 @param completionHandler call back operation result of device when data synced
 */
- (void)setBroadcastSpeed:(NSArray *)advSpeedArray CompletionHandler:(MTSensorResetOperatBlock)completionHandler;

/**
 Query broadcast speed from device's sensor
 @param completionHandler call back query broadcast speed when data synced
 */
- (void)queryBroadcastSpeed:(MTSensorBroadcastSpeedQueryBlock)completionHandler;


/// Set Acc Sensor Parameter
/// @param odr Output rate, unit is hz.
/// @param wakeupThreshold wakeup Threshold, unit is mg.
/// @param wakeupDuration wakeup Duration, unit is ms.
- (void)setAccSensorParameterWithOdr:(NSInteger)odr WakeupThreshold:(NSInteger)wakeupThreshold WakeupDuration:(NSInteger)wakeupDuration CompletionHandler:(MTSensorResetOperatBlock)completionHandler;


/// Query Acc Sensor Parametervoid
/// @param completionHandler call back odr, wakeupThreshold and wakeupDuration of acc sensor when data synced.
- (void)queryAccSensorParameterWithCompletionHandler:(void(^)(BOOL isSuccess, NSInteger odr, NSInteger wakeupThreshold, NSInteger wakeupDuration))completionHandler;


@end

NS_ASSUME_NONNULL_END
