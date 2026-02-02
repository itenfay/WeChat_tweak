//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

@interface WCFinderMsgSessionListReporter : NSObject
{
    _Bool _isGreetSession;
    _Bool _needReport;
    unsigned int _myAccountType;
    unsigned int _exposeSessionCount;
    unsigned int _sessionClickCount;
    unsigned int _delSessionCount;
    unsigned long long _fromCommentScene;
    unsigned long long _enterTimeInMs;
    NSMutableSet *_exposeSessionSet;
    NSMutableSet *_openSessionSet;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int delSessionCount; // @synthesize delSessionCount=_delSessionCount;
@property(nonatomic) unsigned int sessionClickCount; // @synthesize sessionClickCount=_sessionClickCount;
@property(nonatomic) unsigned int exposeSessionCount; // @synthesize exposeSessionCount=_exposeSessionCount;
@property(retain, nonatomic) NSMutableSet *openSessionSet; // @synthesize openSessionSet=_openSessionSet;
@property(retain, nonatomic) NSMutableSet *exposeSessionSet; // @synthesize exposeSessionSet=_exposeSessionSet;
@property(nonatomic) _Bool needReport; // @synthesize needReport=_needReport;
@property(nonatomic) unsigned long long enterTimeInMs; // @synthesize enterTimeInMs=_enterTimeInMs;
@property(nonatomic) unsigned long long fromCommentScene; // @synthesize fromCommentScene=_fromCommentScene;
@property(nonatomic) _Bool isGreetSession; // @synthesize isGreetSession=_isGreetSession;
@property(nonatomic) unsigned int myAccountType; // @synthesize myAccountType=_myAccountType;
- (void)quitAndReport;
- (void)enterViewController;
- (void)deleteSessionWithSessionId:(id)arg1;
- (void)openSessionWithSessionId:(id)arg1;
- (void)exposeSessionWithSessionId:(id)arg1;
@property(readonly, nonatomic) NSString *chatlistSessionid;
- (void)copyInfosFromReporter:(id)arg1;
- (id)initWithCommentScene:(unsigned long long)arg1;

@end

