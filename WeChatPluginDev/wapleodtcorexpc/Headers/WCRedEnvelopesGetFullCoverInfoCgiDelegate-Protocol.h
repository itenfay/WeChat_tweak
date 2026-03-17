//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap, GetFullCoverInfoResponse;

@protocol WCRedEnvelopesGetFullCoverInfoCgiDelegate <NSObject>
- (void)onGetFullCoverInfoCgiResp:(GetFullCoverInfoResponse *)arg1 messageWrap:(CMessageWrap *)arg2;
@end

