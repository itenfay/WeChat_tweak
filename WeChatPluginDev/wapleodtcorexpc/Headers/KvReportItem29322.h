//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface KvReportItem29322
{
    unsigned int _action;
    unsigned int _hitCache;
    unsigned int _delay;
    unsigned int _preloadingOnEnter;
    unsigned int _releaseScene;
    NSString *_sessionId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int releaseScene; // @synthesize releaseScene=_releaseScene;
@property(nonatomic) unsigned int preloadingOnEnter; // @synthesize preloadingOnEnter=_preloadingOnEnter;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned int delay; // @synthesize delay=_delay;
@property(nonatomic) unsigned int hitCache; // @synthesize hitCache=_hitCache;
@property(nonatomic) unsigned int action; // @synthesize action=_action;
- (id)reportOrderedFieldNameArr;
- (unsigned int)reportKvId;

@end

