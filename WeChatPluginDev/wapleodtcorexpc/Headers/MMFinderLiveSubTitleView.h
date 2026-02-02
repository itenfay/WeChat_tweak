//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, MMFinderLiveSubTitleModel, MMFinderLiveSubTitleViewModel, MMLiveTaskId, RichTextView;

@interface MMFinderLiveSubTitleView : UIView
{
    _Bool _hasContent;
    _Bool _isLiveMinimized;
    MMLiveTaskId *_taskId;
    UIView *_gradientView;
    CAGradientLayer *_gradientLayer;
    UIView *_chnSubTitleAreaView;
    UIView *_engSubTitleAreaView;
    RichTextView *_chnSubTitleTextView;
    RichTextView *_engSubTitleTextView;
    MMFinderLiveSubTitleModel *_subTitleModel;
    MMFinderLiveSubTitleViewModel *_subTitleViewModel;
    double _standardChnSubTitleLineHeight;
}

+ (unsigned long long)getEngDisplayMode;
+ (unsigned long long)getChnDisplayMode;
+ (unsigned long long)getCurrentEngMaxLineNum;
+ (unsigned long long)getCurrentChnMaxLineNum;
+ (id)getCurrentEngSubTitleTextAttributeObj;
+ (id)getCurrentChnSubTitleTextAttributeObj;
+ (id)getCurrentEngSubTitleFont;
+ (id)getCurrentChnSubTitleFont;
- (void).cxx_destruct;
@property(nonatomic) double standardChnSubTitleLineHeight; // @synthesize standardChnSubTitleLineHeight=_standardChnSubTitleLineHeight;
@property(nonatomic) _Bool isLiveMinimized; // @synthesize isLiveMinimized=_isLiveMinimized;
@property(nonatomic) _Bool hasContent; // @synthesize hasContent=_hasContent;
@property(retain, nonatomic) MMFinderLiveSubTitleViewModel *subTitleViewModel; // @synthesize subTitleViewModel=_subTitleViewModel;
@property(retain, nonatomic) MMFinderLiveSubTitleModel *subTitleModel; // @synthesize subTitleModel=_subTitleModel;
@property(retain, nonatomic) RichTextView *engSubTitleTextView; // @synthesize engSubTitleTextView=_engSubTitleTextView;
@property(retain, nonatomic) RichTextView *chnSubTitleTextView; // @synthesize chnSubTitleTextView=_chnSubTitleTextView;
@property(retain, nonatomic) UIView *engSubTitleAreaView; // @synthesize engSubTitleAreaView=_engSubTitleAreaView;
@property(retain, nonatomic) UIView *chnSubTitleAreaView; // @synthesize chnSubTitleAreaView=_chnSubTitleAreaView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(readonly, nonatomic) _Bool isSubTitleDisabled;
@property(readonly, nonatomic) _Bool isSubTitleClosed;
@property(readonly, nonatomic) _Bool hasStartSubTitleDisplay;
@property(readonly, nonatomic) _Bool enableDisplaySubTitle;
- (void)setAlpha:(double)arg1;
- (void)updateDisplayAlpha;
- (void)updateStandardChnSubTitleLineHeight;
- (void)updateSubTitleUIConfigModel;
- (id)getCurrentSubTitleUIConfigModel;
- (void)createSubTitleModel;
- (double)preferLeftRightInset;
- (double)preferBottomInsetInDisplayScene:(unsigned long long)arg1;
- (double)preferChnSubTitleAreaHeight;
- (double)preferEngSubTitleAreaHeight;
- (id)getSubTitleTextView:(long long)arg1;
- (unsigned long long)refreshSubTitle:(id)arg1;
- (void)onMaximizeStarted;
- (void)onMinimizeStarted;
- (void)updateSubTitleDisabled:(_Bool)arg1;
- (void)updateSubTitleClosed:(_Bool)arg1;
- (double)preferHeightInDisplayScene:(unsigned long long)arg1;
- (void)onOrientationChanged;
- (void)scrollSubTitleToBottomAnimated:(long long)arg1;
- (void)updateEngSubTitleTextViewOriginWithRefreshStyle:(unsigned long long)arg1;
- (void)updateChnSubTitleTextViewOriginWithRefreshStyle:(unsigned long long)arg1;
- (void)updateSubTitleTextViewOrigin:(id)arg1 refreshStyle:(unsigned long long)arg2;
- (void)updateSubTitleAreaViewsOrigin;
- (void)layoutEngSubTitleView;
- (void)layoutChnSubTitleView;
- (void)layoutGradientView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)unRegisterExtensions;
- (void)registerExtensions;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

