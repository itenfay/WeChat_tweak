//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, WAOpenSetting_SubscriptionsModel;

@protocol WAAppAuthorizationDelegate <NSObject>

@optional
- (void)onAppAuthorizationReturn:(NSArray *)arg1 subscriptionsSettingModel:(WAOpenSetting_SubscriptionsModel *)arg2;
@end

