//
//  MinewWaterImmersion.h
//  MTBeaconPlus
//
//  Created by minew on 2022/9/16.
//  Copyright © 2022 MinewTech. All rights reserved.
//

#import <MTBeaconPlus/MTBeaconPlus.h>

NS_ASSUME_NONNULL_BEGIN

@interface MinewWaterImmersion : MinewFrame

// No: normal, Yes: immersion
@property (nonatomic, assign, readonly) BOOL tamperProofStatus;

// battery left
@property (nonatomic, assign, readonly) NSInteger battery;

// mac address
@property (nonatomic, strong, readonly) NSString *mac;

@end

NS_ASSUME_NONNULL_END
