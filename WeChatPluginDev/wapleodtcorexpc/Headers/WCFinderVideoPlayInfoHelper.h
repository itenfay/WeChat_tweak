//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderVideoPlayInfoHelper : NSObject
{
}

+ (id)getAudioBitrateWithPlayBackInfo:(id)arg1;
+ (id)getVideoSpeedInfoWithContentVM:(id)arg1;
+ (id)getVideoDownloadDebugInfoWithReporter:(id)arg1 mediaWrap:(id)arg2 mediaInfo:(id)arg3 playBackInfo:(id)arg4;
+ (id)getVideoPreloadProgressBar;
+ (id)getPreloadProgressBarWithTitle:(id)arg1 len:(double)arg2 buff:(double)arg3 play:(double)arg4 isStreaming:(_Bool)arg5;
+ (id)getVideoDownloadProgressInfoWithReporter:(id)arg1 mediaWrap:(id)arg2 mediaInfo:(id)arg3;
+ (id)getVideoDownloadProgressSimplifiedInfoWithReporter:(id)arg1 mediaWrap:(id)arg2 mediaInfo:(id)arg3;

@end

