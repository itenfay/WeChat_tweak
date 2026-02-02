//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMGrowTextView, MMUIButton, MMUILabel, MMUIViewController, NSString, UIButton, UIScrollView, WCInputController;
@protocol MPShareWowEditViewDelegate;

@interface MPShareWowEditView : UIView
{
    unsigned int _theme;
    double _defaultHeight;
    id <MPShareWowEditViewDelegate> _delegate;
    MMUIViewController *_viewController;
    UIView *_navBarView;
    MMUILabel *_titleLabel;
    MMUIButton *_closeBtn;
    UIButton *_commitBtn;
    UIScrollView *_scrollView;
    MMGrowTextView *_textView;
    UIView *_bgMaskView;
    double _contentOffsetYWhenBeginDragging;
    double _textViewAjustHeight;
    WCInputController *_inputController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCInputController *inputController; // @synthesize inputController=_inputController;
@property(nonatomic) double textViewAjustHeight; // @synthesize textViewAjustHeight=_textViewAjustHeight;
@property(nonatomic) double contentOffsetYWhenBeginDragging; // @synthesize contentOffsetYWhenBeginDragging=_contentOffsetYWhenBeginDragging;
@property(retain, nonatomic) UIView *bgMaskView; // @synthesize bgMaskView=_bgMaskView;
@property(retain, nonatomic) MMGrowTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIButton *commitBtn; // @synthesize commitBtn=_commitBtn;
@property(retain, nonatomic) MMUIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *navBarView; // @synthesize navBarView=_navBarView;
@property(nonatomic) __weak MMUIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <MPShareWowEditViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double defaultHeight; // @synthesize defaultHeight=_defaultHeight;
@property(nonatomic) unsigned int theme; // @synthesize theme=_theme;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onClickCloseBtn;
- (void)onClickCommitBtn;
- (void)keyboardWillShow;
- (void)clearTextView;
- (double)getVisibleHeight;
- (void)didCommitText:(id)arg1;
- (void)textDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)layoutSubviews;
- (void)initInputController;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)initTextView;
- (void)initScrollView;
- (void)initNavBarView;
- (void)onTapCommentEditMaskView;
- (void)initBgMaskView;
- (void)initSubviews;
- (void)endEdit;
- (void)beginEdit;
- (void)updateHeightWhenKeyboardShowWithAnimated:(_Bool)arg1;
- (void)setHiddenWithAnimation:(_Bool)arg1;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

