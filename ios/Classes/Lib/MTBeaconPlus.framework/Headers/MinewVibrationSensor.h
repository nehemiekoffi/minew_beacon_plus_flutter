//
//  MinewVibrationSensor.h
//  MTBeaconPlus
//
//  Created by minew on 2021/4/19.
//  Copyright © 2021 MinewTech. All rights reserved.
//

#import <MTBeaconPlus/MTBeaconPlus.h>

@interface MinewVibrationSensor : MinewFrame


@property (nonatomic, assign, readonly) NSInteger timestamp;

// vibration status, maybe nil in connection stage.
@property (nonatomic, assign, readonly) BOOL isVibration;

// battery left
@property (nonatomic, assign, readonly) NSInteger battery;

// mac address
@property (nonatomic, strong, readonly) NSString *mac;

@end
