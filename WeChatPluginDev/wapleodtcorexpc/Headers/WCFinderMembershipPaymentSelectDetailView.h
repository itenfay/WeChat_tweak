//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class KindaUILabel, NSArray, NSString, RichTextView, UIButton, WCCoinConsumeParameter;
@protocol WCFinderMembershipPaymentSelectDetailViewDelegate;

@interface WCFinderMembershipPaymentSelectDetailView : UIView
{
    UIView *_protocolView;
    UIButton *_selectBoxButton;
    RichTextView *_protocolTextView;
    UIView *_rowContainView;
    unsigned long long _selectedTag;
    RichTextView *_subTitle;
    UIButton *_confirmButton;
    KindaUILabel *_statementLabel;
    WCCoinConsumeParameter *_parameter;
    id <WCFinderMembershipPaymentSelectDetailViewDelegate> _delegate;
    NSArray *_memberPriceArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *memberPriceArray; // @synthesize memberPriceArray=_memberPriceArray;
@property(nonatomic) __weak id <WCFinderMembershipPaymentSelectDetailViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCCoinConsumeParameter *parameter; // @synthesize parameter=_parameter;
@property(retain, nonatomic) KindaUILabel *statementLabel; // @synthesize statementLabel=_statementLabel;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) RichTextView *subTitle; // @synthesize subTitle=_subTitle;
@property(nonatomic) unsigned long long selectedTag; // @synthesize selectedTag=_selectedTag;
@property(retain, nonatomic) UIView *rowContainView; // @synthesize rowContainView=_rowContainView;
@property(retain, nonatomic) RichTextView *protocolTextView; // @synthesize protocolTextView=_protocolTextView;
@property(retain, nonatomic) UIButton *selectBoxButton; // @synthesize selectBoxButton=_selectBoxButton;
@property(retain, nonatomic) UIView *protocolView; // @synthesize protocolView=_protocolView;
- (void)clickCoin:(id)arg1;
- (void)onTextClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)clickSelectBox;
- (void)consume;
- (void)shakeAgreementView;
- (void)layoutStatement;
- (void)layoutButton;
- (void)layoutAgreement;
- (void)layoutSubTitle;
- (void)layoutPayCoinView;
- (void)layoutTitle;
- (void)layout;
- (id)initWithFrame:(struct CGRect)arg1 parameter:(id)arg2 memberPriceArray:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

