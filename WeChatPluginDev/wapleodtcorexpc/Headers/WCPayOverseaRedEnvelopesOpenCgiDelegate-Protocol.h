//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class ForeignHbOpenResp, NSString;

@protocol WCPayOverseaRedEnvelopesOpenCgiDelegate <NSObject>
- (void)onWCPayOverseaRedEnvelopesOpenError:(ForeignHbOpenResp *)arg1 errorDesc:(NSString *)arg2 errorCode:(unsigned int)arg3;
- (void)onWCPayOverseaRedEnvelopesOpenOK:(ForeignHbOpenResp *)arg1;
@end

