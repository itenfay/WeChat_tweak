//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface MemberDataLogic : NSObject
{
    NSString *m_adminName;
    NSMutableDictionary *m_dicAllContacts;
    NSMutableArray *m_searchFilterContacts;
    NSMutableArray *m_keyArr;
    NSMutableArray *m_allContacts;
    NSMutableDictionary *m_dicMatchTip;
    NSMutableDictionary *m_dicSessionTime;
}

- (void).cxx_destruct;
- (void)sortContacts:(id)arg1 matchTips:(id)arg2;
- (id)getMatchTipForUsername:(id)arg1;
- (id)filtContactsByName:(id)arg1;
- (id)getFilteredContacts;
- (void)cancelSearch;
- (void)doSearch:(id)arg1;
- (id)getItemInSection:(unsigned long long)arg1 atRow:(unsigned long long)arg2;
- (unsigned long long)getSectionItemCount:(unsigned long long)arg1;
- (unsigned long long)getSectionCount;
- (id)getKeyAtSection:(unsigned long long)arg1;
- (id)getKeyArray;
- (void)fillSessionTime;
- (void)sortKeys;
- (_Bool)removeContact:(id)arg1;
- (void)addContact:(id)arg1;
- (void)reloadMemberList:(id)arg1;
- (id)addSectionKey:(id)arg1;
- (id)getAllContacts;
- (unsigned long long)getTotalCount;
- (id)initWithMemberList:(id)arg1 admin:(id)arg2;

@end

