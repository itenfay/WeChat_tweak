//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderNavLiveStreamPrefetchExtraData : NSObject
{
    unsigned long long _scene;
}

+ (void)initialize;
+ (void)PBArrayAdd_scene;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (_Bool)isEqual:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

