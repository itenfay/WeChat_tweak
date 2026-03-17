//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CaraAccountDiscoverTab;

@protocol CaraNativeAccountFeatureCenterBase <NSObject>

@optional
- (_Bool)isRegisteredInChina;
- (CaraAccountDiscoverTab *)discoverTab;
- (int)momentPrivacy;
- (int)gender;
@end

