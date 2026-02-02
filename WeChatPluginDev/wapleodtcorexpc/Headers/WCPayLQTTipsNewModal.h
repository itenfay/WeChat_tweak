//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UIButton, UILabel;
@protocol WCPayLQTTipsNewModalDelegate;

@interface WCPayLQTTipsNewModal : UIView
{
    _Bool _isShowing;
    _Bool _isFof;
    id <WCPayLQTTipsNewModalDelegate> _delegate;
    NSString *_title;
    NSArray *_contents;
    UILabel *_titleLabel;
    UIView *_contentsView;
    UIButton *_cancelBtn;
    UIButton *_confirmBtn;
    UIView *_backgroundView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFof; // @synthesize isFof=_isFof;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIView *contentsView; // @synthesize contentsView=_contentsView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSArray *contents; // @synthesize contents=_contents;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <WCPayLQTTipsNewModalDelegate> delegate; // @synthesize delegate=_delegate;
- (void)webViewReturn:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onTapConfirmBtn;
- (void)onTapCancelBtn;
- (void)hideView:(_Bool)arg1;
- (void)dissmissView;
- (void)showInView;
- (void)updateView;
- (void)layoutSubviews;
- (void)updateWithTitle:(id)arg1 contents:(id)arg2 isFof:(_Bool)arg3;
- (id)initWithTitle:(id)arg1 contents:(id)arg2 isFof:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

