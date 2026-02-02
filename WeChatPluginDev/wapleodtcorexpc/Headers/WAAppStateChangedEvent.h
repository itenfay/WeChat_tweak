//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WAAppPlatformStateChangedContext;

@interface WAAppStateChangedEvent
{
    unsigned long long _eventType;
    WAAppPlatformStateChangedContext *_context;
    unsigned long long _resourceType;
    unsigned long long _sharedResourceType;
    unsigned long long _closeReason;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long closeReason; // @synthesize closeReason=_closeReason;
@property(nonatomic) unsigned long long sharedResourceType; // @synthesize sharedResourceType=_sharedResourceType;
@property(nonatomic) unsigned long long resourceType; // @synthesize resourceType=_resourceType;
@property(retain, nonatomic) WAAppPlatformStateChangedContext *context; // @synthesize context=_context;
@property(nonatomic) unsigned long long eventType; // @synthesize eventType=_eventType;
- (id)description;

@end

