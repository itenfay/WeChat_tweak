//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderFeedMediaWrap;

@interface WCFinderPriorityTask : NSObject
{
    _Bool _isFinished;
    unsigned long long _priority;
    unsigned long long _taskIndex;
    NSString *_identifier;
    CDUnknownBlockType _mediaWrapCreateBlock;
    NSString *_token;
    unsigned long long _commentScene;
    WCFinderFeedMediaWrap *_associateMediaWrap;
    unsigned long long _timestamp;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) WCFinderFeedMediaWrap *associateMediaWrap; // @synthesize associateMediaWrap=_associateMediaWrap;
@property(nonatomic) unsigned long long commentScene; // @synthesize commentScene=_commentScene;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) CDUnknownBlockType mediaWrapCreateBlock; // @synthesize mediaWrapCreateBlock=_mediaWrapCreateBlock;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(nonatomic) unsigned long long taskIndex; // @synthesize taskIndex=_taskIndex;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
- (id)initWithIdentifier:(id)arg1 priority:(unsigned long long)arg2;

@end

