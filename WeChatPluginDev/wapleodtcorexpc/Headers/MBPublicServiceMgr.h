//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MagicBrushService, NSMapTable, NSString;

@interface MBPublicServiceMgr
{
    NSMapTable *_extServicesMap;
    MagicBrushService *_magicbrush;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MagicBrushService *magicbrush; // @synthesize magicbrush=_magicbrush;
@property(retain, nonatomic) NSMapTable *extServicesMap; // @synthesize extServicesMap=_extServicesMap;
- (void)forceStop:(id)arg1 withAllConnectedBizes:(_Bool)arg2;
- (id)providePublicServiceObject:(id)arg1;
- (void)onServiceMemoryWarning;
- (void)onServiceTerminate;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

