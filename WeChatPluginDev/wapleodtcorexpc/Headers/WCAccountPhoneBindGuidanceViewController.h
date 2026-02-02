//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCAccountPhoneBindGuidanceData;
@protocol WCAccountPhoneBindGuidanceViewControllerDelegate;

@interface WCAccountPhoneBindGuidanceViewController
{
    id <WCAccountPhoneBindGuidanceViewControllerDelegate> _delegate;
    WCAccountPhoneBindGuidanceData *_m_guidanceData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAccountPhoneBindGuidanceData *m_guidanceData; // @synthesize m_guidanceData=_m_guidanceData;
@property(nonatomic) __weak id <WCAccountPhoneBindGuidanceViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onWebViewCloseAndGoNext:(id)arg1 webVC:(id)arg2 customClose:(_Bool *)arg3;
- (void)reportWithString:(id)arg1;
- (void)reportAction:(int)arg1;
- (void)reportPageExpose;
- (void)trueClose;
- (void)onClickDoubleCheckCancel;
- (void)onClickDoubleCheckOK;
- (void)onClickClose;
- (void)onBind;
- (void)initTableView;
- (_Bool)useTableView;
- (_Bool)useBlackStyleView;
- (void)viewDidLoad;
- (void)initNavigationBar;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

