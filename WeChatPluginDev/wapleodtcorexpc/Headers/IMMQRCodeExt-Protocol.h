//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IMMQRCodeExt <NSObject>

@optional
- (void)onShowAbandonTip:(NSString *)arg1 TipID:(NSString *)arg2 Wording:(NSString *)arg3;
- (void)onRevokeChatroomQRCode:(NSString *)arg1 success:(_Bool)arg2 errTip:(NSString *)arg3;
- (void)onDownloadNewDesignQRCodeFailed:(NSString *)arg1;
- (void)onDownloadQRCodeFinish:(NSString *)arg1 FooterWording:(NSString *)arg2;
@end

