//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class F2FMiniProgramConfirmRcvrResp, NSString;

@protocol WCPayF2FMiniProgramConfirmRcvrCgiDelegate <NSObject>
- (void)onWCPayF2FMiniProgramConfirmRcvrCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayF2FMiniProgramConfirmRcvrCgiResponseOK:(F2FMiniProgramConfirmRcvrResp *)arg1;
@end

