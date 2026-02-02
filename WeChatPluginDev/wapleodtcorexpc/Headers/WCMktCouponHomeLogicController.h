//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GetCouponHomePageResponse, NSMutableArray, NSString, WCMktCouponHomePageCgi, WCMktGetCardPkgMchInfoCgi;
@protocol WCMktCouponHomeLogicControllerDelegate;

@interface WCMktCouponHomeLogicController : NSObject
{
    _Bool _bHasSendHomePageRequest;
    _Bool _bNeedUpdateMchInfoAfterViewControllerAppear;
    _Bool _bHasHandleLocation;
    unsigned int _svrRetChangeRule;
    id <WCMktCouponHomeLogicControllerDelegate> _delegate;
    GetCouponHomePageResponse *_couponHomePageResponse;
    WCMktCouponHomePageCgi *_homePageCgi;
    WCMktGetCardPkgMchInfoCgi *_getMchInfoCgi;
    NSMutableArray *_expandMerchatIDList;
    NSString *_currentOpenMchID;
    NSString *_deletingCardID;
    NSString *_deletingMchID;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bHasHandleLocation; // @synthesize bHasHandleLocation=_bHasHandleLocation;
@property(retain, nonatomic) NSString *deletingMchID; // @synthesize deletingMchID=_deletingMchID;
@property(retain, nonatomic) NSString *deletingCardID; // @synthesize deletingCardID=_deletingCardID;
@property(retain, nonatomic) NSString *currentOpenMchID; // @synthesize currentOpenMchID=_currentOpenMchID;
@property(nonatomic) _Bool bNeedUpdateMchInfoAfterViewControllerAppear; // @synthesize bNeedUpdateMchInfoAfterViewControllerAppear=_bNeedUpdateMchInfoAfterViewControllerAppear;
@property(retain, nonatomic) NSMutableArray *expandMerchatIDList; // @synthesize expandMerchatIDList=_expandMerchatIDList;
@property(retain, nonatomic) WCMktGetCardPkgMchInfoCgi *getMchInfoCgi; // @synthesize getMchInfoCgi=_getMchInfoCgi;
@property(nonatomic) unsigned int svrRetChangeRule; // @synthesize svrRetChangeRule=_svrRetChangeRule;
@property(retain, nonatomic) WCMktCouponHomePageCgi *homePageCgi; // @synthesize homePageCgi=_homePageCgi;
@property(nonatomic) _Bool bHasSendHomePageRequest; // @synthesize bHasSendHomePageRequest=_bHasSendHomePageRequest;
@property(retain, nonatomic) GetCouponHomePageResponse *couponHomePageResponse; // @synthesize couponHomePageResponse=_couponHomePageResponse;
@property(nonatomic) __weak id <WCMktCouponHomeLogicControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onGetCardPkgMchInfoCgiResp:(id)arg1;
- (void)sendGetMchInfoRequest:(id)arg1;
- (void)onGetMktCouponHomePageResp:(id)arg1;
- (void)onRetrieveLocation:(int)arg1;
- (void)getHomePageDataFromSvrWithOffset:(unsigned int)arg1;
- (void)handleHomePageDataLoadingMore;
- (void)refreshHomePageDataFromSvr;
- (void)getHomePageDataFromSvr;
- (void)handleEnterHistoryEntry;
- (void)changeSortruleAndRefreshHomePage;
- (void)handleTinyAppOpenWithAppInfo:(id)arg1 needUpdateMchInfo:(_Bool)arg2;
- (void)handleH5OpenWithUrl:(id)arg1 needUpdateMchInfo:(_Bool)arg2;
- (void)handleClickElemData:(id)arg1;
- (void)handleClickMerchantAreaWithMerchantID:(id)arg1;
- (void)onDeleteCardIDList:(id)arg1 ErrCode:(int)arg2;
- (void)deleteCardWithCardData:(id)arg1 mchID:(id)arg2;
- (void)updateMerchantInfoAfterViewControllerWillAppearIfNeed;
- (void)updateMerchantInfoWithMchID:(id)arg1;
- (void)handleMerchantItemCellClickCardItemTagBtnToOpenTinyApp:(id)arg1 merchantID:(id)arg2;
- (void)handleMerchantItemCellClickTagBtnToOpenTinyApp:(id)arg1 merchantID:(id)arg2;
- (void)handleClickExpandOrCollapseBtnWithID:(id)arg1;
- (_Bool)isMerchantCardListExpandWithID:(id)arg1;
- (void)handleRefreshHomePageAfterSelectSortRuleWording:(id)arg1;
- (void)forceUseSortByAcceptTime;
- (_Bool)isLastCouponItemWithIndexPath:(id)arg1;
- (id)getLastItemIndexPath;
- (unsigned int)getSortRuleFromSortWording:(id)arg1;
- (id)historyEntryWording;
- (id)getCouponItemWithIndexPath:(id)arg1;
- (id)getSortListWording;
- (id)getUserCouponSortInfo;
- (long long)getTableViewRowCount;
- (_Bool)shouldShowSortTypeEntry;
- (_Bool)hasCouponData;
- (_Bool)isCouponDataAllLoad;
- (id)getCouponElementWithMchID:(id)arg1;
- (id)getCouponItemIndexPathWithMchID:(id)arg1;
- (id)getCouponElemListData;
- (unsigned int)getCouponListSortRule;
- (_Bool)isDenyLocationAccess;
- (unsigned int)getSortRuleReqNum:(unsigned int)arg1;
- (_Bool)isSvrReturnSortRule:(unsigned int)arg1;
- (void)saveHomePageDataToFile;
- (void)loadCouponHomePageCacheDataAndRefreshFromSvr;
- (void)setupData;
- (id)initLogicControllerWithDelegate:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

