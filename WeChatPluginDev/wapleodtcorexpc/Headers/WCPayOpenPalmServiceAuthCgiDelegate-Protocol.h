//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CheckOnlineOpenPalmServiceAuthRespBody, NSString;

@protocol WCPayOpenPalmServiceAuthCgiDelegate <NSObject>
- (void)onOpenPalmServiceAuthCgiOK:(_Bool)arg1 body:(CheckOnlineOpenPalmServiceAuthRespBody *)arg2 errorMessage:(NSString *)arg3;
@end

