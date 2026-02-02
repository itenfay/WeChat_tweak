//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIImageView, MMUILabel, MMUIView, NSString, RichTextView, UIButton;
@protocol VerifyUserSpamTipViewControllerDelegate;

@interface VerifyUserSpamTipViewController
{
    MMUIView *m_contentView;
    MMUILabel *m_titleView;
    MMUILabel *m_descContentView;
    MMUIImageView *m_logoView;
    UIButton *m_sendRequestButton;
    UIButton *m_closeWindowButton;
    RichTextView *m_tipRichTextView;
    NSString *_m_nsWordingTitle;
    NSString *_m_nsWordingDetail;
    NSString *_m_nsWordingUrl;
    id <VerifyUserSpamTipViewControllerDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <VerifyUserSpamTipViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) NSString *m_nsWordingUrl; // @synthesize m_nsWordingUrl=_m_nsWordingUrl;
@property(retain, nonatomic) NSString *m_nsWordingDetail; // @synthesize m_nsWordingDetail=_m_nsWordingDetail;
@property(retain, nonatomic) NSString *m_nsWordingTitle; // @synthesize m_nsWordingTitle=_m_nsWordingTitle;
- (id)navigationBarBackgroundColor;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onClickClose:(id)arg1;
- (void)OnContinueSendRequest;
- (void)layoutTipRichTextView;
- (void)layoutOperateButton;
- (void)layoutDescContentView;
- (void)layoutTitleView;
- (void)layoutLogoView;
- (void)layoutContentView;
- (void)layoutView;
- (long long)halfViewControllerHeight;
- (void)initData;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

