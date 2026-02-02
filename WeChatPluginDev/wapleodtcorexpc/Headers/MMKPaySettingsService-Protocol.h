//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMKXMLPayRedDot, MMVoidBoolCallback, MMVoidCallback, NSArray, NSString;

@protocol MMKPaySettingsService <NSObject>
- (void)markXMLReddotConsumed:(NSString *)arg1;
- (MMKXMLPayRedDot *)getUnexpiredXMLReddot:(NSString *)arg1;
- (void)logGeneralUserAction:(int)arg1;
- (void)handlePushBioPaySettingPageImpl:(MMVoidCallback *)arg1;
- (void)setBioPayTypeEnabledImpl:(long long)arg1 enabled:(_Bool)arg2 resultCallback:(MMVoidBoolCallback *)arg3;
- (_Bool)isBioPayTypeEnabled:(long long)arg1;
- (NSArray *)supportedBioPayTypes;
- (void)markReddotConsumed:(NSString *)arg1;
- (_Bool)getReddotStatus:(NSString *)arg1;
- (void)commitHbRefundWayTypeChange;
- (void)setHbRefundWayType:(long long)arg1;
- (long long)getHbRefundWayType;
- (void)setTransferPhoneGrantFlag:(int)arg1;
- (int)getTransferPhoneGrantFlag;
- (void)commitTransferDelayTypeChange;
- (void)setTransferDelayType:(long long)arg1;
- (long long)getTransferDelayType;
@end

