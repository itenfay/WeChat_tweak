//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UIButton, UILabel;
@protocol WCPayTipsNewModalDelegate;

@interface WCPayTipsNewModal : UIView
{
    _Bool _isShowing;
    id <WCPayTipsNewModalDelegate> _delegate;
    NSString *_title;
    NSString *_cancelBtnStr;
    NSString *_confirmBtnStr;
    NSArray *_contents;
    UILabel *_titleLabel;
    UIView *_contentsView;
    UIButton *_cancelBtn;
    UIButton *_confirmBtn;
    UIView *_backgroundView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIView *contentsView; // @synthesize contentsView=_contentsView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSArray *contents; // @synthesize contents=_contents;
@property(retain, nonatomic) NSString *confirmBtnStr; // @synthesize confirmBtnStr=_confirmBtnStr;
@property(retain, nonatomic) NSString *cancelBtnStr; // @synthesize cancelBtnStr=_cancelBtnStr;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <WCPayTipsNewModalDelegate> delegate; // @synthesize delegate=_delegate;
- (void)webViewReturn:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onTapConfirmBtn;
- (void)onTapCancelBtn;
- (void)hideView:(_Bool)arg1;
- (void)dissmissView;
- (void)showInView;
- (void)updateView;
- (void)layoutSubviews;
- (id)initWithTitle:(id)arg1 contents:(id)arg2 cancelBtn:(id)arg3 confirmBtn:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

