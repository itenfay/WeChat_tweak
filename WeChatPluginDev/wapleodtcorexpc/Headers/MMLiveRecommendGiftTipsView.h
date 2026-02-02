//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveRewardGiftItem, MMFinderLiveTask, MMFinderLiveTaskId, MMUILabel, MMUIView, NSString, UIImageView, UIView;

@interface MMLiveRecommendGiftTipsView
{
    unsigned long long _scene;
    MMFinderLiveRewardGiftItem *_giftItem;
    CDUnknownBlockType _tapAction;
    MMFinderLiveTaskId *_liveTaskId;
    NSString *_wording;
    UIImageView *_thumbnailView;
    MMUIView *_expireDaysContainerView;
    MMUILabel *_expireDaysLabel;
    MMUILabel *_recommendWordingLabel;
    MMUILabel *_priceLabel;
    UIImageView *_coinIconView;
    UIView *_seperatorLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *seperatorLine; // @synthesize seperatorLine=_seperatorLine;
@property(retain, nonatomic) UIImageView *coinIconView; // @synthesize coinIconView=_coinIconView;
@property(retain, nonatomic) MMUILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) MMUILabel *recommendWordingLabel; // @synthesize recommendWordingLabel=_recommendWordingLabel;
@property(retain, nonatomic) MMUILabel *expireDaysLabel; // @synthesize expireDaysLabel=_expireDaysLabel;
@property(retain, nonatomic) MMUIView *expireDaysContainerView; // @synthesize expireDaysContainerView=_expireDaysContainerView;
@property(retain, nonatomic) UIImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain, nonatomic) NSString *wording; // @synthesize wording=_wording;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(copy, nonatomic) CDUnknownBlockType tapAction; // @synthesize tapAction=_tapAction;
@property(retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem; // @synthesize giftItem=_giftItem;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 retry:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 resType:(long long)arg4 productId:(id)arg5 downloadUrl:(id)arg6;
@property(readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
- (id)currentBasicReportParams;
- (void)updateWithScene:(unsigned long long)arg1 giftItem:(id)arg2 wording:(id)arg3;
- (void)onTapGiftTipsView;
- (id)getDefaultGiftThumbImage;
- (double)selfCornerRadius;
- (double)triangeArrowHeight;
- (double)triangeArrowWidth;
- (void)removeAllSubViews;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)initUI;
- (id)initWithTaskId:(id)arg1 frame:(struct CGRect)arg2 orientation:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

