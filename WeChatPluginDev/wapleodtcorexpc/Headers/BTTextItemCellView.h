//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTTextItemCellViewModel, MMUILabel, NSString, UrlController, WAAppIdToUsernameTransfer;

@interface BTTextItemCellView
{
    UrlController *m_urlController;
    MMUILabel *m_foldLabel;
    WAAppIdToUsernameTransfer *m_appIdTransfer;
    MMUILabel *_detailLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
- (id)accessibilityLabel;
- (void)onFullTextBtnClick;
- (void)onWeAppLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)updateFriendRelatedInfo;
- (void)refreshFoldLabelText;
- (void)layoutSubviewsTopItem;
- (void)initFoldLabel;
- (id)getTitleViewColor:(_Bool)arg1;
- (void)initTitleView;
- (void)onUpdateViewModel;
- (void)initTopReaderItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) BTTextItemCellViewModel *viewModel; // @dynamic viewModel;

@end

