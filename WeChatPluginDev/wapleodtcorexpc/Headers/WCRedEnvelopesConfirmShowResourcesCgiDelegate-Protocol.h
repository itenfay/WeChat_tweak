//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class ConfirmShowSourceResp, NSString;

@protocol WCRedEnvelopesConfirmShowResourcesCgiDelegate <NSObject>
- (void)onWCRedEnvelopesConfirmShowResourcesCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWCRedEnvelopesConfirmShowResourcesCgiResponseOK:(ConfirmShowSourceResp *)arg1;
@end

