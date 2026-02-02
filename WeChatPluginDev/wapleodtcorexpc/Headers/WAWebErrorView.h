//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, MMWebImageView, NSObject, NSString, UIButton, WAContact;
@protocol WAWebErrorViewDelegate;

@interface WAWebErrorView
{
    WAContact *m_contact;
    NSString *m_title;
    NSString *m_desc;
    NSString *m_buttonTitle;
    MMUILabel *m_descLabel;
    MMUIButton *_quitButton;
    _Bool m_isNeedGray;
    _Bool m_isSupportDark;
    MMWebImageView *m_logoView;
    MMUILabel *m_titleLabel;
    UIButton *m_operationButton;
    NSObject<WAWebErrorViewDelegate> *_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSObject<WAWebErrorViewDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)onOperationButtonTapped:(id)arg1;
- (void)onLoadImageOK:(id)arg1;
- (void)initOperationButton;
- (void)initDescLabel;
- (void)onClickQuitButton;
- (void)showQuitButton;
- (void)initTitleLabel;
- (void)initLogoView;
- (void)layoutSubviews;
- (id)initWithUserName:(id)arg1 title:(id)arg2 desc:(id)arg3 buttonTitle:(id)arg4 needGrayed:(_Bool)arg5 supportDark:(_Bool)arg6;
- (id)initWithUserName:(id)arg1 title:(id)arg2 desc:(id)arg3 supportDark:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

