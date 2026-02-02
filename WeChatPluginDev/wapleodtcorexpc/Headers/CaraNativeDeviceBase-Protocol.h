//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CaraSize;

@protocol CaraNativeDeviceBase <NSObject>

@optional
- (CaraSize *)screenSize;
- (int)brand;
- (_Bool)isReachable;
- (int)networkType;
- (_Bool)isCharging;
- (float)battery;
@end

