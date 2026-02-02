//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, RichTextView, UIButton, WCCoinConsumePanel;

@interface WCCoinConsumePanelDetailView : UIView
{
    WCCoinConsumePanel *_parent;
    UIView *_protocolView;
    UIButton *_selectBoxButton;
    RichTextView *_protocolTextView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *protocolTextView; // @synthesize protocolTextView=_protocolTextView;
@property(retain, nonatomic) UIButton *selectBoxButton; // @synthesize selectBoxButton=_selectBoxButton;
@property(retain, nonatomic) UIView *protocolView; // @synthesize protocolView=_protocolView;
@property(nonatomic) __weak WCCoinConsumePanel *parent; // @synthesize parent=_parent;
- (id)parameter;
- (void)onTextClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)clickSelectBox;
- (void)consume;
- (void)shakeAgreementView;
- (void)layoutLink;
- (void)layoutButton;
- (void)layoutAgreement;
- (void)layoutAmountView;
- (void)layoutTitle;
- (void)layout;
- (id)initWithParent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

