//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap;

@protocol IAPPEmoticonDownloadExt <NSObject>

@optional
- (void)onAppEmoticonDownloading:(CMessageWrap *)arg1;
- (void)onAppEmoticonDownloadFinished:(CMessageWrap *)arg1;
@end

