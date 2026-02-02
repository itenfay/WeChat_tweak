//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, OpenMinimchGuide, UIView;
@protocol WCPayTransferOpenMiniGuidePageSheetDelegate;

@interface WCPayTransferOpenMiniGuidePageSheet
{
    id <WCPayTransferOpenMiniGuidePageSheetDelegate> _m_delegate;
    UIView *_tipsContainerView;
    OpenMinimchGuide *_viewData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OpenMinimchGuide *viewData; // @synthesize viewData=_viewData;
@property(retain, nonatomic) UIView *tipsContainerView; // @synthesize tipsContainerView=_tipsContainerView;
@property(nonatomic) __weak id <WCPayTransferOpenMiniGuidePageSheetDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (id)getOpenMiniGuideReportStr;
- (void)showWithAnimated:(_Bool)arg1;
- (id)titleForPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)onClickLinkBtn:(id)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithTipsInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

