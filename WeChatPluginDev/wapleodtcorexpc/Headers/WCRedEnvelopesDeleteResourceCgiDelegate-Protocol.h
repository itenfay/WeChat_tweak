//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class DeleteShowSourceResp, NSString;

@protocol WCRedEnvelopesDeleteResourceCgiDelegate <NSObject>
- (void)onWCRedEnvelopesDeleteResourceCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWCRedEnvelopesDeleteResourceCgiResponseOK:(DeleteShowSourceResp *)arg1;
@end

