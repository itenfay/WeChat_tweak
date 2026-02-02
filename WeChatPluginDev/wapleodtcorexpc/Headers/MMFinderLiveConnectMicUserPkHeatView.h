//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, MMFinderLiveConnectMicPkTeam, MMFinderLiveConnectMicPkUser, MMLiveGradientLayerView, UIImageView, UILabel;
@protocol MMFinderLiveConnectMicUserPkHeatViewDelegate;

@interface MMFinderLiveConnectMicUserPkHeatView : UIView
{
    _Bool _isSelfAnchorTeam;
    _Bool _smallMode;
    id <MMFinderLiveConnectMicUserPkHeatViewDelegate> _delegate;
    MMFinderLiveConnectMicPkTeam *_team;
    MMFinderLiveConnectMicPkUser *_user;
    UIView *_containerView;
    MMLiveGradientLayerView *_circleRankView;
    UILabel *_rankLabel;
    UIImageView *_designatedGiftThumbnailView;
    UILabel *_heatLabel;
    CAGradientLayer *_containerGradientLayer;
}

+ (double)heightWithSmallMode:(_Bool)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool smallMode; // @synthesize smallMode=_smallMode;
@property(nonatomic) _Bool isSelfAnchorTeam; // @synthesize isSelfAnchorTeam=_isSelfAnchorTeam;
@property(retain, nonatomic) CAGradientLayer *containerGradientLayer; // @synthesize containerGradientLayer=_containerGradientLayer;
@property(retain, nonatomic) UILabel *heatLabel; // @synthesize heatLabel=_heatLabel;
@property(retain, nonatomic) UIImageView *designatedGiftThumbnailView; // @synthesize designatedGiftThumbnailView=_designatedGiftThumbnailView;
@property(retain, nonatomic) UILabel *rankLabel; // @synthesize rankLabel=_rankLabel;
@property(retain, nonatomic) MMLiveGradientLayerView *circleRankView; // @synthesize circleRankView=_circleRankView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) MMFinderLiveConnectMicPkUser *user; // @synthesize user=_user;
@property(retain, nonatomic) MMFinderLiveConnectMicPkTeam *team; // @synthesize team=_team;
@property(nonatomic) __weak id <MMFinderLiveConnectMicUserPkHeatViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTapped;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateWithPkTeam:(id)arg1 uiConf:(id)arg2 pkUser:(id)arg3 isSelfAnchorTeam:(_Bool)arg4 showRank:(_Bool)arg5 designatedGiftItem:(id)arg6 smallMode:(_Bool)arg7;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

