//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, WCPayCardBinInfo, WCPayCardTypeItem;
@protocol WCPayECardSelectCardTypeViewControllerDelegate;

@interface WCPayECardSelectCardTypeViewController
{
    id <WCPayECardSelectCardTypeViewControllerDelegate> _delegate;
    WCPayCardTypeItem *_cardTypeItem;
    UIButton *_footerButton;
    WCPayCardBinInfo *_selectedCardType;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayCardBinInfo *selectedCardType; // @synthesize selectedCardType=_selectedCardType;
@property(retain, nonatomic) UIButton *footerButton; // @synthesize footerButton=_footerButton;
@property(retain, nonatomic) WCPayCardTypeItem *cardTypeItem; // @synthesize cardTypeItem=_cardTypeItem;
@property(nonatomic) __weak id <WCPayECardSelectCardTypeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)onNext;
- (void)clickInfoCell:(id)arg1;
- (id)tableFooterView;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (id)makeCellTitleLabel;
- (void)reloadTableView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

