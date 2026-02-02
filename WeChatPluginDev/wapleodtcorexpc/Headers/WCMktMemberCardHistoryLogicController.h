//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GetMemberCardHistoryResponse, NSString, WCMktDeleteInvalidTicketCgi, WCMktMemberCardHistoryPageCgi;
@protocol WCMktMemberCardHistoryLogicControllerDelegate;

@interface WCMktMemberCardHistoryLogicController : NSObject
{
    _Bool _bHasSendHomePageRequest;
    _Bool _bNeedUpdateDataAfterViewControllerWillApper;
    id <WCMktMemberCardHistoryLogicControllerDelegate> _delegate;
    GetMemberCardHistoryResponse *_mktMemberCardHistoryHomePageResp;
    WCMktMemberCardHistoryPageCgi *_historyHomePageCgi;
    WCMktDeleteInvalidTicketCgi *_deleteCardCgi;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bNeedUpdateDataAfterViewControllerWillApper; // @synthesize bNeedUpdateDataAfterViewControllerWillApper=_bNeedUpdateDataAfterViewControllerWillApper;
@property(retain, nonatomic) WCMktDeleteInvalidTicketCgi *deleteCardCgi; // @synthesize deleteCardCgi=_deleteCardCgi;
@property(retain, nonatomic) WCMktMemberCardHistoryPageCgi *historyHomePageCgi; // @synthesize historyHomePageCgi=_historyHomePageCgi;
@property(nonatomic) _Bool bHasSendHomePageRequest; // @synthesize bHasSendHomePageRequest=_bHasSendHomePageRequest;
@property(retain, nonatomic) GetMemberCardHistoryResponse *mktMemberCardHistoryHomePageResp; // @synthesize mktMemberCardHistoryHomePageResp=_mktMemberCardHistoryHomePageResp;
@property(nonatomic) __weak id <WCMktMemberCardHistoryLogicControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleClickRightBtnWithItemData:(id)arg1;
- (void)handleDeleteCardSuccWithCardId:(id)arg1;
- (void)onGetDeleteInvalidTicketCgiResp:(id)arg1;
- (void)handleDeleteMemberCardHistoryItemWithIndexPath:(id)arg1;
- (void)handleClickMemberCardHistoryItemWithIndexPath:(id)arg1;
- (void)onGetMemberCardHistoryPageCgiResp:(id)arg1;
- (void)getMemberCardHistoryPageDataFromSvrWithOffset:(unsigned long long)arg1;
- (void)handleMemberCardHistoryLoadingMore;
- (void)refreshHomePageDataFromSvr;
- (void)updateHomePageDataAfrerViewControllerWillAppearIfNeed;
- (long long)getElemDataRowIndexInCardListWithCardId:(id)arg1;
- (void)handleTinyAppOpenWithAppInfo:(id)arg1 needUpdateHomePage:(_Bool)arg2;
- (void)handleH5OpenWithUrl:(id)arg1 needUpdateHomePage:(_Bool)arg2;
- (id)getHistoryItemList;
- (id)getRightButtonList;
- (id)getMemberCardHistoryDataWithIndexPath:(id)arg1;
- (long long)getTableViewRowCount;
- (id)getHistoryPageTitle;
- (_Bool)hasRespData;
- (_Bool)isMktMemberCardHistoryDataAllLoad;
- (_Bool)hasMktMemberCardHistoryData;
- (void)saveMemberCardHistoryHomePageDataToFile;
- (void)loadHistoryPageCacheDataAndRefreshFromSvr;
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

