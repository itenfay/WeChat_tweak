//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, FinderLiveGiftWallInfo, MMFinderLiveRewardWish, MMTimer, MMUILabel, NSArray, NSMutableSet, NSString, UIImageView;

@interface MMFinderLiveWishBannerView
{
    _Bool _firstDisplay;
    _Bool _isWishExposed;
    _Bool _isGiftWallExposed;
    _Bool _isGiftWallBanner;
    unsigned int _index;
    unsigned int _lastWidth;
    CDUnknownBlockType _clickedCallBlock;
    CDUnknownBlockType _exposedCallBlock;
    CDUnknownBlockType _uiChangedCallBlock;
    unsigned long long _productTotalCount;
    unsigned long long _productCurCount;
    FinderLiveGiftWallInfo *_giftWallInfo;
    CAGradientLayer *_gradientLayer;
    MMUILabel *_titleLabel;
    UIImageView *_giftImageView;
    MMTimer *_scheduleTimer;
    NSArray *_liveRewardWishes;
    MMFinderLiveRewardWish *_wishGiftItem;
    NSMutableSet *_wishRewardGiftIdSet;
    struct CGRect _lastFrame;
}

+ (double)defaultHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *wishRewardGiftIdSet; // @synthesize wishRewardGiftIdSet=_wishRewardGiftIdSet;
@property(retain, nonatomic) MMFinderLiveRewardWish *wishGiftItem; // @synthesize wishGiftItem=_wishGiftItem;
@property(retain, nonatomic) NSArray *liveRewardWishes; // @synthesize liveRewardWishes=_liveRewardWishes;
@property(nonatomic) _Bool isGiftWallBanner; // @synthesize isGiftWallBanner=_isGiftWallBanner;
@property(nonatomic) _Bool isGiftWallExposed; // @synthesize isGiftWallExposed=_isGiftWallExposed;
@property(nonatomic) _Bool isWishExposed; // @synthesize isWishExposed=_isWishExposed;
@property(nonatomic) struct CGRect lastFrame; // @synthesize lastFrame=_lastFrame;
@property(nonatomic) unsigned int lastWidth; // @synthesize lastWidth=_lastWidth;
@property(nonatomic) _Bool firstDisplay; // @synthesize firstDisplay=_firstDisplay;
@property(nonatomic) unsigned int index; // @synthesize index=_index;
@property(retain, nonatomic) MMTimer *scheduleTimer; // @synthesize scheduleTimer=_scheduleTimer;
@property(retain, nonatomic) UIImageView *giftImageView; // @synthesize giftImageView=_giftImageView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) FinderLiveGiftWallInfo *giftWallInfo; // @synthesize giftWallInfo=_giftWallInfo;
@property(nonatomic) unsigned long long productCurCount; // @synthesize productCurCount=_productCurCount;
@property(nonatomic) unsigned long long productTotalCount; // @synthesize productTotalCount=_productTotalCount;
@property(copy, nonatomic) CDUnknownBlockType uiChangedCallBlock; // @synthesize uiChangedCallBlock=_uiChangedCallBlock;
@property(copy, nonatomic) CDUnknownBlockType exposedCallBlock; // @synthesize exposedCallBlock=_exposedCallBlock;
@property(copy, nonatomic) CDUnknownBlockType clickedCallBlock; // @synthesize clickedCallBlock=_clickedCallBlock;
- (void)onBannerClicked:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 retry:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 resType:(long long)arg4 productId:(id)arg5 downloadUrl:(id)arg6;
- (void)updateWhenFontSizeChanged;
- (id)finderLiveTask;
@property(readonly, nonatomic) _Bool isGiftWallEnable;
@property(readonly, nonatomic) _Bool isGiftWishEnable;
- (void)sizeToFits;
- (void)dismiss;
- (_Bool)checkIfRewardhWishInfoChanged:(id)arg1;
- (void)updateGiftWallInfo:(id)arg1;
- (void)showWithTitle:(id)arg1 productTotalCount:(unsigned long long)arg2 productCurCount:(unsigned long long)arg3 liveRewardWishes:(id)arg4 giftWallInfo:(id)arg5;
- (void)onDisplayWishGiftProgess;
- (void)startScheduleTimer:(unsigned long long)arg1;
- (void)stopScheduleTimer;
- (void)layoutUI;
- (_Bool)isAccessibilityElement;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 andTaskId:(id)arg2 componentKey:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

