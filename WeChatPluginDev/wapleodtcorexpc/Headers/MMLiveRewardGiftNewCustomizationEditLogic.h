//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveGiftNewCustomizationModel, MMFinderLiveNewCustomGiftStyleObj, MMFinderLiveTask, MMLiveRewardGiftNewCustomizationEffectPreviewView, MMLiveRewardGiftNewCustomizationPriceDisplayView, MMLiveTaskId;

@interface MMLiveRewardGiftNewCustomizationEditLogic : NSObject
{
    _Bool _currEnableUseCustomText;
    MMFinderLiveGiftNewCustomizationModel *_customizationModel;
    MMFinderLiveNewCustomGiftStyleObj *_currentSelectStyle;
    MMLiveRewardGiftNewCustomizationEffectPreviewView *_effectPreviewView;
    MMLiveRewardGiftNewCustomizationPriceDisplayView *_priceDisplayView;
    CDUnknownBlockType _enableUseCustomTextAbilityChangeCallback;
    CDUnknownBlockType _giftNewCustomizationSelectChangeCallback;
    CDUnknownBlockType _currComponentKeyUpdateCallback;
    CDUnknownBlockType _selectStyleAutoChangeCallback;
    MMLiveTaskId *_taskId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(copy, nonatomic) CDUnknownBlockType selectStyleAutoChangeCallback; // @synthesize selectStyleAutoChangeCallback=_selectStyleAutoChangeCallback;
@property(copy, nonatomic) CDUnknownBlockType currComponentKeyUpdateCallback; // @synthesize currComponentKeyUpdateCallback=_currComponentKeyUpdateCallback;
@property(copy, nonatomic) CDUnknownBlockType giftNewCustomizationSelectChangeCallback; // @synthesize giftNewCustomizationSelectChangeCallback=_giftNewCustomizationSelectChangeCallback;
@property(copy, nonatomic) CDUnknownBlockType enableUseCustomTextAbilityChangeCallback; // @synthesize enableUseCustomTextAbilityChangeCallback=_enableUseCustomTextAbilityChangeCallback;
@property(nonatomic) __weak MMLiveRewardGiftNewCustomizationPriceDisplayView *priceDisplayView; // @synthesize priceDisplayView=_priceDisplayView;
@property(nonatomic) __weak MMLiveRewardGiftNewCustomizationEffectPreviewView *effectPreviewView; // @synthesize effectPreviewView=_effectPreviewView;
@property(nonatomic) _Bool currEnableUseCustomText; // @synthesize currEnableUseCustomText=_currEnableUseCustomText;
@property(retain, nonatomic) MMFinderLiveNewCustomGiftStyleObj *currentSelectStyle; // @synthesize currentSelectStyle=_currentSelectStyle;
@property(retain, nonatomic) MMFinderLiveGiftNewCustomizationModel *customizationModel; // @synthesize customizationModel=_customizationModel;
@property(readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
- (void)commitCustomizationConfig:(CDUnknownBlockType)arg1;
- (void)updateInputText:(id)arg1;
- (void)autoChangeSelectStyle:(id)arg1;
- (void)updateCurrentSelectStyle:(id)arg1;
- (id)getCurrentSelectComponentKeyList;
- (void)checkEnableUseCustomTextIsChange;
- (void)configCustomizationCallbacks;
- (void)initDefaultData;
- (id)initWithCustomizationModel:(id)arg1 taskId:(id)arg2;

@end

