//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface AsyncEmoticonRecommendationTask : NSObject
{
    _Bool _localTaskFinish;
    _Bool _remoteTaskFinish;
    _Bool _shouldSearchRemote;
    NSString *_identifier;
    NSString *_recSessionId;
    NSArray *_localList;
    NSArray *_remoteList;
    unsigned long long _startTime;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldSearchRemote; // @synthesize shouldSearchRemote=_shouldSearchRemote;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSArray *remoteList; // @synthesize remoteList=_remoteList;
@property(retain, nonatomic) NSArray *localList; // @synthesize localList=_localList;
@property(nonatomic) _Bool remoteTaskFinish; // @synthesize remoteTaskFinish=_remoteTaskFinish;
@property(nonatomic) _Bool localTaskFinish; // @synthesize localTaskFinish=_localTaskFinish;
@property(retain, nonatomic) NSString *recSessionId; // @synthesize recSessionId=_recSessionId;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *sessionId;
- (void)dealloc;
- (id)description;
- (id)init;

@end

