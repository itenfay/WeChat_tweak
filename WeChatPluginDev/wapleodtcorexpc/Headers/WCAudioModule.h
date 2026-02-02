//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol WCAudioModuleDelegate;

@interface WCAudioModule : NSObject
{
    unsigned char _priority;
    _Bool _hasListenerLastTime;
    int _scene;
    NSString *_groupName;
    NSString *_identifier;
    unsigned long long _options;
    NSArray *_mixList;
    id <WCAudioModuleDelegate> _listener;
    NSMutableDictionary *_userInfo;
    NSString *_conflictWording;
}

+ (id)getConflictWordingWithScene:(int)arg1;
+ (unsigned char)getPriorityWithScene:(int)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *conflictWording; // @synthesize conflictWording=_conflictWording;
@property(retain, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) _Bool hasListenerLastTime; // @synthesize hasListenerLastTime=_hasListenerLastTime;
@property(nonatomic) __weak id <WCAudioModuleDelegate> listener; // @synthesize listener=_listener;
@property(retain, nonatomic) NSArray *mixList; // @synthesize mixList=_mixList;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) unsigned char priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(nonatomic) int scene; // @synthesize scene=_scene;
- (id)description;
- (id)initWithScene:(int)arg1 groupName:(id)arg2 identifier:(id)arg3;

@end

