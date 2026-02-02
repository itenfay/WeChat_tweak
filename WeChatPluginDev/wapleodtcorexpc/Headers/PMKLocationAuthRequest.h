//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CLLocationManager, NSString;

@interface PMKLocationAuthRequest : NSObject
{
    int _initialAuthorizationState;
    CDUnknownBlockType _resolve;
    id _retainCycle;
    CLLocationManager *_manager;
}

- (void).cxx_destruct;
@property(nonatomic) int initialAuthorizationState; // @synthesize initialAuthorizationState=_initialAuthorizationState;
@property(retain, nonatomic) CLLocationManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) id retainCycle; // @synthesize retainCycle=_retainCycle;
@property(copy, nonatomic) CDUnknownBlockType resolve; // @synthesize resolve=_resolve;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (id)pRequestWhenInUseAuthorization;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

