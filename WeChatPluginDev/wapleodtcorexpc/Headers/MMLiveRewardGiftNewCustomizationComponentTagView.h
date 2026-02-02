//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveNewCustomGiftComponentValue, MMUILabel, MMWebImageView, UIImageView;

@interface MMLiveRewardGiftNewCustomizationComponentTagView : UIView
{
    _Bool _isSelect;
    MMFinderLiveNewCustomGiftComponentValue *_componentValue;
    CDUnknownBlockType _componentTagTapCallback;
    unsigned long long _uiStyle;
    UIView *_selectStyleView;
    UIView *_contentBackView;
    MMWebImageView *_contentImgView;
    MMUILabel *_nameLabel;
    UIImageView *_beanIconView;
    MMUILabel *_beanCntLabel;
    MMUILabel *_beanIncreaseLabel;
}

+ (double)leftInset;
+ (double)preferHeight;
+ (double)preferWidth;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *beanIncreaseLabel; // @synthesize beanIncreaseLabel=_beanIncreaseLabel;
@property(retain, nonatomic) MMUILabel *beanCntLabel; // @synthesize beanCntLabel=_beanCntLabel;
@property(retain, nonatomic) UIImageView *beanIconView; // @synthesize beanIconView=_beanIconView;
@property(retain, nonatomic) MMUILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMWebImageView *contentImgView; // @synthesize contentImgView=_contentImgView;
@property(retain, nonatomic) UIView *contentBackView; // @synthesize contentBackView=_contentBackView;
@property(retain, nonatomic) UIView *selectStyleView; // @synthesize selectStyleView=_selectStyleView;
@property(nonatomic) unsigned long long uiStyle; // @synthesize uiStyle=_uiStyle;
@property(copy, nonatomic) CDUnknownBlockType componentTagTapCallback; // @synthesize componentTagTapCallback=_componentTagTapCallback;
@property(nonatomic) _Bool isSelect; // @synthesize isSelect=_isSelect;
@property(retain, nonatomic) MMFinderLiveNewCustomGiftComponentValue *componentValue; // @synthesize componentValue=_componentValue;
- (void)onComponentTagTap:(id)arg1;
- (void)updateBeanWidgetsOrigin;
- (void)layoutBeanCntLabel;
- (void)layoutBeanIconView;
- (void)layoutBeanIncreaseLabel;
- (void)layoutBeanWidgets;
- (void)layoutNameLabel;
- (double)contentImageViewWidth;
- (void)layoutContentImgView;
- (void)layoutContentBackView;
- (void)updateSelectStyleViewBorderColor;
- (void)layoutSelectStyleView;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithComponentValue:(id)arg1 uiStyle:(unsigned long long)arg2;

@end

