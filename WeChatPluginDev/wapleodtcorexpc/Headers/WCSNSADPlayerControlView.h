//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, SightIconView;
@protocol WCSNSADPlayerControlViewDelegate;

@interface WCSNSADPlayerControlView
{
    SightIconView *_iconView;
    id <WCSNSADPlayerControlViewDelegate> _delegate;
    struct CGSize _iconSize;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCSNSADPlayerControlViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SightIconView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
- (void)hideIconView;
- (void)hidePauseView;
- (void)showPauseView;
- (void)showDownloadPercentView;
- (void)showBufferingView;
- (void)onPlayerSeekCompelete:(double)arg1;
- (void)onPlayerCreated;
- (void)updateVideoCurrentTime:(double)arg1;
- (void)onVideoDidPlayToEndTime;
- (void)onVideoPlayFinish;
- (void)onVideoPause;
- (void)onVideoPlay;
- (void)layoutSubviews;
- (void)setProgress:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

