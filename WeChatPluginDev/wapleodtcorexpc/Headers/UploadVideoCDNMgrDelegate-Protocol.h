//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap;

@protocol UploadVideoCDNMgrDelegate <NSObject>

@optional
- (void)OnUploadMsgDataFail:(CMessageWrap *)arg1;
- (void)OnUploadMsgDataSuccess:(CMessageWrap *)arg1;
- (void)onUploadBypassVideoCdnFinish:(CMessageWrap *)arg1;
@end

