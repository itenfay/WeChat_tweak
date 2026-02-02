//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSString, RichTextView;
@protocol MMAcceptAgreementProtocolViewDelegate;

@interface MMAcceptAgreementProtocolView
{
    RichTextView *m_protocolTextView;
    _Bool m_isAgreedProtocol;
    MMUIButton *m_isAgreedProtocolButton;
    NSString *m_protocolText;
    id <MMAcceptAgreementProtocolViewDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMAcceptAgreementProtocolViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (id)protocolTextColor;
- (id)protocolButtonUncheckedColor;
- (id)protocolButtonCheckedColor;
- (_Bool)isHadAgreedProtocol;
- (void)onClickAgreedProtocolBtn:(id)arg1;
- (id)getLeftImage;
- (void)layoutIsAgreedProtocolButton;
- (void)layoutProtocolTextView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 andProtocolText:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

