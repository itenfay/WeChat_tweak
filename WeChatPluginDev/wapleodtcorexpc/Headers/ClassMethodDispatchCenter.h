//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface ClassMethodDispatchCenter
{
    NSMutableDictionary *m_dictClsMethodObservers;
    NSMutableDictionary *m_dictClsMethodKeyObservers;
}

- (void).cxx_destruct;
- (Class)getClsMethodKeyObserver:(id)arg1 withKey:(id)arg2;
- (id)getClsMethodObservers:(id)arg1 selector:(SEL)arg2;
- (void)unregisterClsMethodKeyObserver:(Class)arg1 onProtocol:(id)arg2 withKey:(id)arg3;
- (void)unregisterClsMethodObserver:(Class)arg1 onProtocol:(id)arg2;
- (void)registerClsMethodKeyObserver:(Class)arg1 onProtocol:(id)arg2 withKey:(id)arg3;
- (void)registerClsMethodObserver:(Class)arg1 onProtocol:(id)arg2;
- (void)addObserver:(Class)arg1 toDict:(id)arg2 methods:(struct objc_method_description *)arg3 methodCnt:(unsigned int)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

