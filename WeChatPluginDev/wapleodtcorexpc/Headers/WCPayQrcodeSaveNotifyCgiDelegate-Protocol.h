//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CgiQrcodeSaveNotifyResp, NSString;

@protocol WCPayQrcodeSaveNotifyCgiDelegate <NSObject>
- (void)onWCPayQrcodeSaveNotifyCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayQrcodeSaveNotifyCgiResp:(CgiQrcodeSaveNotifyResp *)arg1;
@end

