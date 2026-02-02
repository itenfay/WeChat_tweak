//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIImage, UIImageView, WCPlayerConfigControlView, WCPlayerPlayArgs, WCPlayerView;
@protocol TextStateBaseMediaViewDelegate;

@interface TextStatePublishMediaView : UIView
{
    UIImage *_image;
    NSString *_videoPath;
    UIImageView *_imageView;
    WCPlayerView *_playerView;
    WCPlayerPlayArgs *_playerInfo;
    WCPlayerConfigControlView *_controlView;
    WCPlayerPlayArgs *_livePlayerInfo;
    struct CGSize _videoSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPlayerPlayArgs *livePlayerInfo; // @synthesize livePlayerInfo=_livePlayerInfo;
@property(retain, nonatomic) WCPlayerConfigControlView *controlView; // @synthesize controlView=_controlView;
@property(retain, nonatomic) WCPlayerPlayArgs *playerInfo; // @synthesize playerInfo=_playerInfo;
@property(retain, nonatomic) WCPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) double mediaAspectRatio;
- (void)onGetVideoSize:(struct CGSize)arg1;
- (_Bool)isCurrentPlaying;
- (void)stopPlayLive;
- (void)startPlayLive;
- (void)startPlayMedia;
- (void)pausePlayMedia;
- (id)createPlayerConfig;
- (void)setLivePhotoData:(id)arg1 imgageUrl:(id)arg2;
- (id)getLiveVideoPlayInfo;
- (id)getNormalVideoPlayInfo;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isForceMuted) _Bool forceMuted;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,GisForceMuted

@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isMuted) _Bool muted;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,GisMuted

@property(readonly) Class superclass;
@property(nonatomic) __weak id <TextStateBaseMediaViewDelegate> textStateDelegate;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<TextStateBaseMediaViewDelegate>",?,W,N


@end

