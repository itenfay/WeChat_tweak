//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WecoinTaxReConfirmHalfPageInfo;
@protocol WCCoinResignTaxCutTipsViewDelegate;

@interface WCCoinResignTaxCutTipsView
{
    WecoinTaxReConfirmHalfPageInfo *_taxReconfirmInfo;
    id <WCCoinResignTaxCutTipsViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCCoinResignTaxCutTipsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WecoinTaxReConfirmHalfPageInfo *taxReconfirmInfo; // @synthesize taxReconfirmInfo=_taxReconfirmInfo;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

