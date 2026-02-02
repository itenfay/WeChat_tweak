//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MJTemplateListParams : NSObject
{
    unsigned long long _eventId;
    NSString *_priorityTemplateId;
    unsigned long long _scene;
    NSString *_categoryKey;
    NSString *_musicId;
}

+ (id)defaultParams;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *musicId; // @synthesize musicId=_musicId;
@property(copy, nonatomic) NSString *categoryKey; // @synthesize categoryKey=_categoryKey;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *priorityTemplateId; // @synthesize priorityTemplateId=_priorityTemplateId;
@property(nonatomic) unsigned long long eventId; // @synthesize eventId=_eventId;

@end

