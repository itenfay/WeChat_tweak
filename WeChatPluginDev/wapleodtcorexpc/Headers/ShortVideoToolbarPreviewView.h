//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class AVPlayer, AVPlayerItem, AVPlayerLayer, NSString, UIImage, UIImageView, WCShortVideoToolbarResultPreviewBottomView;

@interface ShortVideoToolbarPreviewView : UIView
{
    _Bool _bOnEditting;
    _Bool _isPlaying;
    CDUnknownBlockType _didClickRetakeBlock;
    CDUnknownBlockType _didClickDoneBlock;
    CDUnknownBlockType _didClickMuteBlock;
    CDUnknownBlockType _didClickEditBlock;
    CDUnknownBlockType _didClickEditVideoBlock;
    unsigned long long _m_scene;
    UIImage *_image;
    NSString *_videoPath;
    UIView *_backgrounView;
    UIView *_previewView;
    UIImageView *_imageView;
    UIView *_playerView;
    WCShortVideoToolbarResultPreviewBottomView *_botView;
    UIImageView *_m_topBkgView;
    AVPlayerItem *_playerItem;
    AVPlayer *_player;
    AVPlayerLayer *_playerLayer;
    struct CGRect _previewFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(retain, nonatomic) UIImageView *m_topBkgView; // @synthesize m_topBkgView=_m_topBkgView;
@property(retain, nonatomic) WCShortVideoToolbarResultPreviewBottomView *botView; // @synthesize botView=_botView;
@property(retain, nonatomic) UIView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) UIView *backgrounView; // @synthesize backgrounView=_backgrounView;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) struct CGRect previewFrame; // @synthesize previewFrame=_previewFrame;
@property(nonatomic) _Bool bOnEditting; // @synthesize bOnEditting=_bOnEditting;
@property(nonatomic) unsigned long long m_scene; // @synthesize m_scene=_m_scene;
@property(copy, nonatomic) CDUnknownBlockType didClickEditVideoBlock; // @synthesize didClickEditVideoBlock=_didClickEditVideoBlock;
@property(copy, nonatomic) CDUnknownBlockType didClickEditBlock; // @synthesize didClickEditBlock=_didClickEditBlock;
@property(copy, nonatomic) CDUnknownBlockType didClickMuteBlock; // @synthesize didClickMuteBlock=_didClickMuteBlock;
@property(copy, nonatomic) CDUnknownBlockType didClickDoneBlock; // @synthesize didClickDoneBlock=_didClickDoneBlock;
@property(copy, nonatomic) CDUnknownBlockType didClickRetakeBlock; // @synthesize didClickRetakeBlock=_didClickRetakeBlock;
- (void)didEnterBackground;
- (void)willEnterForeground;
- (void)stopVideo;
- (void)didClickEditVideo;
- (void)didClickEdit;
- (void)didClickMute;
- (void)didClickDone;
- (void)didClickRetake;
- (void)setupBottomView;
- (void)setupPreviewView;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)continuePlayVideo;
- (void)pauseVideo;
- (id)setImage:(id)arg1 Orientation:(long long)arg2 isFrontCamera:(_Bool)arg3;
- (void)setVideoPath:(id)arg1 withOrientation:(long long)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 previewFrame:(struct CGRect)arg2;

@end

