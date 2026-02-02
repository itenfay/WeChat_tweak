//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, WAApptaskPublicResLogic;

@protocol WAVConsoleJSLogicImplDelegate <NSObject>
- (WAApptaskPublicResLogic *)fetchPublicResLogic;
- (void)onWebInvokeAppService:(NSDictionary *)arg1;
- (void)onDomReady;
@end

