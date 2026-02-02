//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact, NSMutableArray, WCDataItem;

@interface WCTogetherDisplayInfo : NSObject
{
    _Bool _containsAnyUsers;
    WCDataItem *_referredDataItem;
    CContact *_currentUser;
    NSMutableArray *_friends;
    NSMutableArray *_otherUsernames;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool containsAnyUsers; // @synthesize containsAnyUsers=_containsAnyUsers;
@property(readonly, nonatomic) NSMutableArray *otherUsernames; // @synthesize otherUsernames=_otherUsernames;
@property(readonly, nonatomic) NSMutableArray *friends; // @synthesize friends=_friends;
@property(retain, nonatomic) CContact *currentUser; // @synthesize currentUser=_currentUser;
@property(retain, nonatomic) WCDataItem *referredDataItem; // @synthesize referredDataItem=_referredDataItem;
- (_Bool)containsTogetherUsers;
@property(readonly, nonatomic) _Bool containsOtherUsers;
@property(readonly, nonatomic) _Bool containsFriends;
@property(readonly, nonatomic) _Bool containsCurrentUser;
@property(readonly, nonatomic) _Bool isAuthoredByCurrentUser;
- (id)init;

@end

