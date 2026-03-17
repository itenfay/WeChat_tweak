//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EnterpriseConnectorLogic, NSString;

@protocol EnterpriseConnectorLogicDelegate <NSObject>

@optional
- (void)onEnterpriseConnectFail:(EnterpriseConnectorLogic *)arg1;
- (void)onEnterpriseConnectSucceed:(EnterpriseConnectorLogic *)arg1;
- (void)onEnterpriseSelectChat:(NSString *)arg1 brand:(NSString *)arg2 logic:(EnterpriseConnectorLogic *)arg3;
- (void)onEnterpriseSelectBrand:(NSString *)arg1 logic:(EnterpriseConnectorLogic *)arg2;
@end

