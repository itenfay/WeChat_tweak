//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCFinderMsgSessionInfo;

@interface WCFinderMsgSessionUpdateResult : NSObject
{
    _Bool _isInValidUpdate;
    _Bool _isSenderForMsg;
    _Bool _isInAsFansSessionList;
    _Bool _isInAsAliasSessionList;
    _Bool _isInAsAuthorSessionList;
    _Bool _normalSessionHasUpdated;
    _Bool _greetSessionHasUpdated;
    _Bool _isInGreetSessionListOnly;
    _Bool _isGreetSessionUnreadStatusUpdated;
    WCFinderMsgSessionInfo *_sessionInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderMsgSessionInfo *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
@property(nonatomic) _Bool isGreetSessionUnreadStatusUpdated; // @synthesize isGreetSessionUnreadStatusUpdated=_isGreetSessionUnreadStatusUpdated;
@property(nonatomic) _Bool isInGreetSessionListOnly; // @synthesize isInGreetSessionListOnly=_isInGreetSessionListOnly;
@property(nonatomic) _Bool greetSessionHasUpdated; // @synthesize greetSessionHasUpdated=_greetSessionHasUpdated;
@property(nonatomic) _Bool normalSessionHasUpdated; // @synthesize normalSessionHasUpdated=_normalSessionHasUpdated;
@property(nonatomic) _Bool isInAsAuthorSessionList; // @synthesize isInAsAuthorSessionList=_isInAsAuthorSessionList;
@property(nonatomic) _Bool isInAsAliasSessionList; // @synthesize isInAsAliasSessionList=_isInAsAliasSessionList;
@property(nonatomic) _Bool isInAsFansSessionList; // @synthesize isInAsFansSessionList=_isInAsFansSessionList;
@property(nonatomic) _Bool isSenderForMsg; // @synthesize isSenderForMsg=_isSenderForMsg;
@property(nonatomic) _Bool isInValidUpdate; // @synthesize isInValidUpdate=_isInValidUpdate;

@end

