//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OMJRecommendOptions : NSObject
{
    unsigned int _eventType;
    unsigned long long _mode;
    NSString *_scene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int eventType; // @synthesize eventType=_eventType;
@property(readonly, copy, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (id)description;
- (id)initWithMode:(unsigned long long)arg1 scene:(id)arg2 eventType:(unsigned int)arg3;
- (id)initWithMode:(unsigned long long)arg1 scene:(id)arg2;

@end

