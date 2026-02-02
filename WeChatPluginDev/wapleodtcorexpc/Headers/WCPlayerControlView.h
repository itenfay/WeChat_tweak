//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMProgressViewEx, NSString, WCPlayerView;

@interface WCPlayerControlView : UIView
{
    _Bool _isBufferingViewLoading;
    WCPlayerView *playerView;
    UIView *_coverMask;
    MMProgressViewEx *_loadingView;
    double _progress;
    unsigned long long _loadingLocation;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long loadingLocation; // @synthesize loadingLocation=_loadingLocation;
@property(nonatomic) _Bool isBufferingViewLoading; // @synthesize isBufferingViewLoading=_isBufferingViewLoading;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) MMProgressViewEx *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIView *coverMask; // @synthesize coverMask=_coverMask;
@property(nonatomic) __weak WCPlayerView *playerView; // @synthesize playerView;
- (void)onCreateThumbImage:(id)arg1;
- (void)onPlayerGetSeiInfo:(id)arg1;
- (void)updateVideoBufferPercent:(double)arg1;
- (void)updateVideoTotalTime:(double)arg1;
- (void)updateVideoCurrentTime:(double)arg1;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(id)arg3;
- (void)onReceiveAllVideoData;
- (void)onVideoDidPlayToEndTime;
- (void)onVideoPlayFinish;
- (void)onVideoPause;
- (void)onDataSourceChangeSuccessWithDownloadArgsWrap:(id)arg1;
- (void)onDataSourceChangeSucc:(id)arg1;
- (void)onDataSourceChangeStart:(id)arg1;
- (void)onVideoPlay;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)hiddenThumbImageView;
- (void)showThumbImageView;
- (void)onVideoSizeChange:(struct CGSize)arg1;
- (void)hiddenPercentView;
- (void)showPercentView;
- (void)hiddenBufferingView;
- (void)showBufferingView;
- (void)layoutSubviews;
- (void)addWCPlayerSubview;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

