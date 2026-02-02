//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact, NSMutableArray;

@interface ContactRelatedGroupLogic : NSObject
{
    CContact *_contact;
    NSMutableArray *_arrRelatedGroup;
    _Bool _bSearchDone;
    _Bool _bHasSearch;
}

- (void).cxx_destruct;
- (void)onContactListUpdate:(unsigned int)arg1;
- (id)getContactRelatedGroup;
- (_Bool)isSearchDone;
- (void)sortChatRoom:(id)arg1;
- (void)trySearchRelatedGroup;
- (id)initWithContact:(id)arg1;

@end

