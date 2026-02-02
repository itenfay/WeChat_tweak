//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonManageDataObject, MMProgressView, MMWebImageView, NSString, UIButton, UILabel;
@protocol EmoticonManageCellDelegate;

@interface EmoticonManageCell
{
    UIButton *m_downloadButton;
    MMWebImageView *m_iconImageView;
    UIButton *m_unstallButton;
    UILabel *m_nameLabel;
    MMProgressView *m_progressView;
    id <EmoticonManageCellDelegate> m_delegate;
    EmoticonManageDataObject *_dataObj;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EmoticonManageDataObject *dataObj; // @synthesize dataObj=_dataObj;
@property(nonatomic) __weak id <EmoticonManageCellDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) MMProgressView *m_progressView; // @synthesize m_progressView;
@property(retain, nonatomic) UILabel *m_nameLabel; // @synthesize m_nameLabel;
@property(retain, nonatomic) UIButton *m_unstallButton; // @synthesize m_unstallButton;
@property(retain, nonatomic) MMWebImageView *m_iconImageView; // @synthesize m_iconImageView;
@property(retain, nonatomic) UIButton *m_downloadButton; // @synthesize m_downloadButton;
- (void)onGotoDeleteMode;
- (void)onGotoNormalMode;
- (void)OnUpdateEmoticonPackageState:(id)arg1 toState:(long long)arg2;
- (void)OnEmoticonPackageDownloadStatusChanged:(id)arg1 IsDownloaded:(_Bool)arg2;
- (void)OnDownloadProgressChanged:(id)arg1 CurrLength:(unsigned long long)arg2 TotalLength:(unsigned long long)arg3;
- (void)onClickUnstallButton;
- (void)onClickDownloadButton;
- (void)checkMode;
- (void)onState:(long long)arg1;
- (double)cellSeparatorLeftInset;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setCellDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

