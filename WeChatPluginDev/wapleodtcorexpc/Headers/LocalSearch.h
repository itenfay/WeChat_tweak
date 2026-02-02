//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface LocalSearch : NSObject
{
}

+ (void)SortGroupContactsUseModel:(id)arg1 dicMatchTip:(id)arg2 dicSessionTime:(id)arg3;
+ (void)SortGroupContacts:(id)arg1 dicMatchTip:(id)arg2 dicSessionTime:(id)arg3 trainSort:(_Bool)arg4;
+ (void)SortContacts:(id)arg1 dicMatchTip:(id)arg2 dicSessionTime:(id)arg3;
+ (id)searchGroupMembers:(id)arg1 sourceMembers:(id)arg2 groupContact:(id)arg3 dicCheckList:(id)arg4 dicMatchTip:(id)arg5 helpDataItem:(id)arg6;
+ (id)ftsMsgSearchMemberTalkerInGroupContact:(id)arg1 groupContact:(id)arg2 dicMatchTip:(id)arg3 helpDataItem:(id)arg4;
+ (_Bool)ftsMsgSearchHasTalkerContact:(id)arg1 arrContact:(id)arg2;
+ (id)ftsMsgSearchTalkerContact:(id)arg1 arrContact:(id)arg2 dicMatchTip:(id)arg3 helpDataItem:(id)arg4;
+ (void)multiKeywordFastSearch:(id)arg1 allContact:(id)arg2 helpDataItem:(id)arg3;
+ (id)searchGroupContacts:(id)arg1 strictByGroupMembers:(id)arg2;
+ (id)searchGroupContacts:(id)arg1 strictByGroupMember:(id)arg2;
+ (id)getMatchWordTip:(id)arg1 withContact:(id)arg2;
+ (id)searchContactsByName:(id)arg1 allContact:(id)arg2 limit:(int)arg3;
+ (id)searchFromFeatureItem:(id)arg1 allFeatureItem:(id)arg2 dicMatchTip:(id)arg3;
+ (id)searchFromContacts:(id)arg1 allContact:(id)arg2;
+ (_Bool)isMatchChatRoom:(id)arg1 usrName:(id)arg2 CheckList:(id)arg3;
+ (_Bool)isMatchObject:(id)arg1 object:(id)arg2;
+ (id)searchFromContacts:(id)arg1 allContact:(id)arg2 dicCheckList:(id)arg3 dicMatchTip:(id)arg4 helpDataItem:(id)arg5 isNotSearchChatRoomMember:(_Bool)arg6;
+ (id)searchFromContacts:(id)arg1 allContact:(id)arg2 dicCheckList:(id)arg3 dicMatchTip:(id)arg4 helpDataItem:(id)arg5;
+ (id)searchMultiKeywordFromGroupContacts:(id)arg1 allContact:(id)arg2 dicCheckList:(id)arg3 dicMatchTip:(id)arg4 helpDataItem:(id)arg5;
+ (id)searchChatRoomMemberWithoutMySelf:(id)arg1 groupContact:(id)arg2 checkList:(id)arg3 matchTips:(id)arg4 helpDataItem:(id)arg5 isFromMultiKeyword:(_Bool)arg6;
+ (id)getChatRoomMember:(id)arg1 helpDataItem:(id)arg2 ignoreSelf:(_Bool)arg3;
+ (id)getChatRoomMemberWithoutMyself:(id)arg1 helpDataItem:(id)arg2;
+ (id)mergeMultiKeywordMatchTips:(id)arg1 forContact:(id)arg2 withQueryText:(id)arg3;
+ (id)genGroupMatchTipForGroupContact:(id)arg1 memberUserName:(id)arg2 memberContactDisPlayName:(id)arg3 fromMatchInfo:(id)arg4 withQueryText:(id)arg5 andShowPrefix:(id)arg6;
+ (id)genGroupMatchTipForGroupContact:(id)arg1 memberUserName:(id)arg2 memberContactDisPlayName:(id)arg3 fromExistMatchTip:(id)arg4 withQueryText:(id)arg5;
+ (id)genMatchTipForObject:(id)arg1 targetText:(id)arg2 queryText:(id)arg3 matchInfo:(id)arg4 matchTypeConfig:(id)arg5 matchKey:(id)arg6;
+ (_Bool)isMultiMatchObject:(id)arg1 object:(id)arg2 matchTips:(id)arg3 helpDataItem:(id)arg4 extRule:(int)arg5;
+ (_Bool)isMultiMatchObject:(id)arg1 object:(id)arg2 matchTips:(id)arg3 helpDataItem:(id)arg4;
+ (_Bool)isMultiMatchText:(id)arg1 searchItem:(id)arg2 matchInfo:(id)arg3;
+ (id)tryGenRegexForSearchText:(id)arg1 isRegex:(_Bool *)arg2 isEnglish:(_Bool *)arg3;
+ (id)makeSearchItemFromQuery:(id)arg1;
+ (id)getValidKeywords:(id)arg1;
+ (id)getSeperators;
+ (void)initialize;

@end

