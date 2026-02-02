//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCFinderLiveMsgSessionInfo;

@interface WCFinderLiveMsgSessionUpdateResult : NSObject
{
    _Bool _isInValidUpdate;
    _Bool _isSenderForMsg;
    _Bool _sessionHasUpdated;
    WCFinderLiveMsgSessionInfo *_sessionInfoById;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveMsgSessionInfo *sessionInfoById; // @synthesize sessionInfoById=_sessionInfoById;
@property(nonatomic) _Bool sessionHasUpdated; // @synthesize sessionHasUpdated=_sessionHasUpdated;
@property(nonatomic) _Bool isSenderForMsg; // @synthesize isSenderForMsg=_isSenderForMsg;
@property(nonatomic) _Bool isInValidUpdate; // @synthesize isInValidUpdate=_isInValidUpdate;

@end

