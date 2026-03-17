//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, NSArray, NSMutableArray, NSString, SearchMatchTip;

@protocol MemberDataLogicProtocol
- (SearchMatchTip *)getMatchTipForUsername:(NSString *)arg1;
- (NSMutableArray *)filtContactsByName:(NSArray *)arg1;
- (NSMutableArray *)getFilteredContacts;
- (void)cancelSearch;
- (void)doSearch:(NSString *)arg1;
- (NSArray *)getAllContacts;
- (CContact *)getItemInSection:(unsigned long long)arg1 atRow:(unsigned long long)arg2;
- (unsigned long long)getSectionItemCount:(unsigned long long)arg1;
- (NSString *)getKeyAtSection:(unsigned long long)arg1;
- (NSArray *)getKeyArray;
- (unsigned long long)getSectionCount;
- (unsigned long long)getTotalCount;
- (_Bool)removeContact:(CContact *)arg1;
- (void)reloadMemberList:(NSArray *)arg1;
- (void)sortKeys;
- (void)addContact:(CContact *)arg1;
@end

