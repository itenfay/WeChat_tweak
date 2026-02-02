//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebViewController, NSString, UICollectionView, WCBizLoadingView, WCPayOverseaIBGGetWalletCgi, WCPayOverseaIBGGetWalletCgiCache, WCPayOverseaMainWalletDataSource, WCPayOverseaPayFunctionListCgi, WCPayOverseaPayFunctionListRespObject, WCPayOverseaReadActivityList;

@interface WCPayOverseaMainWalletViewController
{
    _Bool _m_hasShownKeyInfo;
    _Bool _m_disableResetAccessibilityFocus;
    unsigned int _m_walletRegion;
    unsigned int _m_lastWalletCgiRequestTime;
    WCPayOverseaPayFunctionListCgi *_m_payFunctionCgi;
    WCPayOverseaIBGGetWalletCgi *_m_ibgGetWalletCgi;
    UICollectionView *_m_collectionView;
    WCBizLoadingView *_m_bizLoadingView;
    WCPayOverseaMainWalletDataSource *_m_dataSource;
    WCPayOverseaPayFunctionListRespObject *_m_payFunctionListRespObject;
    WCPayOverseaIBGGetWalletCgiCache *_m_walletResp;
    WCPayOverseaReadActivityList *_m_readActivityList;
    MMWebViewController *_m_userKeyInfoWebViewController;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_disableResetAccessibilityFocus; // @synthesize m_disableResetAccessibilityFocus=_m_disableResetAccessibilityFocus;
@property(nonatomic) _Bool m_hasShownKeyInfo; // @synthesize m_hasShownKeyInfo=_m_hasShownKeyInfo;
@property(retain, nonatomic) MMWebViewController *m_userKeyInfoWebViewController; // @synthesize m_userKeyInfoWebViewController=_m_userKeyInfoWebViewController;
@property(nonatomic) unsigned int m_lastWalletCgiRequestTime; // @synthesize m_lastWalletCgiRequestTime=_m_lastWalletCgiRequestTime;
@property(nonatomic) unsigned int m_walletRegion; // @synthesize m_walletRegion=_m_walletRegion;
@property(retain, nonatomic) WCPayOverseaReadActivityList *m_readActivityList; // @synthesize m_readActivityList=_m_readActivityList;
@property(retain, nonatomic) WCPayOverseaIBGGetWalletCgiCache *m_walletResp; // @synthesize m_walletResp=_m_walletResp;
@property(retain, nonatomic) WCPayOverseaPayFunctionListRespObject *m_payFunctionListRespObject; // @synthesize m_payFunctionListRespObject=_m_payFunctionListRespObject;
@property(retain, nonatomic) WCPayOverseaMainWalletDataSource *m_dataSource; // @synthesize m_dataSource=_m_dataSource;
@property(retain, nonatomic) WCBizLoadingView *m_bizLoadingView; // @synthesize m_bizLoadingView=_m_bizLoadingView;
@property(retain, nonatomic) UICollectionView *m_collectionView; // @synthesize m_collectionView=_m_collectionView;
@property(retain, nonatomic) WCPayOverseaIBGGetWalletCgi *m_ibgGetWalletCgi; // @synthesize m_ibgGetWalletCgi=_m_ibgGetWalletCgi;
@property(retain, nonatomic) WCPayOverseaPayFunctionListCgi *m_payFunctionCgi; // @synthesize m_payFunctionCgi=_m_payFunctionCgi;
- (void)reportGrayItemClickOnUrl:(id)arg1;
- (void)reportClickOnUrl:(id)arg1 funcid:(unsigned int)arg2;
- (void)onWCPayNoticeBannerView:(id)arg1 clickWithUrl:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)utf8String:(id)arg1;
- (void)onWCPayOverseaIBGGetWalletCgiErrorWithErrorCode:(int)arg1 ErrorMsg:(id)arg2;
- (void)onWCPayOverseaIBGGetWalletCgiOkWithRespObject:(id)arg1 withOriginRespObject:(id)arg2;
- (void)onWCPayOverseaPayFunctionCgiErrorWithErrorCode:(int)arg1 ErrorMsg:(id)arg2;
- (void)onWCPayOverseaPayFunctionCgiOkWithRespObject:(id)arg1;
- (unsigned long long)rowCount;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)updateCollectionView;
- (void)setupAccessibilityFocus;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)onClickRightNavigationItem:(id)arg1;
- (void)updateRightNavigationItem;
- (void)updateTitle;
- (void)updateBizLoadingView;
- (void)updateTips;
- (void)updateViewData;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

