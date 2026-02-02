//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, MMFinderLiveGiftNewCustomizationModel, MMFinderLiveRewardGiftItem, MMLiveGiftMagicRewardHandler, MMLiveTask, MMLiveTaskId, _TtC6WeChat15MagicRewardView;

@interface MMLiveRewardGiftNewCustomizationEffectPreviewView : UIView
{
    _Bool _isViewAppear;
    MMFinderLiveGiftNewCustomizationModel *_customizationModel;
    MMLiveTaskId *_taskId;
    UIView *_effectPreviewBackView;
    CAGradientLayer *_effectPreviewGradientLayer;
    _TtC6WeChat15MagicRewardView *_effectPreviewView;
    MMLiveGiftMagicRewardHandler *_magicRewardHandler;
    MMFinderLiveRewardGiftItem *_giftItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem; // @synthesize giftItem=_giftItem;
@property(nonatomic) _Bool isViewAppear; // @synthesize isViewAppear=_isViewAppear;
@property(retain, nonatomic) MMLiveGiftMagicRewardHandler *magicRewardHandler; // @synthesize magicRewardHandler=_magicRewardHandler;
@property(retain, nonatomic) _TtC6WeChat15MagicRewardView *effectPreviewView; // @synthesize effectPreviewView=_effectPreviewView;
@property(retain, nonatomic) CAGradientLayer *effectPreviewGradientLayer; // @synthesize effectPreviewGradientLayer=_effectPreviewGradientLayer;
@property(retain, nonatomic) UIView *effectPreviewBackView; // @synthesize effectPreviewBackView=_effectPreviewBackView;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) MMFinderLiveGiftNewCustomizationModel *customizationModel; // @synthesize customizationModel=_customizationModel;
- (void)onResUnloadedWithView:(id)arg1;
- (void)onResLoadedWithView:(id)arg1;
@property(readonly, nonatomic) MMLiveTask *liveTask;
- (void)onViewDidDisappear;
- (void)onViewDidAppear;
- (void)updateKey:(id)arg1 value:(id)arg2;
- (void)updateEffectPreviewViewAlpha:(double)arg1;
- (void)onMagicRewardViewDisplayUpdate;
- (void)configComponentValuesForEffectPreview;
- (void)layoutEffectPreviewView;
- (void)updateEffectPreviewGradientLayer;
- (void)createEffectPreviewGradientLayer;
- (void)layoutEffectPreviewBackView;
- (void)dealloc;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithGiftItem:(id)arg1 taskId:(id)arg2;

@end

