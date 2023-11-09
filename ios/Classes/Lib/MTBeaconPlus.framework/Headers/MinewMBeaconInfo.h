//
//  MinewMBeaconInfo.h
//  MTBeaconPlus
//
//  Created by minew on 2022/4/19.
//  Copyright © 2022 MinewTech. All rights reserved.
//

#import <MTBeaconPlus/MTBeaconPlus.h>

NS_ASSUME_NONNULL_BEGIN

@interface MinewMBeaconInfo : MinewFrame

// major
@property (nonatomic, assign, readonly ) NSInteger major;

// minor
@property (nonatomic, assign, readonly ) NSInteger minor;

// mac
@property (nonatomic, copy, readonly) NSString *mac;

// voltage
@property (nonatomic, assign, readonly ) NSInteger voltage;

// device battery
@property (nonatomic, assign, readonly) NSInteger battery;

// device name
@property (nonatomic, strong, readonly) NSString *name;


@end

NS_ASSUME_NONNULL_END
