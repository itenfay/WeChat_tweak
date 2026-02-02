//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TPIOSAudioRouteManagerImpl : NSObject
{
    struct set<ITPAudioRouteManagerCallback *, std::less<ITPAudioRouteManagerCallback *>, std::allocator<ITPAudioRouteManagerCallback *>> _callbacks;
    deque_19df0b0c _currentRoutes;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateCurrentRoute:(id)arg1;
- (void)onAudioSessionRouteChange:(id)arg1;
- (void)unRegisterObserver;
- (void)registerObserver;
- (void)initCurrentRoutes;
- (void)updateCurrentRoutesFromOutputs:(id)arg1;
- (int)getRouteTypeFromAVAudioSessionPort:(id)arg1;
- (_Bool)isRouteTypeOn:(int)arg1;
- (deque_19df0b0c)getCurrentRoutes;
- (void)removeCallback:(struct ITPAudioRouteManagerCallback *)arg1;
- (void)addCallback:(struct ITPAudioRouteManagerCallback *)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

