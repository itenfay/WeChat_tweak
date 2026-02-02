//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class ForeignHbReceiveResp, NSString;

@protocol WCPayOverseaRedEnvelopesReceiveCgiDelegate <NSObject>
- (void)onWCPayOverseaRedEnvelopesReceiveError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayOverseaRedEnvelopesReceiveOK:(ForeignHbReceiveResp *)arg1;
@end

