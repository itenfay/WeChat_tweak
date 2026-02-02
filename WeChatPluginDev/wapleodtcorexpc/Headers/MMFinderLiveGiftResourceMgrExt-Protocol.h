//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSError, NSString, NSURL;

@protocol MMFinderLiveGiftResourceMgrExt <NSObject>

@optional
- (void)onLiveGiftResDownloadCompleted:(NSError *)arg1 retry:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 resType:(long long)arg4 productId:(NSString *)arg5 downloadUrl:(NSURL *)arg6;
- (void)onLiveGiftResDownloadProgress:(float)arg1 totalLength:(unsigned long long)arg2 resType:(long long)arg3 productId:(NSString *)arg4 downloadUrl:(NSURL *)arg5;
@end

