//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, NSString, UILabel, WCFinderDataItem, WCFinderFeedImageCDNView, WCFinderLiveNowView, WCFinderStaticCoverCollectionViewCellConfig, WCFinderStaticCoverInfoView;
@protocol WCFinderLiveIconAnimationProtocol;

@interface WCFinderFeedStaticCoverView : UIView
{
    int _coverShowStyle;
    WCFinderFeedImageCDNView *_coverImageView;
    CDUnknownBlockType _renderReporter;
    UIView<WCFinderLiveIconAnimationProtocol> *_liveNowView;
    WCFinderLiveNowView *_liveEndView;
    unsigned long long _topLeftType;
    WCFinderStaticCoverCollectionViewCellConfig *_config;
    WCFinderDataItem *_dataItem;
    WCFinderStaticCoverInfoView *_bottomLeftInfoView;
    WCFinderStaticCoverInfoView *_infoView;
    UIView *_infoBGView;
    CAGradientLayer *_infoBGLayer;
    UIView *_gradientView;
    CAGradientLayer *_gradientLayer;
    WCFinderFeedImageCDNView *_backGroundCoverView;
    UIView *_infoMaskView;
    UILabel *_liveCoverEffectLabel;
    struct UIEdgeInsets _customInfoViewInsets;
}

+ (_Bool)shouldShowRedPacketItemWithDataItem:(id)arg1 config:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *liveCoverEffectLabel; // @synthesize liveCoverEffectLabel=_liveCoverEffectLabel;
@property(retain, nonatomic) UIView *infoMaskView; // @synthesize infoMaskView=_infoMaskView;
@property(retain, nonatomic) WCFinderFeedImageCDNView *backGroundCoverView; // @synthesize backGroundCoverView=_backGroundCoverView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) CAGradientLayer *infoBGLayer; // @synthesize infoBGLayer=_infoBGLayer;
@property(retain, nonatomic) UIView *infoBGView; // @synthesize infoBGView=_infoBGView;
@property(retain, nonatomic) WCFinderStaticCoverInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) WCFinderStaticCoverInfoView *bottomLeftInfoView; // @synthesize bottomLeftInfoView=_bottomLeftInfoView;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) int coverShowStyle; // @synthesize coverShowStyle=_coverShowStyle;
@property(retain, nonatomic) WCFinderStaticCoverCollectionViewCellConfig *config; // @synthesize config=_config;
@property(nonatomic) unsigned long long topLeftType; // @synthesize topLeftType=_topLeftType;
@property(retain, nonatomic) WCFinderLiveNowView *liveEndView; // @synthesize liveEndView=_liveEndView;
@property(retain, nonatomic) UIView<WCFinderLiveIconAnimationProtocol> *liveNowView; // @synthesize liveNowView=_liveNowView;
@property(copy, nonatomic) CDUnknownBlockType renderReporter; // @synthesize renderReporter=_renderReporter;
@property(retain, nonatomic) WCFinderFeedImageCDNView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(nonatomic) struct UIEdgeInsets customInfoViewInsets; // @synthesize customInfoViewInsets=_customInfoViewInsets;
- (id)accessibilityLabel;
- (void)onFinderLiveCloseWithTid:(id)arg1;
- (void)updateInfoCoverMask;
- (_Bool)isCoverLoaded;
- (void)reportCDNImageRenderCost:(unsigned long long)arg1;
- (void)finderFeedImageLoadFinish;
- (id)getLiveNowViewDisplayStr;
- (id)getStrLiveNowViewShouldDisplay;
- (void)hiddenLiveNowView:(_Bool)arg1;
- (void)startLiveAnimation;
- (void)setLiveNowViewHidden:(_Bool)arg1;
- (void)updateCoverImageWithMediaWrap:(id)arg1;
- (void)updateCoverHeight:(double)arg1;
- (void)removeCoverSpamEffect;
- (void)addCoverSpamEffect:(id)arg1;
- (void)removeCoverBlurEffect;
- (void)addCoverBlurEffect;
- (void)addInfoViewGradientView;
- (struct UIEdgeInsets)displayInfoViewEdgeInsets;
- (void)adjustMargin;
- (void)layoutSubviews;
- (void)insertSubviewBelowInfoView:(id)arg1;
- (id)infoRightItemsForDataItem:(id)arg1 config:(id)arg2;
- (id)infoLeftItemsForDataItem:(id)arg1 config:(id)arg2;
- (void)layoutBGInfoView;
- (void)updateInfoViewWithRightItem:(id)arg1 leftItem:(id)arg2 config:(id)arg3;
- (void)updateContentWithDataItem:(id)arg1 config:(id)arg2 scene:(int)arg3;
- (void)adjustEndViewWith:(unsigned long long)arg1;
- (void)initSubviews;
- (void)prepareForReuse;
- (void)setupLiveIconView;
- (void)layoutGradientView;
- (_Bool)updateTopLeftViewType:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

