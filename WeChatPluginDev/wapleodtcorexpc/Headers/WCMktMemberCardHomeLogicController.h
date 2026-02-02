//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GetMemberCardHomePageResponse, NSString, WCMktDeleteTicketCgi, WCMktMemberCardHomePageCgi;
@protocol WCMktMemberCardHomeLogicControllerDelegate;

@interface WCMktMemberCardHomeLogicController : NSObject
{
    _Bool _bHasSendHomePageRequest;
    _Bool _bNeedRefreshHomePageAfterAppear;
    _Bool _bHasHandleLocation;
    unsigned int _svrRetChangeRule;
    id <WCMktMemberCardHomeLogicControllerDelegate> _delegate;
    GetMemberCardHomePageResponse *_memberCardHomePageResponse;
    WCMktMemberCardHomePageCgi *_homePageCgi;
    NSString *_deletingCardID;
    WCMktDeleteTicketCgi *_deleteCardCgi;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bHasHandleLocation; // @synthesize bHasHandleLocation=_bHasHandleLocation;
@property(nonatomic) _Bool bNeedRefreshHomePageAfterAppear; // @synthesize bNeedRefreshHomePageAfterAppear=_bNeedRefreshHomePageAfterAppear;
@property(nonatomic) unsigned int svrRetChangeRule; // @synthesize svrRetChangeRule=_svrRetChangeRule;
@property(retain, nonatomic) WCMktDeleteTicketCgi *deleteCardCgi; // @synthesize deleteCardCgi=_deleteCardCgi;
@property(retain, nonatomic) NSString *deletingCardID; // @synthesize deletingCardID=_deletingCardID;
@property(retain, nonatomic) WCMktMemberCardHomePageCgi *homePageCgi; // @synthesize homePageCgi=_homePageCgi;
@property(nonatomic) _Bool bHasSendHomePageRequest; // @synthesize bHasSendHomePageRequest=_bHasSendHomePageRequest;
@property(retain, nonatomic) GetMemberCardHomePageResponse *memberCardHomePageResponse; // @synthesize memberCardHomePageResponse=_memberCardHomePageResponse;
@property(nonatomic) __weak id <WCMktMemberCardHomeLogicControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onUseCard:(id)arg1;
- (void)onShareCard:(id)arg1 lastIndex:(id)arg2;
- (void)onGiftCard:(id)arg1 lastIndex:(id)arg2;
- (void)updateRecentListAfterCardDataChange;
- (void)onDeleteCardIDList:(id)arg1 ErrCode:(int)arg2;
- (void)onDeleteCard:(id)arg1;
- (void)onGetDeleteTicketCgiResp:(id)arg1;
- (void)sendDeleteCardRequestWithUserCardId:(id)arg1;
- (void)onGetWCMktMemberCardPageCgiResp:(id)arg1;
- (void)onRetrieveLocation:(int)arg1;
- (void)getHomePageDataFromSvrWithOffset:(unsigned int)arg1;
- (void)handleHomePageDataLoadingMore;
- (void)refreshHomePageDataFromSvr;
- (void)getHomePageDataFromSvr;
- (void)handleClickRightBtnWithItemData:(id)arg1;
- (void)refreshHomePageFromSvrIfNecessaryAfterViewAppear;
- (void)handleEnterPhoneMemberCardEntry;
- (void)changeSortruleAndRefreshHomePage;
- (void)handleTinyAppOpenWithAppInfo:(id)arg1;
- (void)handleH5OpenWithUrl:(id)arg1;
- (void)handleEnterHistoryEntry;
- (void)handleRemoveMemberCardCellWithIndexPath:(id)arg1;
- (void)handleMemberCardCellClickWithIndexPath:(id)arg1;
- (void)handleRefreshHomePageAfterSelectSortRuleWording:(id)arg1;
- (id)getRightButtonList;
- (id)bubblePhoneMemberCardEntryWording;
- (id)getMemberCardItemWithIndexPath:(id)arg1;
- (id)getMemberCardListData;
- (unsigned int)getSortRuleFromSortWording:(id)arg1;
- (id)getSortListWording;
- (id)getUserMemberCardSortInfo;
- (long long)getTableViewRowCount;
- (_Bool)hasMemberCardData;
- (_Bool)isMemberCardAllLoad;
- (void)removeMemberListDataWithUserCardId:(id)arg1;
- (unsigned int)getMemberCardSortRule;
- (_Bool)shouldShowSortTypeEntry;
- (_Bool)isDenyLocationAccess;
- (unsigned int)getSortRuleReqNum:(unsigned int)arg1;
- (_Bool)isSvrReturnSortRule:(unsigned int)arg1;
- (void)saveHomePageDataToFile;
- (void)loadMemberCardHomePageCacheDataAndRefreshFromSvr;
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

