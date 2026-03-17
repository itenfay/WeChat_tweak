//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap, NSString;

@protocol ILanTransferClientExt <NSObject>

@optional
- (void)onLanTransfer:(NSString *)arg1 clientDownloadOK:(CMessageWrap *)arg2;
@end

