//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GetMktCardHomePageResponse, NSMutableArray, NSString, WCMktCardHomePageCgi, WCMktGetCardPkgMchInfoCgi;
@protocol WCMktCardHomeLogicControllerDelegate;

@interface WCMktCardHomeLogicController : NSObject
{
    _Bool _bHasSendHomePageRequest;
    _Bool _bIsLoadingMoreMktCardList;
    _Bool _bNeedUpdateMchInfoAfterViewControllerAppear;
    unsigned int _svrRetChangeRule;
    id <WCMktCardHomeLogicControllerDelegate> _delegate;
    GetMktCardHomePageResponse *_mktCardHomePageResponse;
    NSMutableArray *_sectionArray;
    NSMutableArray *_expandMerchatIDList;
    WCMktCardHomePageCgi *_homePageCgi;
    WCMktGetCardPkgMchInfoCgi *_getMchInfoCgi;
    NSString *_currentOpenMchID;
    NSString *_deletingCardID;
    NSString *_deletingMchID;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int svrRetChangeRule; // @synthesize svrRetChangeRule=_svrRetChangeRule;
@property(retain, nonatomic) NSString *deletingMchID; // @synthesize deletingMchID=_deletingMchID;
@property(retain, nonatomic) NSString *deletingCardID; // @synthesize deletingCardID=_deletingCardID;
@property(retain, nonatomic) NSString *currentOpenMchID; // @synthesize currentOpenMchID=_currentOpenMchID;
@property(nonatomic) _Bool bNeedUpdateMchInfoAfterViewControllerAppear; // @synthesize bNeedUpdateMchInfoAfterViewControllerAppear=_bNeedUpdateMchInfoAfterViewControllerAppear;
@property(retain, nonatomic) WCMktGetCardPkgMchInfoCgi *getMchInfoCgi; // @synthesize getMchInfoCgi=_getMchInfoCgi;
@property(nonatomic) _Bool bIsLoadingMoreMktCardList; // @synthesize bIsLoadingMoreMktCardList=_bIsLoadingMoreMktCardList;
@property(retain, nonatomic) WCMktCardHomePageCgi *homePageCgi; // @synthesize homePageCgi=_homePageCgi;
@property(nonatomic) _Bool bHasSendHomePageRequest; // @synthesize bHasSendHomePageRequest=_bHasSendHomePageRequest;
@property(retain, nonatomic) NSMutableArray *expandMerchatIDList; // @synthesize expandMerchatIDList=_expandMerchatIDList;
@property(retain, nonatomic) NSMutableArray *sectionArray; // @synthesize sectionArray=_sectionArray;
@property(retain, nonatomic) GetMktCardHomePageResponse *mktCardHomePageResponse; // @synthesize mktCardHomePageResponse=_mktCardHomePageResponse;
@property(nonatomic) __weak id <WCMktCardHomeLogicControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onGetCardPkgMchInfoCgiResp:(id)arg1;
- (void)sendGetMchInfoRequest:(id)arg1;
- (void)onGetWCMktCardHomePageCgiResp:(id)arg1;
- (void)onRetrieveLocation:(int)arg1;
- (void)getHomePageDataFromSvrWithOffset:(unsigned int)arg1;
- (void)getMoreHomePageDataFromSvr;
- (void)getHomePageDataFromSvr;
- (unsigned int)getSortRuleFromSortWording:(id)arg1;
- (id)getSortListWording;
- (_Bool)isDenyLocationAccess;
- (unsigned int)getSortRuleReqNum:(unsigned int)arg1;
- (_Bool)isSvrReturnSortRule:(unsigned int)arg1;
- (unsigned int)getUserHomePageSortRule;
- (id)getUserHomePageSortInfo;
- (long long)getListSectionIndexWithSectionName:(id)arg1;
- (void)handleHomePageTopCellClickWithIndexPath:(id)arg1;
- (void)changeSortruleAndRefreshHomePage;
- (void)handleRefreshHomePageAfterSelectSortRuleWording:(id)arg1;
- (void)handleFaqItemClick;
- (void)handleClickElemData:(id)arg1;
- (void)handleClickMerchantAreaWithMerchantID:(id)arg1;
- (void)refreshHomePageDataFromSvr;
- (void)onDeleteCardIDList:(id)arg1 ErrCode:(int)arg2;
- (void)deleteCardWithCardData:(id)arg1 mchID:(id)arg2;
- (void)updateMerchantInfoAfterViewControllerWillAppearIfNeed;
- (void)updateMerchantInfoWithMchID:(id)arg1;
- (void)handleH5OpenWithUrl:(id)arg1 needUpdateMchInfo:(_Bool)arg2;
- (void)handleTinyAppOpenWithAppInfo:(id)arg1 needUpdateMchInfo:(_Bool)arg2;
- (void)handleMerchantItemCellClickCardItemTagBtnToOpenTinyApp:(id)arg1 merchantID:(id)arg2;
- (void)handleMerchantItemCellClickTagBtnToOpenTinyApp:(id)arg1 merchantID:(id)arg2;
- (void)handleHomePageDataLoadingMore;
- (void)handleClickExpandOrCollapseBtnWithID:(id)arg1;
- (_Bool)isMerchantCardListExpandWithID:(id)arg1;
- (_Bool)isLastHomePageElemItemIndexPath:(id)arg1;
- (_Bool)isLastTopCellItemWithIndexPath:(id)arg1;
- (id)getHomePageTopCellElemWithIndexPath:(id)arg1;
- (id)getStoreListSectionHeaderCellIndexPath;
- (id)getTicketAndCertSectionRightContent;
- (_Bool)shouldShowSortTypeEntry;
- (id)getLastItemIndexPath;
- (id)getHomePageFaqItem;
- (id)getHomePageElementWithMchID:(id)arg1;
- (id)getStoreListIndexPathWithMchID:(id)arg1;
- (id)getSectionNameWithSection:(long long)arg1;
- (id)getHomePageElementWithIndexPath:(id)arg1;
- (long long)getTableViewRowCountInSection:(long long)arg1;
- (long long)getTableViewSectionCount;
- (_Bool)hasRespData;
- (_Bool)isMktCardDataAllLoad;
- (_Bool)hasMktCardData;
- (id)getHomePageTopCellListData;
- (id)getHomePageStoreListData;
- (void)saveHomePageDataToFile;
- (void)loadHomePageCacheDataAndRefreshFromSvr;
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

