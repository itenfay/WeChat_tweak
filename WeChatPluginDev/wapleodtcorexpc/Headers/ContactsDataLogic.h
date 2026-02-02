//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FTSMultiContactSearchLogic, FTSTopHitMgr, MMTimer, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, WCSTokenPickLogic, WCSmartGroupCore;
@protocol ContactsDataLogicDelegate;

@interface ContactsDataLogic
{
    id <ContactsDataLogicDelegate> m_delegate;
    NSMutableDictionary *m_dicAllContacts;
    NSMutableArray *m_arrAllKey;
    NSMutableArray *m_arrFilteredContacts;
    NSMutableArray *m_arrChatRooms;
    NSMutableDictionary *m_dicOpenIMContacts;
    NSMutableDictionary *m_dicOpenIMContactClassifys;
    NSMutableArray *m_arrAccountDeletedOpenIMContact;
    unsigned int m_uiScene;
    unsigned int m_uiNormalContact;
    _Bool m_bSort;
    _Bool m_bNeedReload;
    _Bool m_extendChatRoom;
    unsigned int m_uiContactCount;
    _Bool m_hadOpenIMContact;
    FTSTopHitMgr *_ftsTopHitMgr;
    NSString *_taskKey;
    NSString *nsCurrentSearchText;
    NSMutableArray *_arrResultKey;
    NSMutableDictionary *_dicResultTitle;
    NSMutableDictionary *_dicResult;
    WCSmartGroupCore *_recommendLogic;
    NSDictionary *_dicRecommendGroupSelectedContacts;
    unsigned int _smartGroupSeq;
    NSMutableArray *m_arrRecommendContacts;
    NSMutableArray *m_arrRecommendGroups;
    MMTimer *m_ProcessOnModifyContactTimer;
    FTSMultiContactSearchLogic *_multiSearchLogic;
    _Bool m_bNotSearchTopHit;
    _Bool m_bNotifySearchWhenSearchAll;
    _Bool _bMemberMatch;
    _Bool _bMemberMatchWithGroups;
    unsigned int _m_eFTSSearchType;
    unsigned long long m_enAsyncSearchOption;
    WCSTokenPickLogic *_tokenPickLogic;
    NSMutableArray *_myNormalContactArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *myNormalContactArray; // @synthesize myNormalContactArray=_myNormalContactArray;
@property(retain, nonatomic) WCSTokenPickLogic *tokenPickLogic; // @synthesize tokenPickLogic=_tokenPickLogic;
@property(nonatomic) _Bool bMemberMatchWithGroups; // @synthesize bMemberMatchWithGroups=_bMemberMatchWithGroups;
@property(nonatomic) _Bool bMemberMatch; // @synthesize bMemberMatch=_bMemberMatch;
@property(nonatomic) unsigned int m_eFTSSearchType; // @synthesize m_eFTSSearchType=_m_eFTSSearchType;
@property(nonatomic) unsigned long long m_enAsyncSearchOption; // @synthesize m_enAsyncSearchOption;
@property(nonatomic) _Bool m_bNotifySearchWhenSearchAll; // @synthesize m_bNotifySearchWhenSearchAll;
@property(nonatomic) _Bool m_bNotSearchTopHit; // @synthesize m_bNotSearchTopHit;
@property(nonatomic) _Bool m_hadOpenIMContact; // @synthesize m_hadOpenIMContact;
@property(nonatomic) _Bool m_extendChatRoom; // @synthesize m_extendChatRoom;
@property(nonatomic) _Bool m_bSort; // @synthesize m_bSort;
@property(readonly, nonatomic) unsigned int m_uiNormalContact; // @synthesize m_uiNormalContact;
@property(nonatomic) unsigned int m_uiScene; // @synthesize m_uiScene;
@property(nonatomic) __weak id <ContactsDataLogicDelegate> m_delegate; // @synthesize m_delegate;
- (void)notifyMultiSearchResultSection:(long long)arg1 added:(_Bool)arg2 deleted:(_Bool)arg3;
- (void)notifyMultiSearchResult;
- (void)onRecommendResultUpdated:(id)arg1;
- (void)onContactResultUpdated:(id)arg1;
- (void)multiResultKVReport;
- (void)updateTokenLogic:(id)arg1;
- (void)multiLogicSearchRecommendsBy:(id)arg1;
- (unsigned int)genSeq;
- (void)finishTask:(id)arg1;
- (_Bool)asyncSearchRecommends:(id)arg1;
- (void)updateRecommendGroups:(id)arg1;
- (id)getRecommendGroups;
- (_Bool)isRecommendContact:(id)arg1;
- (void)updateRecommendContacts:(id)arg1;
- (id)getRecommendContacts;
- (void)FilterSearchResultOfNormalContacts:(id)arg1;
- (_Bool)fillSectionResultForOption:(unsigned long long)arg1 arrSectionKey:(id)arg2 dicSectionTitle:(id)arg3 dicSearchResult:(id)arg4;
- (void)onFTSContactSearchFinish:(id)arg1;
- (unsigned int)topHitTypeForRandomSearchOption:(unsigned long long)arg1;
- (unsigned int)currentTopHitType;
- (void)onUnInstallPlugin:(long long)arg1;
- (void)onInstallPlugin:(long long)arg1;
- (void)onContactListUpdate:(unsigned int)arg1;
- (void)onRemoveContactFromAddressBook:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)processOnModifyContactTimer;
- (void)stopLockerTimesup;
- (void)multiSelectWithSearchResult:(id)arg1;
- (id)getMatchTipForUsername:(id)arg1;
- (id)getFilteredContacts;
- (id)getAllContacts;
- (id)getAllContactsDictionary;
- (id)getContactsArrayWith:(id)arg1;
- (id)getEnterpriseBrandContactsArray;
- (id)getKeysArray;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (void)delaySearch:(id)arg1 slowMode:(_Bool)arg2;
- (void)delaySearchImp:(id)arg1;
- (void)doAsynSearch:(id)arg1;
- (void)clearAsynSearchLastQueryText;
- (void)updateSelectedContacts:(id)arg1;
- (void)updateAsynSearchQueryText:(id)arg1;
- (void)doAsynInit;
- (void)dealloc;
- (_Bool)getNeedSort;
- (id)initWithScene:(unsigned int)arg1 delegate:(id)arg2;
- (id)initWithScene:(unsigned int)arg1 delegate:(id)arg2 sort:(_Bool)arg3 extendChatRoom:(_Bool)arg4;
- (id)initWithScene:(unsigned int)arg1 delegate:(id)arg2 sort:(_Bool)arg3;
- (_Bool)reloadContacts;
- (void)onlyReloadOpemIMContacts;
- (id)getEmptyTips;
- (void)filtInContacts:(id)arg1;
- (void)filterCustomizationSelectContacts:(id)arg1;
- (void)filterForSearchContact:(id)arg1;
- (void)filterOnlyBrandContactContact:(id)arg1;
- (void)filterSingleSelectSession:(id)arg1;
- (void)filterTransferMoneySimpleSessionContacts:(id)arg1;
- (void)filterTransferMoneyContacts:(id)arg1;
- (void)filterOnlyWeixinContact:(id)arg1 IgnoreOpenim:(_Bool)arg2 ignoreSelf:(_Bool)arg3 ignoreFileHelpr:(_Bool)arg4;
- (void)filterVoiceContact:(id)arg1;
- (void)filterVideoContact:(id)arg1;
- (void)filterMutilSelectWithBakChatFilter:(id)arg1;
- (void)filterSelectWithVerifyedContacts:(id)arg1;
- (void)filterHistoryGroupContacts:(id)arg1 IgnoreOpenim:(_Bool)arg2;
- (void)filterCanUpgradeOpenIMGroupContacts:(id)arg1;
- (_Bool)hasHistoryGroupContacts;
- (_Bool)hasGroupContacts;
- (void)filterGroupContacts:(id)arg1 IgnoreOpenim:(_Bool)arg2;
- (void)filterMultiSelectContacts:(id)arg1 IgnoreOpenim:(_Bool)arg2;
- (void)filterSelectOpenIMContacts:(id)arg1;
- (void)filterSelectWithBrandContacts:(id)arg1 IgnoreOpenim:(_Bool)arg2;
- (void)filterSelectContacts:(id)arg1;
- (void)filterOpenImContactViewContacts:(id)arg1;
- (void)filterContactsViewContacts:(id)arg1;
- (id)getDicOpenIMContactClassifys;
- (id)getDicOpenIMContacts;
- (id)getChatRoomContacts;
- (void)addContact:(id)arg1;
- (void)sort;
- (id)addSectionKey:(id)arg1;
- (id)addHiddenSectionKey:(id)arg1;
- (void)pluginsChanged;
- (_Bool)hasShowOpenIMEntrance;
- (_Bool)hasChatRoom;
- (void)removeBrandCache:(id)arg1;
- (void)deleteContact:(id)arg1 deleteInDB:(_Bool)arg2;
- (void)unInstallPlugin:(id)arg1;
- (id)getAllNormalContact;
- (id)getFavourContactArray;
- (id)getArrAccountDeletedOpenIMContact;
- (unsigned int)getContactCount;
- (unsigned int)getOpenIMAcctTypeCount;
- (unsigned int)getEnterpriseBrandCount;
- (_Bool)shouldShowServiceBrandGroup;
- (_Bool)shouldShowSubscriptionBrandGroup;
- (void)processOnModifyContact;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

