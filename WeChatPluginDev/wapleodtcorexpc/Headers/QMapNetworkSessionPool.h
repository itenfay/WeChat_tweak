//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NSURLSessionConfiguration;

@interface QMapNetworkSessionPool : NSObject
{
    int lock;
    _Bool _dead;
    NSMutableArray *_sessionPool;
    unsigned long long _cursor;
    NSURLSessionConfiguration *_configuration;
    unsigned long long _sessionCount;
}

+ (id)sessionPoolWithConfiguration:(id)arg1 sessionCount:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool dead; // @synthesize dead=_dead;
@property(nonatomic) unsigned long long sessionCount; // @synthesize sessionCount=_sessionCount;
@property(copy, nonatomic) NSURLSessionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) unsigned long long cursor; // @synthesize cursor=_cursor;
@property(retain, nonatomic) NSMutableArray *sessionPool; // @synthesize sessionPool=_sessionPool;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)finishTasksAndInvalidate;
- (id)getSession;
- (id)initWithConfiguration:(id)arg1 sessionCount:(unsigned long long)arg2;
- (void)removeSession:(id)arg1;
- (id)createSession;
- (void)setupPool;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

