//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveMusicSettingOperationBar, MMUILabel, NSString, UIColor, UIFont;

@interface MMFinderLiveMusicSettingOperationNavBar : UIView
{
    _Bool _hideRightViews;
    _Bool _shouldAdaptToDarkLight;
    NSString *_noDataTitle;
    NSString *_dataLoadedTitle;
    NSString *_defaultTitle;
    NSString *_dataEditedTitle;
    UIColor *_editDoneButtonColor;
    UIFont *_customTitleFont;
    UIFont *_customSubTitleFont;
    NSString *_normalSubtitle;
    NSString *_editingSubtitle;
    NSString *_noDataSubtitle;
    long long _currentState;
    CDUnknownBlockType _leftButtonActionCallback;
    CDUnknownBlockType _rightButtonActionCallback;
    CDUnknownBlockType _addButtonActionCallback;
    CDUnknownBlockType _operationBarTapCallback;
    UIView *_navLeftButton;
    UIView *_navRightButton;
    MMUILabel *_titleView;
    MMUILabel *_subtitleView;
    MMFinderLiveMusicSettingOperationBar *_settingOpertionBar;
}

+ (double)preferHeight;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldAdaptToDarkLight; // @synthesize shouldAdaptToDarkLight=_shouldAdaptToDarkLight;
@property(retain, nonatomic) MMFinderLiveMusicSettingOperationBar *settingOpertionBar; // @synthesize settingOpertionBar=_settingOpertionBar;
@property(retain, nonatomic) MMUILabel *subtitleView; // @synthesize subtitleView=_subtitleView;
@property(retain, nonatomic) MMUILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIView *navRightButton; // @synthesize navRightButton=_navRightButton;
@property(retain, nonatomic) UIView *navLeftButton; // @synthesize navLeftButton=_navLeftButton;
@property(copy, nonatomic) CDUnknownBlockType operationBarTapCallback; // @synthesize operationBarTapCallback=_operationBarTapCallback;
@property(copy, nonatomic) CDUnknownBlockType addButtonActionCallback; // @synthesize addButtonActionCallback=_addButtonActionCallback;
@property(copy, nonatomic) CDUnknownBlockType rightButtonActionCallback; // @synthesize rightButtonActionCallback=_rightButtonActionCallback;
@property(copy, nonatomic) CDUnknownBlockType leftButtonActionCallback; // @synthesize leftButtonActionCallback=_leftButtonActionCallback;
@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) NSString *noDataSubtitle; // @synthesize noDataSubtitle=_noDataSubtitle;
@property(retain, nonatomic) NSString *editingSubtitle; // @synthesize editingSubtitle=_editingSubtitle;
@property(retain, nonatomic) NSString *normalSubtitle; // @synthesize normalSubtitle=_normalSubtitle;
@property(nonatomic) _Bool hideRightViews; // @synthesize hideRightViews=_hideRightViews;
@property(retain, nonatomic) UIFont *customSubTitleFont; // @synthesize customSubTitleFont=_customSubTitleFont;
@property(retain, nonatomic) UIFont *customTitleFont; // @synthesize customTitleFont=_customTitleFont;
@property(retain, nonatomic) UIColor *editDoneButtonColor; // @synthesize editDoneButtonColor=_editDoneButtonColor;
@property(retain, nonatomic) NSString *dataEditedTitle; // @synthesize dataEditedTitle=_dataEditedTitle;
@property(retain, nonatomic) NSString *defaultTitle; // @synthesize defaultTitle=_defaultTitle;
@property(retain, nonatomic) NSString *dataLoadedTitle; // @synthesize dataLoadedTitle=_dataLoadedTitle;
@property(retain, nonatomic) NSString *noDataTitle; // @synthesize noDataTitle=_noDataTitle;
@property(readonly, nonatomic) MMFinderLiveMusicSettingOperationBar *currentSettingOperationBar;
- (void)rightButtonAction;
- (void)leftButtonAction;
- (id)createOperationBar;
- (id)getCurrentRightView;
- (id)getCurrentLeftButton;
- (id)getTitleLabelWithTitle:(id)arg1;
- (id)getCurrentSubTitleView;
- (id)getCurrentTitleView;
- (void)updateUI;
- (void)layoutNavRightButton;
- (void)layoutNavLeftButton;
- (void)layoutTitleView;
- (void)layoutSubTitleView;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 adaptDarkLight:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

