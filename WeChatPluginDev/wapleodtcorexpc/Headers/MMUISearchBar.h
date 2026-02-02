//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UISearchBar.h>

@class NSNumber, UIColor, UIImage, UIImageView, UILabel, UISearchController, UIView;

@interface MMUISearchBar : UISearchBar
{
    _Bool m_bForceAdjustFrame;
    _Bool m_bNonControllerBind;
    UIView *_innerCursor;
    UIView *_bottomLine;
    NSNumber *_oIconDefaultWidth;
    struct CGSize _iconDefaultSize;
    _Bool _bForbidAdjustIconSize;
    _Bool _bForceFixHeight;
    _Bool _bNeedCheckTopLeak;
    _Bool _bForbidAdjustCursor;
    _Bool _bMagnifierTipsCenter;
    _Bool _forbidBecomeFirstResponder;
    UIColor *_cancelButtonColor;
    UIColor *_placeHolderIconColor;
    UIImage *_placeHolderIcon;
    UIColor *_textFieldColor;
    unsigned long long _bottomLineStyle;
    UISearchController *_weakSearchController;
    unsigned long long _eControlState;
    UILabel *_tipsLabel;
    UIImageView *_rightLoadingView;
    struct CGSize _sizeForNoCancelButtonTextField;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize sizeForNoCancelButtonTextField; // @synthesize sizeForNoCancelButtonTextField=_sizeForNoCancelButtonTextField;
@property(nonatomic) _Bool forbidBecomeFirstResponder; // @synthesize forbidBecomeFirstResponder=_forbidBecomeFirstResponder;
@property(nonatomic) _Bool bMagnifierTipsCenter; // @synthesize bMagnifierTipsCenter=_bMagnifierTipsCenter;
@property(retain, nonatomic) UIImageView *rightLoadingView; // @synthesize rightLoadingView=_rightLoadingView;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(nonatomic) _Bool bForbidAdjustCursor; // @synthesize bForbidAdjustCursor=_bForbidAdjustCursor;
@property(nonatomic) unsigned long long eControlState; // @synthesize eControlState=_eControlState;
@property(nonatomic) __weak UISearchController *weakSearchController; // @synthesize weakSearchController=_weakSearchController;
@property(nonatomic) _Bool bNeedCheckTopLeak; // @synthesize bNeedCheckTopLeak=_bNeedCheckTopLeak;
@property(nonatomic) unsigned long long bottomLineStyle; // @synthesize bottomLineStyle=_bottomLineStyle;
@property(retain, nonatomic) UIColor *textFieldColor; // @synthesize textFieldColor=_textFieldColor;
@property(retain, nonatomic) UIImage *placeHolderIcon; // @synthesize placeHolderIcon=_placeHolderIcon;
@property(retain, nonatomic) UIColor *placeHolderIconColor; // @synthesize placeHolderIconColor=_placeHolderIconColor;
@property(retain, nonatomic) UIColor *cancelButtonColor; // @synthesize cancelButtonColor=_cancelButtonColor;
@property(nonatomic) _Bool bForceFixHeight; // @synthesize bForceFixHeight=_bForceFixHeight;
@property(nonatomic) _Bool bForbidAdjustIconSize; // @synthesize bForbidAdjustIconSize=_bForbidAdjustIconSize;
@property(nonatomic) _Bool m_bNonControllerBind; // @synthesize m_bNonControllerBind;
@property(nonatomic) _Bool m_bForceAdjustFrame; // @synthesize m_bForceAdjustFrame;
- (void)setCancelButtonText;
- (void)resetCursorAnimation;
- (void)fixCursorAnimation;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)cacheCursorAddress;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)layoutSubviews;
- (void)fixIOS13Issue;
- (void)fixPlaceHolderColor;
- (void)fixTextField;
- (void)updateBottomLineStyle;
- (id)getSearchBarBackground;
- (void)fixSearchBarBackgroundWhenActive;
- (void)fixPlaceLabelCenterAlign;
- (void)fixTipsLeftAlign;
- (void)fixTipsCenterAlign;
- (void)resetCachedValues;
- (double)textFieldWidthWhenResignResponder;
- (void)setPlaceholder:(id)arg1;
- (void)fixOrientationBug;
- (void)fixLayoutOnActiveSearch;
- (void)fixSearchIconSize;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)recursiveFindTextFieldActionButton:(id)arg1;
- (id)findTextFieldActionButton;
- (id)recursiveFindCancelButton:(id)arg1;
- (id)findCancelButton;
- (id)internalFindPlaceHolderIcon;
- (id)findPlaceHolderIcon:(id)arg1;
- (id)findUISearchBarImage:(id)arg1;
- (id)findUISearchBarTextFieldLabel:(id)arg1;
- (_Bool)isViewOfUISearchController:(id)arg1;
- (void)setImageForSearchIcon;
- (void)onControlStateChangeTo:(unsigned long long)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)didMoveToSuperview;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (_Bool)handleCursorObserveForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeFakeCursor;
- (id)genFakeCursor;
- (void)animateFakeCursor;
- (void)layoutTagView;
- (void)removeTextLoadingView;
- (void)showTextLoadingView;
- (void)resetAttributes;
- (void)resetTextAttributes;
- (id)getTextField;
- (void)textFieldAddSubView:(id)arg1;
- (void)setTagAttributeText:(id)arg1;
- (void)setCustomTipsLabelHidden:(_Bool)arg1;
- (void)setTipsLabelText:(id)arg1;
- (void)internalInitTipsLabel;

@end

