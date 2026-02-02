//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class ColorGradientView, MMUIButton, NSArray, NSMutableArray;

@interface WCFinderLiveReplayRateOperationView : UIView
{
    _Bool _isShown;
    _Bool _isPortraitLayout;
    _Bool _isAnimating;
    CDUnknownBlockType _panelOpenCallback;
    CDUnknownBlockType _panelCloseCallback;
    CDUnknownBlockType _onRateChangedCallback;
    UIView *_backView;
    ColorGradientView *_gradientView;
    NSMutableArray *_rateBtnList;
    double _selectedRate;
    MMUIButton *_selectedBtn;
    NSArray *_rateList;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) _Bool isPortraitLayout; // @synthesize isPortraitLayout=_isPortraitLayout;
@property(retain, nonatomic) NSArray *rateList; // @synthesize rateList=_rateList;
@property(nonatomic) __weak MMUIButton *selectedBtn; // @synthesize selectedBtn=_selectedBtn;
@property(nonatomic) double selectedRate; // @synthesize selectedRate=_selectedRate;
@property(retain, nonatomic) NSMutableArray *rateBtnList; // @synthesize rateBtnList=_rateBtnList;
@property(retain, nonatomic) ColorGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(nonatomic) _Bool isShown; // @synthesize isShown=_isShown;
@property(copy, nonatomic) CDUnknownBlockType onRateChangedCallback; // @synthesize onRateChangedCallback=_onRateChangedCallback;
@property(copy, nonatomic) CDUnknownBlockType panelCloseCallback; // @synthesize panelCloseCallback=_panelCloseCallback;
@property(copy, nonatomic) CDUnknownBlockType panelOpenCallback; // @synthesize panelOpenCallback=_panelOpenCallback;
- (_Bool)shouldConsumeTouchFromFullScreenPanGesture:(id)arg1 fromView:(id)arg2;
- (_Bool)shouldConsumeTouchFromFullScreenGesture:(id)arg1 fromView:(id)arg2;
- (void)closePanelWithAnimated;
- (void)showPanelWithAnimated;
- (void)onSingleTapGestureRecognizer:(id)arg1;
- (void)onRateButtonClicked:(id)arg1;
- (id)getRateToast:(double)arg1;
- (id)getRateText:(double)arg1;
- (double)getAllBtnLengthWithBtnDistance:(double)arg1;
- (void)updateRateBtnsOrigin;
- (void)updateRateBtnTitleColor:(id)arg1;
- (void)layoutRateBtns;
- (double)gradientContentHeight;
- (double)gradientContentWidth;
- (struct CGRect)gradientRect;
- (void)layoutGradientView;
- (void)layoutBackView;
- (void)handleForLayoutOrientationChanged;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithDefaultRate:(double)arg1;
- (id)initWithRateList:(id)arg1 defaultRate:(double)arg2;

@end

