//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class ApplyNFCCardResponse, NSString, WCPayIssueNFCCardCgi;

@protocol WCPayIssueNFCCardCgiDelegate <NSObject>
- (void)onWCPayIssueNFCCardCgiResponseError:(WCPayIssueNFCCardCgi *)arg1 errorMsg:(NSString *)arg2 errorCode:(unsigned int)arg3;
- (void)onWCPayIssueNFCCardCgiResponseOK:(WCPayIssueNFCCardCgi *)arg1 result:(ApplyNFCCardResponse *)arg2;
@end

