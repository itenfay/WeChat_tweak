//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CdnServiceVideoDownloader : NSObject
{
}

+ (id)generateDownloadArgsWrapWithVideoMsg:(id)arg1 percent:(int)arg2;
+ (_Bool)checkPreloadCacheWithMsgWrap:(id)arg1;
+ (void)onDownloadComplete:(id)arg1 argsWrap:(id)arg2;
+ (void)preloadVideoMsg:(id)arg1 behavior:(long long)arg2 percent:(int)arg3 progressBlock:(CDUnknownBlockType)arg4 preloadCompleteBlock:(CDUnknownBlockType)arg5;

@end

