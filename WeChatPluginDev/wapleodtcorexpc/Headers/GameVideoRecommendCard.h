//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class GameHaowanMediaWrap, MMAssetForGameHaowan, MMWebImageView, UIButton, UILabel, WCPlayerView;
@protocol GameVideoRecommendCardDelegate;

@interface GameVideoRecommendCard : UIView
{
    id <GameVideoRecommendCardDelegate> _delegate;
    MMWebImageView *_coverImgView;
    UILabel *_descLabel;
    UILabel *_durationLabel;
    UILabel *_timeLabel;
    UIButton *_publishBtn;
    UIView *_tagViewContainer;
    WCPlayerView *_playerView;
    GameHaowanMediaWrap *_mediaWrap;
    MMAssetForGameHaowan *_asset;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMAssetForGameHaowan *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) GameHaowanMediaWrap *mediaWrap; // @synthesize mediaWrap=_mediaWrap;
@property(retain, nonatomic) WCPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) UIView *tagViewContainer; // @synthesize tagViewContainer=_tagViewContainer;
@property(retain, nonatomic) UIButton *publishBtn; // @synthesize publishBtn=_publishBtn;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMWebImageView *coverImgView; // @synthesize coverImgView=_coverImgView;
@property(nonatomic) __weak id <GameVideoRecommendCardDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)hiddenThumbImageView;
- (void)showThumbImageView;
- (void)selectAction;
- (void)goPublishAction;
- (id)calculateCreateTitle:(id)arg1;
- (void)addTagViews:(id)arg1;
- (void)configWithRecommendAsset:(id)arg1;
- (id)getPlayerInfoWithUrl:(id)arg1;
- (void)pausePlay;
- (void)startPlay;
- (id)createPlayerView;
- (void)layoutSubviews;
- (void)setUp;
- (id)initWithFrame:(struct CGRect)arg1;

@end

