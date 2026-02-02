//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, MMMusicPlayerContoller, MMMusicRhythmBackgroundView, MMWebImageView, NSString, UIImageView, UILabel, UIViewPropertyAnimator, UIVisualEffectView, WCDataItem, WCImageView;

@interface WCTimeLineCellMusicPlayerView : UIView
{
    MMMusicPlayerContoller *_playButton;
    CAGradientLayer *_gradientLayer;
    MMMusicRhythmBackgroundView *_backgroundView;
    UIVisualEffectView *_blurView;
    UIViewPropertyAnimator *_animator;
    MMWebImageView *_albumCoverView;
    UIImageView *_blurBgImageView;
    UIImageView *_albumMaskImageView;
    UILabel *_titleLabel;
    UILabel *_singerLabel;
    UILabel *_detailLabel;
    UILabel *_whoseMVLabel;
    WCDataItem *_dataItem;
    unsigned long long _scene;
    WCImageView *_albumLocalImageView;
}

+ (double)viewHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) WCImageView *albumLocalImageView; // @synthesize albumLocalImageView=_albumLocalImageView;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) UILabel *whoseMVLabel; // @synthesize whoseMVLabel=_whoseMVLabel;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *singerLabel; // @synthesize singerLabel=_singerLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *albumMaskImageView; // @synthesize albumMaskImageView=_albumMaskImageView;
@property(retain, nonatomic) UIImageView *blurBgImageView; // @synthesize blurBgImageView=_blurBgImageView;
@property(retain, nonatomic) MMWebImageView *albumCoverView; // @synthesize albumCoverView=_albumCoverView;
@property(retain, nonatomic) UIViewPropertyAnimator *animator; // @synthesize animator=_animator;
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) MMMusicRhythmBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) MMMusicPlayerContoller *playButton; // @synthesize playButton=_playButton;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onClickToPlayMusic:(id)arg1 playState:(long long)arg2 clickedOnBtn:(_Bool)arg3;
- (void)onMusicPlayStatusChanged;
- (void)updateWithDataItem:(id)arg1 scene:(unsigned long long)arg2;
- (void)configPlayButton;
- (void)resetGradientLayer;
- (void)layoutSubviews;
- (void)setupSubviews;
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

