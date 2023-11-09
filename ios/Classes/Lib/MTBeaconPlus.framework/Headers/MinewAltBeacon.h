//
//  MinewAltBeacon.h
//  MTBeaconPlus
//
//  Created by minew on 2022/6/7.
//  Copyright © 2022 MinewTech. All rights reserved.
//

#import <MTBeaconPlus/MTBeaconPlus.h>

NS_ASSUME_NONNULL_BEGIN

@interface MinewAltBeacon : MinewFrame

// battery
@property (nonatomic, assign, readonly) NSInteger battery;

// major
@property (nonatomic, assign) NSInteger major;

// minor
@property (nonatomic, assign) NSInteger minor;

// uuid
@property (nonatomic, strong) NSString *uuid;

// RSSI @1m
@property (nonatomic, assign) NSInteger txPower;

@end

NS_ASSUME_NONNULL_END
