//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVAsset, AVPlayer, AVPlayerItem, AVPlayerLayer, MMUIScrollView, NSString, NSURL, UIImageView, UILabel, UIView, WCFinderHeadImageView;
@protocol WCFinderRedPacketCoverCropViewDelegate;

@interface WCFinderRedPacketCoverCropView
{
    _Bool _shouldIgnoreScrollEvent;
    id <WCFinderRedPacketCoverCropViewDelegate> _delegate;
    AVAsset *_playerAVAsset;
    WCFinderHeadImageView *_headImageView;
    UILabel *_nicknameLabel;
    UIImageView *_cardImgView;
    NSURL *_videoUrl;
    AVPlayerItem *_playerItem;
    AVPlayer *_avPlayer;
    AVPlayerLayer *_playerLayer;
    double _keyFrameRate;
    double _videoDuration;
    id _timeObserver;
    MMUIScrollView *_scrollView;
    UIView *_playerContainerView;
    struct CGSize _videoSize;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldIgnoreScrollEvent; // @synthesize shouldIgnoreScrollEvent=_shouldIgnoreScrollEvent;
@property(retain, nonatomic) UIView *playerContainerView; // @synthesize playerContainerView=_playerContainerView;
@property(retain, nonatomic) MMUIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) id timeObserver; // @synthesize timeObserver=_timeObserver;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(nonatomic) double keyFrameRate; // @synthesize keyFrameRate=_keyFrameRate;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) AVPlayer *avPlayer; // @synthesize avPlayer=_avPlayer;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) NSURL *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(retain, nonatomic) UIImageView *cardImgView; // @synthesize cardImgView=_cardImgView;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) AVAsset *playerAVAsset; // @synthesize playerAVAsset=_playerAVAsset;
@property(nonatomic) __weak id <WCFinderRedPacketCoverCropViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getCurThumbImage;
- (id)sliderVideoCropRect;
- (id)rangeModel;
- (void)sliderScrollAction;
- (void)sliderPanChangedState:(long long)arg1;
- (void)setupLoopPlaybackWithStartTime:(double)arg1;
- (void)dealloc;
- (void)checkProgressByCurrentTime:(double)arg1;
- (void)observePlayerProgress;
- (void)scrollViewDidScroll:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)observeNotification;
- (void)removeNotification;
- (void)loadPreviewView;
- (void)layoutAllSubviews;
- (void)setUpView;
- (id)initWithFrame:(struct CGRect)arg1 videoURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

