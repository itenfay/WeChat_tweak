//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, TPVideoFrameBuffer, WCFinderPlayerViewForTing, WCPlayerPlaybackInfo;

@protocol WCFinderPlayerViewForTingDelegate <NSObject>

@optional
- (void)finderPlayerViewForTing:(WCFinderPlayerViewForTing *)arg1 onVideoPlayFail:(int)arg2 errorDesc:(NSString *)arg3;
- (void)finderPlayerViewForTing:(WCFinderPlayerViewForTing *)arg1 onBufferingChanged:(_Bool)arg2;
- (void)finderPlayerViewForTing:(WCFinderPlayerViewForTing *)arg1 onVideoFrameOut:(TPVideoFrameBuffer *)arg2;
- (void)finderPlayerViewForTing:(WCFinderPlayerViewForTing *)arg1 onCurrentTimeUpdated:(double)arg2 duration:(double)arg3;
- (void)finderPlayerViewForTing:(WCFinderPlayerViewForTing *)arg1 onVideoPrepareToPlay:(WCPlayerPlaybackInfo *)arg2;
- (void)finderPlayerViewForTingOnDisplayViewMTKViewCreated:(WCFinderPlayerViewForTing *)arg1;
- (void)finderPlayerViewForTingOnVideoEnd:(WCFinderPlayerViewForTing *)arg1;
- (void)finderPlayerViewForTingOnVideoPlay:(WCFinderPlayerViewForTing *)arg1;
- (void)finderPlayerViewForTingOnVideoPause:(WCFinderPlayerViewForTing *)arg1;
@end

