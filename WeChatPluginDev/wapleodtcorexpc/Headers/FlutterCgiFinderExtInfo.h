//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSNumber;

@interface FlutterCgiFinderExtInfo : NSObject
{
    _Bool _useSessionBuffer;
    long long _finderBaseRequestIndex;
    NSArray *_feedIdList;
    NSNumber *_scene;
    NSNumber *_enterScene;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithFinderBaseRequestIndex:(long long)arg1 feedIdList:(id)arg2 scene:(id)arg3 enterScene:(id)arg4 useSessionBuffer:(_Bool)arg5;
- (void).cxx_destruct;
@property(nonatomic) _Bool useSessionBuffer; // @synthesize useSessionBuffer=_useSessionBuffer;
@property(retain, nonatomic) NSNumber *enterScene; // @synthesize enterScene=_enterScene;
@property(retain, nonatomic) NSNumber *scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSArray *feedIdList; // @synthesize feedIdList=_feedIdList;
@property(nonatomic) long long finderBaseRequestIndex; // @synthesize finderBaseRequestIndex=_finderBaseRequestIndex;
- (id)toList;

@end

