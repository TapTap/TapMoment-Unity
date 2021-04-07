//
//  TDSMomentMapper.h
//  TapMoment
//
//  Created by ritchie on 2020/10/21.
//  Copyright © 2020 JiangJiahao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TapMoment.h"

NS_ASSUME_NONNULL_BEGIN

@class TDSMomentDelegate;

@interface TDSMomentMapper : NSObject
+ (TapMoment *)instance;
+ (TDSMomentDelegate *)delegate;
@end

NS_ASSUME_NONNULL_END
