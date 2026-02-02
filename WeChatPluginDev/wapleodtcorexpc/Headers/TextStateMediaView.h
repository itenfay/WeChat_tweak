//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CADisplayLink, MMTextStateMediaItem, MMTextStateVideoControlView, MMWebImageView, NSString, TextStateIcon, UIImage, UIImageView, WCPlayerView;
@protocol TextStateBaseMediaViewDelegate;

@interface TextStateMediaView : UIView
{
    _Bool _muted;
    _Bool _forceMuted;
    _Bool _isPlayLiveByLongPress;
    _Bool _isPlayLiveUseFeedBack;
    id <TextStateBaseMediaViewDelegate> _textStateDelegate;
    MMTextStateMediaItem *_mediaItem;
    double _transitionProgress;
    UIImage *_defaultImage;
    TextStateIcon *_iconForDefaultImage;
    UIImage *_image;
    UIImageView *_imageView;
    MMWebImageView *_bigIconImageView;
    UIView *_shadowView;
    WCPlayerView *_playerView;
    MMTextStateVideoControlView *_controlView;
    double _imageCurrentTime;
    CADisplayLink *_imageDisplayLink;
    double _timestamp;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPlayLiveUseFeedBack; // @synthesize isPlayLiveUseFeedBack=_isPlayLiveUseFeedBack;
@property(nonatomic) _Bool isPlayLiveByLongPress; // @synthesize isPlayLiveByLongPress=_isPlayLiveByLongPress;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) CADisplayLink *imageDisplayLink; // @synthesize imageDisplayLink=_imageDisplayLink;
@property(nonatomic) double imageCurrentTime; // @synthesize imageCurrentTime=_imageCurrentTime;
@property(retain, nonatomic) MMTextStateVideoControlView *controlView; // @synthesize controlView=_controlView;
@property(retain, nonatomic) WCPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) MMWebImageView *bigIconImageView; // @synthesize bigIconImageView=_bigIconImageView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) TextStateIcon *iconForDefaultImage; // @synthesize iconForDefaultImage=_iconForDefaultImage;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(nonatomic) double transitionProgress; // @synthesize transitionProgress=_transitionProgress;
@property(retain, nonatomic) MMTextStateMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(nonatomic) __weak id <TextStateBaseMediaViewDelegate> textStateDelegate; // @synthesize textStateDelegate=_textStateDelegate;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<TextStateBaseMediaViewDelegate>",?,W,N,V_textStateDelegate

@property(nonatomic, getter=isForceMuted) _Bool forceMuted; // @synthesize forceMuted=_forceMuted;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,GisForceMuted,V_forceMuted

@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,GisMuted,V_muted

- (void)onTextStateMediaImageDownloadFail:(id)arg1;
- (void)onTextStateMediaImageDownloadSuccess:(id)arg1;
- (void)onTextStateMediaThumbDownloadFail:(id)arg1;
- (void)onTextStateMediaThumbDownloadSuccess:(id)arg1;
- (void)onVideoProgressChange:(double)arg1;
- (void)stopDisplayLink;
- (void)startDisplayLink;
- (void)tick:(id)arg1;
- (void)stopLive;
- (void)setIsLivePlayUseFeedBack:(_Bool)arg1;
- (_Bool)isCurrentPlaying;
- (_Bool)longPressEvent:(_Bool)arg1;
@property(readonly, nonatomic) double mediaAspectRatio;
- (void)resetPlayMedia;
- (void)pausePlayMedia;
- (void)startPlayMedia;
- (void)dealWCPlayer:(_Bool)arg1 shouldAutoPlay:(_Bool)arg2;
- (void)setMediaItem:(id)arg1 shouldAutoPlay:(_Bool)arg2;
- (void)updateBigIcon;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)initSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

