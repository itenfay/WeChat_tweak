//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap;

@protocol RawVideoDownloadMgrExt <NSObject>

@optional
- (void)onRawVideoDownloadSuccess:(CMessageWrap *)arg1;
- (void)onRawVideoDownloadProgress:(CMessageWrap *)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
@end

