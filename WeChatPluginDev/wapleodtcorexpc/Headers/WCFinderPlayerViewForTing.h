//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCFinderPlayerViewForTingDelegate;

@interface WCFinderPlayerViewForTing
{
    id <WCFinderPlayerViewForTingDelegate> _tingDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCFinderPlayerViewForTingDelegate> tingDelegate; // @synthesize tingDelegate=_tingDelegate;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(id)arg3;
- (void)hiddenBufferingView;
- (void)showBufferingView;
- (void)onPlayToEnd;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)onVideoFrameOut:(id)arg1;
- (long long)playerContentMode;
- (void)finderPlayerControllerViewUpdateVideoCurrentTime:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)layoutSubviews;
- (id)hookTagForSelector:(SEL)arg1;
- (void)tryRemoveHookDisplayViewLayoutSubviewFunc;
- (void)tryHookDisplayViewLayoutSubviewFunc;
- (void)tryRemoveHookDisplayViewAddSubviewFunc;
- (void)tryHookDisplayViewAddSubviewFunc;
- (void)restorePlayerView:(id)arg1;
- (id)getPlayerViewAndClear;
- (void)stopPlay;
- (void)playWithParams:(id)arg1;

@end

