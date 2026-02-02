//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableViewInfo, MMUILabel, NSString, UILabel;

@interface SettingAboutMMViewController
{
    MMTableViewInfo *m_tableViewInfo;
    UILabel *m_labelProduct;
    _Bool m_bFullVersion;
    MMUILabel *_labelVersion;
}

- (void).cxx_destruct;
- (void)openAlgorithmWebView;
- (void)openICPWebView;
- (void)onTipsShowInfoChangeWithPathKey:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)showWhatsNewWillEnd;
- (void)showUpdate;
- (void)showWhatsNewEnd;
- (void)showSystemNotice;
- (void)showRate;
- (void)showKFPhoneNumActionSheetWithConfig:(int)arg1;
- (void)showAgreementWebviewWithUrl:(id)arg1;
- (id)genFooterButtonListViewWithMaxWidth:(double)arg1;
- (id)getICPAttrContentWithLineHeight:(double)arg1 descender:(double)arg2 string:(id)arg3 darkMode:(_Bool)arg4;
- (id)bottomButtonWithString:(id)arg1;
- (id)copyrightLabel;
- (void)addBottomView;
- (double)maxWidthForBottomViews;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)viewDidLayoutSubviews;
- (id)getHeaderView;
- (id)appstoreVersion;
- (void)updateProduct;
- (id)tableFooterViewOnUpdate:(id)arg1 urlStr:(id)arg2;
- (void)reloadData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

