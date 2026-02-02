//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface WCFinderLiveHomePageInitialParams : NSObject
{
    int _fromScene;
    unsigned long long _scene;
    NSString *_fromSceneStr;
    unsigned long long _relatedObjectId;
    NSData *_jumpNavliveBuffer;
    NSDictionary *_reportRefJson;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *reportRefJson; // @synthesize reportRefJson=_reportRefJson;
@property(retain, nonatomic) NSData *jumpNavliveBuffer; // @synthesize jumpNavliveBuffer=_jumpNavliveBuffer;
@property(nonatomic) unsigned long long relatedObjectId; // @synthesize relatedObjectId=_relatedObjectId;
@property(retain, nonatomic) NSString *fromSceneStr; // @synthesize fromSceneStr=_fromSceneStr;
@property(nonatomic) int fromScene; // @synthesize fromScene=_fromScene;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (id)prefetchL2CacheKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

