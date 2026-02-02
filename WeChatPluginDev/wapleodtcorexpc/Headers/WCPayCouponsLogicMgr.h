//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, WCPayTradeFavInfo;

@interface WCPayCouponsLogicMgr
{
    _Bool _bIsUserClickConfirmInCouponList;
    WCPayTradeFavInfo *_wcPayTradeFavInfo;
    NSMutableDictionary *_dicFavorItemInComponseInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bIsUserClickConfirmInCouponList; // @synthesize bIsUserClickConfirmInCouponList=_bIsUserClickConfirmInCouponList;
@property(retain, nonatomic) NSMutableDictionary *dicFavorItemInComponseInfo; // @synthesize dicFavorItemInComponseInfo=_dicFavorItemInComponseInfo;
@property(retain, nonatomic) WCPayTradeFavInfo *wcPayTradeFavInfo; // @synthesize wcPayTradeFavInfo=_wcPayTradeFavInfo;
- (id)getOrderConfirmViewShowBindSerialBankFavDescListWithBindSerial:(id)arg1;
- (void)setBankFavReddotHasShow;
- (_Bool)hasShowBankFavRedDotInOrderConfirmView;
- (_Bool)shouldShowBankFavorRedDotWithCardList:(id)arg1 currentBindSerial:(id)arg2;
- (id)getNewBindCardFavorDescList;
- (id)getBindSerialBankFavorDescListWithBindSerial:(id)arg1;
- (id)getFilterTradeFavListWithBindCardArray:(id)arg1;
- (id)deselectTradeFavItem:(id)arg1;
- (id)selectTradeFavItem:(id)arg1;
- (_Bool)shouldShowMoreFavEnteranceWithBindCardArray:(id)arg1;
- (_Bool)shouldShowFavEnteranceWithBindCardArray:(id)arg1;
- (unsigned long long)getSelectedFavComposeInfoShowFavAmount;
- (unsigned long long)getSelectedFavComposeInfoInvariableFavAmount;
- (void)setCouponsListViewUserHasClickConfirm:(_Bool)arg1;
- (void)calcDefaultComposeInfoForSelectCardIfNeed:(id)arg1;
- (_Bool)isFreePaymentTradeFavInfo;
- (id)getBankFavorItemAndCouponsInfo;
- (id)getWCPayTradeFavInfo;
- (void)clearSelectedBankFavAndReCalculateBankFavorInfo;
- (id)autoAdjustCouponsInfoForSelectedCard:(id)arg1;
- (id)resetComposeInfo:(id)arg1;
- (void)resetTradeFavInfo:(id)arg1;
- (void)selectComposeInfo:(id)arg1;
- (void)autoChangeTradeFavorItemStatusToAdjustConpons;
- (void)onServiceClearData;
- (void)onServiceTerminate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

