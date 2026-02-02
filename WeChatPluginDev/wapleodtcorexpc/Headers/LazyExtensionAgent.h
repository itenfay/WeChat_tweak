//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface LazyExtensionAgent
{
    NSMutableDictionary *m_dicExtensions;
    NSMutableDictionary *m_dicKeyExtensions;
}

- (void).cxx_destruct;
- (void)ensureLazyListenerInitedForExtension:(id)arg1 withSelector:(SEL)arg2 forKey:(id)arg3 inContext:(id)arg4;
- (void)registerLazyListener:(Class)arg1 onExtension:(id)arg2 forKey:(id)arg3;
- (void)ensureLazyListenerInitedForExtension:(id)arg1 withSelector:(SEL)arg2 inContext:(id)arg3;
- (void)precreateService:(Class)arg1 inContext:(id)arg2;
- (void)registerLazyListener:(Class)arg1 onExtension:(id)arg2;
- (void)addListener:(Class)arg1 toDic:(id)arg2 forMethods:(struct objc_method_description *)arg3 methodCount:(unsigned int)arg4;
- (_Bool)returnAsRawService;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

