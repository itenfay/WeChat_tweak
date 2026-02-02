//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMHeadImageView, MMUILabel, MMWebImageView, NSString, RichTextView, UIButton;
@protocol MMAcceptAgreementCommonHeadViewDelegate;

@interface MMAcceptAgreementCommonHeadView
{
    MMHeadImageView *m_headImageView;
    _Bool _largeContentFont;
    double m_topMargin;
    MMUILabel *m_titleView;
    MMUILabel *m_contentView;
    UIButton *m_contentButton;
    MMWebImageView *m_logoView;
    RichTextView *m_contentRichTextView;
    id <MMAcceptAgreementCommonHeadViewDelegate> m_delegate;
    double _m_titleViewMargin;
    double _m_contentViewMargin;
    long long _contentAlignment;
}

- (void).cxx_destruct;
@property(nonatomic) long long contentAlignment; // @synthesize contentAlignment=_contentAlignment;
@property(nonatomic) _Bool largeContentFont; // @synthesize largeContentFont=_largeContentFont;
@property(nonatomic) double m_contentViewMargin; // @synthesize m_contentViewMargin=_m_contentViewMargin;
@property(nonatomic) double m_titleViewMargin; // @synthesize m_titleViewMargin=_m_titleViewMargin;
@property(nonatomic) __weak id <MMAcceptAgreementCommonHeadViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) RichTextView *m_contentRichTextView; // @synthesize m_contentRichTextView;
@property(retain, nonatomic) MMWebImageView *m_logoView; // @synthesize m_logoView;
@property(retain, nonatomic) UIButton *m_contentButton; // @synthesize m_contentButton;
@property(retain, nonatomic) MMUILabel *m_contentView; // @synthesize m_contentView;
@property(retain, nonatomic) MMUILabel *m_titleView; // @synthesize m_titleView;
@property(nonatomic) double m_topMargin; // @synthesize m_topMargin;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (id)dotWithMultilineIntros:(id)arg1 font:(id)arg2 textColor:(id)arg3;
- (void)udpateContentViewConfig;
- (id)titleViewFont;
- (id)contentTextFont;
- (id)contentTextColor;
- (id)titleTextColor;
- (double)getContentViewMargin;
- (double)getTitleViewMargin;
- (void)jumpToSystemPrivacySetting;
- (void)updateHeadContentRichTextView:(id)arg1;
- (void)updateViewWithLogoSVGImage:(id)arg1 headContact:(id)arg2 headTitle:(id)arg3 headContent:(id)arg4 numberOfLines:(unsigned long long)arg5 logoLightIconUrl:(id)arg6 logoDarkIconUrl:(id)arg7 isDotContentStyle:(_Bool)arg8;
- (void)updateViewWithLogoIconUrl:(id)arg1 logoDarkIconUrl:(id)arg2 headTitle:(id)arg3 headContent:(id)arg4;
- (void)updateViewWithLogoSVGImage:(id)arg1 headContact:(id)arg2 headTitle:(id)arg3 headContent:(id)arg4;
- (void)updateViewWithLogoSVGImage:(id)arg1 headTitle:(id)arg2 headContent:(id)arg3 numberOfLines:(unsigned long long)arg4 isDotContentStyle:(_Bool)arg5;
- (void)updateViewWithLogoSVGImage:(id)arg1 headTitle:(id)arg2 headContent:(id)arg3 numberOfLines:(unsigned long long)arg4;
- (void)updateViewWithLogoSVGImage:(id)arg1 headTitle:(id)arg2 headContent:(id)arg3;
- (void)updateViewWithLogoSVG:(id)arg1 headContact:(id)arg2 headTitle:(id)arg3 headContent:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

