//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GetMktTicketHomePageResponse, NSMutableArray, NSString, WCMktDeleteTicketCgi, WCMktTicketHomePageCgi;
@protocol WCMktTicketListLogicControllerDelegate;

@interface WCMktTicketListLogicController : NSObject
{
    _Bool _bHasSendHomePageRequest;
    _Bool _bIsLoadingMoreMktTicketList;
    _Bool _bNeedUpdateDataAfterViewControllerWillApper;
    id <WCMktTicketListLogicControllerDelegate> _delegate;
    GetMktTicketHomePageResponse *_mktTicketHomePageResponse;
    NSMutableArray *_sectionArray;
    WCMktTicketHomePageCgi *_ticketHomePageCgi;
    WCMktDeleteTicketCgi *_deleteTicketCgi;
    NSString *_deletingCardID;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bNeedUpdateDataAfterViewControllerWillApper; // @synthesize bNeedUpdateDataAfterViewControllerWillApper=_bNeedUpdateDataAfterViewControllerWillApper;
@property(retain, nonatomic) NSString *deletingCardID; // @synthesize deletingCardID=_deletingCardID;
@property(retain, nonatomic) WCMktDeleteTicketCgi *deleteTicketCgi; // @synthesize deleteTicketCgi=_deleteTicketCgi;
@property(nonatomic) _Bool bIsLoadingMoreMktTicketList; // @synthesize bIsLoadingMoreMktTicketList=_bIsLoadingMoreMktTicketList;
@property(retain, nonatomic) WCMktTicketHomePageCgi *ticketHomePageCgi; // @synthesize ticketHomePageCgi=_ticketHomePageCgi;
@property(nonatomic) _Bool bHasSendHomePageRequest; // @synthesize bHasSendHomePageRequest=_bHasSendHomePageRequest;
@property(retain, nonatomic) NSMutableArray *sectionArray; // @synthesize sectionArray=_sectionArray;
@property(retain, nonatomic) GetMktTicketHomePageResponse *mktTicketHomePageResponse; // @synthesize mktTicketHomePageResponse=_mktTicketHomePageResponse;
@property(nonatomic) __weak id <WCMktTicketListLogicControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onGetDeleteTicketCgiResp:(id)arg1;
- (void)sendDeleteTicketItemRequest:(id)arg1;
- (void)onGetMktTicketHomePageCgiResp:(id)arg1;
- (void)onRetrieveLocation:(int)arg1;
- (void)getTicketHomePageDataFromSvrWithOffset:(unsigned int)arg1;
- (void)getMoreTicketHomePageDataFromSvr;
- (void)getTicketHomePageDataFromSvr;
- (void)handleTinyAppOpenWithAppInfo:(id)arg1;
- (id)getElemDataIndexPathWithUserCardId:(id)arg1;
- (long long)getElemDataRowIndexInLicenseTypeListWithCardId:(id)arg1;
- (long long)getElemDataRowIndexInTicketTypeListWithCardId:(id)arg1;
- (long long)getTicketListSectionIndexWithSectionName:(id)arg1;
- (void)handleMedicateBannerClick;
- (void)updateHomePageDataAfterViewControllerWillAppearIfNeed;
- (void)refreshHomePageDataFromSvr;
- (void)onDeleteCardIDList:(id)arg1 ErrCode:(int)arg2;
- (void)handleDeleteCardWithCardData:(id)arg1;
- (void)handleTicketDetailDeleteCardWithCardId:(id)arg1;
- (void)handleTicketItemTagBtnClickWithData:(id)arg1;
- (void)handleTicketListSelectJumpTypeDataWithJumpElemData:(id)arg1;
- (void)handleTicketListDeleteWithIndexPath:(id)arg1;
- (void)handleTicketHomePageDataLoadingMore;
- (id)getLastItemIndexPath;
- (_Bool)isMedicareCardBannerWithIndexPath:(id)arg1;
- (long long)getTicketJumpiListCount;
- (id)getTicketElemDataWithIndexPath:(id)arg1;
- (id)getTicketJumpElemDataWithIndexPath:(id)arg1;
- (_Bool)isTicketJumpTypeDataWithIndexPath:(id)arg1;
- (id)getSectionNameWithSection:(long long)arg1;
- (long long)getTableViewRowCountInSection:(long long)arg1;
- (long long)getTableViewSectionCount;
- (_Bool)hasRespData;
- (_Bool)isMktTicketDataAllLoad;
- (_Bool)hasMktTicketData;
- (_Bool)hasMedicateCardBanner;
- (id)getMedicateCardBanner;
- (id)getLicenseTypeList;
- (id)getTicketTypeList;
- (id)getTicketJumpList;
- (void)saveHomePageDataToFile;
- (void)loadTicketHomePageCacheDataAndRefreshFromSvr;
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

