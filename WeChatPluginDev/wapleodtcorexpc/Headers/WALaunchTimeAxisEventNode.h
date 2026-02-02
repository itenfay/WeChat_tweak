//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WALaunchTimeAxisEventNode : NSObject
{
    unsigned int _option;
    NSString *_appid;
    NSString *_parentPhase;
    NSString *_event;
    unsigned long long _category;
    unsigned long long _eventType;
    unsigned long long _timestamp;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned int option; // @synthesize option=_option;
@property(nonatomic) unsigned long long eventType; // @synthesize eventType=_eventType;
@property(nonatomic) unsigned long long category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *event; // @synthesize event=_event;
@property(copy, nonatomic) NSString *parentPhase; // @synthesize parentPhase=_parentPhase;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;

@end

