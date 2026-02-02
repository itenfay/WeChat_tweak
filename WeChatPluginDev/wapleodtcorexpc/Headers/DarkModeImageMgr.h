//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMapTable, NSString;

@interface DarkModeImageMgr
{
    NSMapTable *_darkToLightMapTable;
    NSMapTable *_lightToDarkMapTable;
    struct _opaque_pthread_rwlock_t _lock;
}

- (void).cxx_destruct;
@property(nonatomic) struct _opaque_pthread_rwlock_t lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMapTable *lightToDarkMapTable; // @synthesize lightToDarkMapTable=_lightToDarkMapTable;
@property(retain, nonatomic) NSMapTable *darkToLightMapTable; // @synthesize darkToLightMapTable=_darkToLightMapTable;
- (_Bool)hasRegistedImage:(id)arg1;
- (id)registerPairWithLightImage:(id)arg1 darkImage:(id)arg2;
- (id)lightModeImageForImage:(id)arg1;
- (id)darkModeImageForImage:(id)arg1;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

