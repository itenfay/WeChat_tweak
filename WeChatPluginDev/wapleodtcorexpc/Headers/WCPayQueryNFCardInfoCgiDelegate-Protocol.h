//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NFCCardsQueryNFCCardInfoResponse, NSString, WCPayQueryNFCardInfoCgi;

@protocol WCPayQueryNFCardInfoCgiDelegate <NSObject>
- (void)onWCPayQueryNFCardInfoCgiResponseError:(WCPayQueryNFCardInfoCgi *)arg1 errorMsg:(NSString *)arg2 errorCode:(unsigned int)arg3;
- (void)onWCPayQueryNFCardInfoCgiResponseOK:(WCPayQueryNFCardInfoCgi *)arg1 result:(NFCCardsQueryNFCCardInfoResponse *)arg2;
@end

