//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, TipsInfo, UIView;

@interface WCPayTransferStatusViewPageSheet
{
    UIView *_tipsContainerView;
    TipsInfo *_viewData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TipsInfo *viewData; // @synthesize viewData=_viewData;
@property(retain, nonatomic) UIView *tipsContainerView; // @synthesize tipsContainerView=_tipsContainerView;
- (void)onClickPageSheetConfirmButton;
- (double)bottomViewBottomMargin;
- (double)bottomViewTopMargin;
- (long long)styleForPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
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

