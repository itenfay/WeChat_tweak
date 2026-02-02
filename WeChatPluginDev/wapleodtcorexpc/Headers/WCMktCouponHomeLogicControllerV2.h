//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GetCouponAndGiftListResponse, NSMutableArray, NSString, WCMktCouponHomePageV2Cgi, WCMktDeleteCouponCgi;
@protocol WCMktCouponHomeLogicControllerV2Delegate;

@interface WCMktCouponHomeLogicControllerV2 : NSObject
{
    _Bool _bHasSendHomePageRequest;
    _Bool _bNeedUpdateDataAfterViewControllerWillApper;
    id <WCMktCouponHomeLogicControllerV2Delegate> _delegate;
    GetCouponAndGiftListResponse *_mktCouponHomePageResponse;
    NSMutableArray *_sectionArray;
    WCMktCouponHomePageV2Cgi *_couponHomePageCgi;
    WCMktDeleteCouponCgi *_deleteCardCgi;
    NSString *_deletingCardID;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bNeedUpdateDataAfterViewControllerWillApper; // @synthesize bNeedUpdateDataAfterViewControllerWillApper=_bNeedUpdateDataAfterViewControllerWillApper;
@property(retain, nonatomic) NSString *deletingCardID; // @synthesize deletingCardID=_deletingCardID;
@property(retain, nonatomic) WCMktDeleteCouponCgi *deleteCardCgi; // @synthesize deleteCardCgi=_deleteCardCgi;
@property(retain, nonatomic) WCMktCouponHomePageV2Cgi *couponHomePageCgi; // @synthesize couponHomePageCgi=_couponHomePageCgi;
@property(nonatomic) _Bool bHasSendHomePageRequest; // @synthesize bHasSendHomePageRequest=_bHasSendHomePageRequest;
@property(retain, nonatomic) NSMutableArray *sectionArray; // @synthesize sectionArray=_sectionArray;
@property(retain, nonatomic) GetCouponAndGiftListResponse *mktCouponHomePageResponse; // @synthesize mktCouponHomePageResponse=_mktCouponHomePageResponse;
@property(nonatomic) __weak id <WCMktCouponHomeLogicControllerV2Delegate> delegate; // @synthesize delegate=_delegate;
- (void)onUseCard:(id)arg1;
- (void)onUseCard:(id)arg1 lastIndex:(id)arg2 delayTime:(double)arg3;
- (void)onShareCard:(id)arg1 lastIndex:(id)arg2;
- (void)onGiftCard:(id)arg1 lastIndex:(id)arg2;
- (void)onDeleteCard:(id)arg1;
- (void)handleCardDataNeedDeleteWithCardData:(id)arg1;
- (void)handleClickRightBtnWithItemData:(id)arg1;
- (void)updateHomePageDataAfrerViewControllerWillAppearIfNeed;
- (void)onDeleteCardIDList:(id)arg1 ErrCode:(int)arg2;
- (void)handleDeleteCardWithCardData:(id)arg1;
- (void)handleDeleteCardSuccWithCardId:(id)arg1;
- (void)HandleCouponListDetailDeleteCardWithCardId:(id)arg1;
- (void)onGetDeleteCouponCgiResp:(id)arg1;
- (void)handleCouponListDeleteWithIndexPath:(id)arg1;
- (void)handleCouponListDidSelectRowAtIndexPath:(id)arg1;
- (void)onGetWCMktCouponHomePageV2CgiResp:(id)arg1;
- (void)getCoponHomePageDataFromSvrWithOffset:(unsigned long long)arg1;
- (void)handleCouponHomePageDataLoadingMore;
- (void)refreshHomePageFromSvr;
- (void)handleTinyAppOpenWithAppInfo:(id)arg1 needUpdateHomePage:(_Bool)arg2;
- (void)handleH5OpenWithUrl:(id)arg1 needUpdateHomePage:(_Bool)arg2;
- (id)getElemDataIndexPathWithUserCardId:(id)arg1;
- (long long)getElemDataRowIndexInCouponListWithCardId:(id)arg1;
- (long long)getElemDataRowIndexInCardListWithCardId:(id)arg1;
- (long long)getSectionIndexWithSectionName:(id)arg1;
- (id)getCouponItemsList;
- (id)getGiftItemsList;
- (id)getRightButtonList;
- (id)getHomePageTitle;
- (id)getCouponElemDataWithIndexPath:(id)arg1;
- (id)getSectionDisplayNameWithSection:(long long)arg1;
- (id)getSectionNameWithSection:(long long)arg1;
- (long long)getTableViewRowCountInSection:(long long)arg1;
- (long long)getTableViewSectionCount;
- (_Bool)hasRespData;
- (_Bool)isMktCouponDataAllLoad;
- (_Bool)hasMktCouponData;
- (void)saveCouponHomePageDataToFile;
- (void)loadCouponHomePageCacheDataAndRefreshFromSvr;
- (void)setupData;
- (id)initLogicControllerWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

