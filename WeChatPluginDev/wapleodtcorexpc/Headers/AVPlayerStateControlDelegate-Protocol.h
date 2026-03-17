//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CdnDownloadTaskInfo;

@protocol AVPlayerStateControlDelegate <NSObject>
- (void)updateVideoTotalTime:(double)arg1;
- (void)videoDownloadErrorExpired:(_Bool)arg1;
- (void)showVideoLoadingView;
- (void)hideVideoLoadingView;
- (void)tryToPlayVideo;
- (void)startToPlayVideo;

@optional
- (void)onDownloadVideoReturn:(CdnDownloadTaskInfo *)arg1;
- (void)OnDownloadPercent:(double)arg1;
- (void)OnCurrentTimeUpdate:(double)arg1;
- (void)OnPlayToEnd;
- (void)OnPlayStatusFail;
@end

