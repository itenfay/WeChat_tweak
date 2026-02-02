//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ContactTagCacheMgr, NSArray, NSMutableDictionary, NSString;

@interface ContactTagMgr
{
    _Bool isCompleteLoadCache;
    _Bool isManulAuthOK;
    NSMutableDictionary *_dicNameToId;
    NSMutableDictionary *_dicIdToName;
    NSArray *_arrIdOrder;
    NSMutableDictionary *_dicIdToOrder;
    NSMutableDictionary *_dicOperateCache;
    ContactTagCacheMgr *m_CacheMgr;
    unsigned int lastTimeGetAllLabelsFromServer;
}

+ (void)reportContactTagWithReportScene:(unsigned int)arg1 andActionCode:(unsigned int)arg2 andHandlePage:(unsigned int)arg3;
+ (id)GetPathOfContactLabelOrderList;
+ (id)GetPathOfContactLabelList;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnUpdateLabelOrder:(id)arg1 Event:(unsigned int)arg2;
- (void)OnSetLabels:(id)arg1 Event:(unsigned int)arg2;
- (void)OnUpdateLabelName:(id)arg1 Event:(unsigned int)arg2;
- (void)OnDeleteLabel:(id)arg1 Event:(unsigned int)arg2;
- (void)OnAddLabel:(id)arg1 Event:(unsigned int)arg2;
- (void)OnGetAllLabels:(id)arg1 Event:(unsigned int)arg2;
- (unsigned int)updateLabelOrder:(id)arg1;
- (unsigned int)updateLabelName:(id)arg1 newName:(id)arg2;
- (unsigned int)setLabelsToContact:(id)arg1;
- (unsigned int)deleteLabel:(id)arg1;
- (unsigned int)addLabel:(id)arg1;
- (id)getAllLabelsFromServer;
- (id)getAllLabelsFromLocal;
- (id)getAllLabelID;
- (id)getAllLabelName;
- (_Bool)isAlreadyExistTagName:(id)arg1;
- (id)searchLabel;
- (_Bool)searchLabel:(id)arg1 forContact:(id)arg2;
- (id)getContactsForTagName:(id)arg1;
- (id)getDicWithUserNameForAllTag;
- (id)getContactsForLabel:(id)arg1;
- (id)getLabelsNameForStrangerWithTagIDList:(id)arg1;
- (id)getLabelsNameForContact:(id)arg1;
- (id)getLabelsForContact:(id)arg1;
- (id)arrIDListToNameListInternal:(id)arg1;
- (id)GetDicOfUserNameToTagNamesWithContacts:(id)arg1;
- (void)reportContactTagListPageWithSource:(unsigned int)arg1 action:(unsigned int)arg2 operateLabelCount:(unsigned int)arg3 addMemberCount:(unsigned int)arg4 removeMemberCount:(unsigned int)arg5;
- (void)reportContactTagListPageWithSource:(unsigned int)arg1 action:(unsigned int)arg2 operateLabelCount:(unsigned int)arg3;
- (void)reportContactTagListPageWithSource:(unsigned int)arg1 action:(unsigned int)arg2;
- (void)reportContactTagOperateLog:(id)arg1 isClickAll:(_Bool)arg2 buttonAddNewLabelCnt:(unsigned int)arg3 searchAddNewLabelCnt:(unsigned int)arg4 selectAddLabelCnt:(unsigned int)arg5 searchAddLabelCnt:(unsigned int)arg6 oriLabelCnt:(unsigned int)arg7 removedLabelCnt:(unsigned int)arg8 addedLabelCnt:(unsigned int)arg9 stayTime:(unsigned int)arg10 totalLabelCnt:(unsigned int)arg11 opResult:(unsigned int)arg12 remarkEditScene:(unsigned int)arg13 remarkEditType:(unsigned int)arg14 source:(unsigned int)arg15 descWordCount:(unsigned int)arg16 descPicSource:(id)arg17 logpressDeleteDescPicCnt:(unsigned int)arg18 detailpageDeleteDescPicCnt:(unsigned int)arg19 sessionId:(id)arg20;
- (void)reportContactTagOperateLogWithFriendUserName:(id)arg1 isClickAll:(_Bool)arg2 currentTagItemList:(id)arg3 originalTagItemList:(id)arg4 currentSelectedTagIdList:(id)arg5 originalSelectedTagIdList:(id)arg6 editViewNewlyCreatedTags:(id)arg7 editViewAddedTags:(id)arg8 tableViewNewlyCreatedTags:(id)arg9 tableViewAddedTags:(id)arg10 stayTime:(unsigned int)arg11 opResult:(_Bool)arg12 remarkEditScene:(unsigned int)arg13 remarkEditType:(unsigned int)arg14 source:(unsigned int)arg15 descWordCount:(unsigned int)arg16 descPicSource:(id)arg17 logpressDeleteDescPicCnt:(unsigned int)arg18 detailpageDeleteDescPicCnt:(unsigned int)arg19 sessionId:(id)arg20;
- (id)getDicOfUserNameAndTagNames:(id)arg1;
- (id)arrIdListToTagNames:(id)arg1;
- (id)arrIdListToFormatString:(id)arg1;
- (id)arrLabelNameToArrId:(id)arg1;
- (id)arrLabelNameToIdFormatString:(id)arg1;
- (id)IdToLabelName:(unsigned int)arg1;
- (unsigned int)LabelNameToId:(id)arg1;
- (void)updateCacheLabelOrder:(id)arg1;
- (void)shouldGetAllLabelsFromServer:(id)arg1;
- (void)UpdateCacheMgrWithUserNameAndIDList:(id)arg1;
- (void)ClearCacheDataWithNamePair:(id)arg1;
- (void)ClearCacheDataWithNames:(id)arg1;
- (void)UpdateCacheData:(unsigned int)arg1 LabelName:(id)arg2;
- (void)SaveCacheIdOrderToFile;
- (void)SaveCacheDataToFile;
- (void)CleanCurrentTagNameAndIdCache;
- (id)GetContactLabelItemsFromFile;
- (void)BuildCacheDataFromFile;
- (id)getContactTagIDListToNameList:(id)arg1;
- (void)onRemoveContactFromAddressBook:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onManulLoginOK;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

