//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, RichTextView, UIButton, WCCoinSubscriptionAgreementView;

@interface WCCoinSubscriptionAgreementDetailView : UIView
{
    WCCoinSubscriptionAgreementView *_parent;
    UIView *_protocolView;
    RichTextView *_protocolTextView;
    UIButton *_selectBoxButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *selectBoxButton; // @synthesize selectBoxButton=_selectBoxButton;
@property(retain, nonatomic) RichTextView *protocolTextView; // @synthesize protocolTextView=_protocolTextView;
@property(retain, nonatomic) UIView *protocolView; // @synthesize protocolView=_protocolView;
@property(nonatomic) __weak WCCoinSubscriptionAgreementView *parent; // @synthesize parent=_parent;
- (void)onTextClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)clickSelectBox;
- (void)shakeAgreementView;
- (void)layoutSubviews;
- (void)layout;
- (void)layoutProtocol;
- (void)layoutContent;
- (void)layoutTitle;
- (id)initWithParent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

