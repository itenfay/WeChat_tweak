//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, RichTextView, UIButton, UIImageView, UILabel, WCFinderInvalidTipsInfo;
@protocol WCFinderInvalidTipsViewDelegate;

@interface WCFinderInvalidTipsView : UIView
{
    id <WCFinderInvalidTipsViewDelegate> _delegate;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    RichTextView *_descTextView;
    UIButton *_confirmButton;
    UIButton *_complainButton;
    WCFinderInvalidTipsInfo *_invalidInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderInvalidTipsInfo *invalidInfo; // @synthesize invalidInfo=_invalidInfo;
@property(retain, nonatomic) UIButton *complainButton; // @synthesize complainButton=_complainButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) RichTextView *descTextView; // @synthesize descTextView=_descTextView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak id <WCFinderInvalidTipsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onComplainButtonClick;
- (void)onConfirmButtonClick;
- (void)layoutUI;
- (void)updateWithInvalidInfo:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

