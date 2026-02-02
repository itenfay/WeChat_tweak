//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ContactsDataLogic, NSArray, NSString;

@interface WCMomentsHistoryGroupViewModel : NSObject
{
    NSString *_title;
    unsigned long long _m_commonSearchScene;
    unsigned long long _contactDataScene;
    ContactsDataLogic *_contactDataLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ContactsDataLogic *contactDataLogic; // @synthesize contactDataLogic=_contactDataLogic;
@property(readonly, nonatomic) unsigned long long contactDataScene; // @synthesize contactDataScene=_contactDataScene;
@property(nonatomic) unsigned long long m_commonSearchScene; // @synthesize m_commonSearchScene=_m_commonSearchScene;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)onContactsDataChange;
@property(readonly, nonatomic) NSArray *historyGroupContacts;
@property(readonly, nonatomic) unsigned long long historyGroupCount;
- (id)initWithContactDataScene:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

