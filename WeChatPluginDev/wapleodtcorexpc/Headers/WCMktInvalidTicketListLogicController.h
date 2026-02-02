//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GetMktInvalidTicketHomePageResponse, NSString, WCMktDeleteInvalidTicketCgi, WCMktInvalidTicketHomePageCgi;
@protocol WCMktInvalidTicketListLogicControllerDelegate;

@interface WCMktInvalidTicketListLogicController : NSObject
{
    _Bool _bHasSendHomePageRequest;
    _Bool _bIsLoadingMoreMktInvalidTicket;
    id <WCMktInvalidTicketListLogicControllerDelegate> _delegate;
    GetMktInvalidTicketHomePageResponse *_mktInvalidTicketHomePageResponse;
    WCMktInvalidTicketHomePageCgi *_invalidTicketHomePageCgi;
    WCMktDeleteInvalidTicketCgi *_deleteInvalidTicketCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCMktDeleteInvalidTicketCgi *deleteInvalidTicketCgi; // @synthesize deleteInvalidTicketCgi=_deleteInvalidTicketCgi;
@property(nonatomic) _Bool bIsLoadingMoreMktInvalidTicket; // @synthesize bIsLoadingMoreMktInvalidTicket=_bIsLoadingMoreMktInvalidTicket;
@property(retain, nonatomic) WCMktInvalidTicketHomePageCgi *invalidTicketHomePageCgi; // @synthesize invalidTicketHomePageCgi=_invalidTicketHomePageCgi;
@property(nonatomic) _Bool bHasSendHomePageRequest; // @synthesize bHasSendHomePageRequest=_bHasSendHomePageRequest;
@property(retain, nonatomic) GetMktInvalidTicketHomePageResponse *mktInvalidTicketHomePageResponse; // @synthesize mktInvalidTicketHomePageResponse=_mktInvalidTicketHomePageResponse;
@property(nonatomic) __weak id <WCMktInvalidTicketListLogicControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onGetDeleteInvalidTicketCgiResp:(id)arg1;
- (void)sendDeleteInvalidTicketItemReuqest:(id)arg1;
- (void)onGetInvalidTicketHomePageCgiResp:(id)arg1;
- (void)onRetrieveLocation:(int)arg1;
- (void)getInvalidTicketHomePageDataFromSvrWithOffset:(unsigned int)arg1;
- (void)getMoreInvalidTicketHomePageDataFromSvr;
- (void)getInvalidTicketHomePageDataFromSvr;
- (void)refreshHomePageDataFromSvr;
- (void)handleInvalidTicketItemTagBtnClickWithData:(id)arg1;
- (void)handleInvalidTicketListDeleteWithIndexPath:(id)arg1;
- (void)handleInvalidTicketLoadingMore;
- (long long)getInvalidTicketItemIndexWithCardId:(id)arg1;
- (id)getTicketElemDataWithIndexPath:(id)arg1;
- (long long)getTableViewRowCount;
- (_Bool)hasRespData;
- (_Bool)isMktInvalidTicketDataAllLoad;
- (_Bool)hasMktInvalidTicketData;
- (id)getInvalidTicketList;
- (void)saveHomePageDataToFile;
- (void)loadInvalidTicketHomePageCacheAndRefreshFromSvr;
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

