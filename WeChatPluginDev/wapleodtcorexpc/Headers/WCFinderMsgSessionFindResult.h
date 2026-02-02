//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCFinderMsgSessionInfo, WCTableSessionStorage;

@interface WCFinderMsgSessionFindResult : NSObject
{
    _Bool _isInGreetSessionList;
    WCFinderMsgSessionInfo *_sessionInfo;
    WCTableSessionStorage *_sessionStorage;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isInGreetSessionList; // @synthesize isInGreetSessionList=_isInGreetSessionList;
@property(retain, nonatomic) WCTableSessionStorage *sessionStorage; // @synthesize sessionStorage=_sessionStorage;
@property(retain, nonatomic) WCFinderMsgSessionInfo *sessionInfo; // @synthesize sessionInfo=_sessionInfo;

@end

