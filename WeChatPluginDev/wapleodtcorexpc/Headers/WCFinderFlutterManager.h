//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderFlutterManager
{
}

- (id)createNPSFlutterVC:(id)arg1;
- (id)createFlutterWeUIDemoViewController;
- (id)createFlutterViewControllerWithTag:(id)arg1 moduleName:(id)arg2 plugins:(id)arg3 arguments:(id)arg4;
- (id)createFlutterViewControllerWithTag:(id)arg1 plugins:(id)arg2 arguments:(id)arg3;
- (id)createFlutterViewControllerWithTag:(id)arg1;
- (id)createFlutterInstance:(id)arg1 moduleName:(id)arg2 plugins:(id)arg3 arguments:(id)arg4;
- (id)createFlutterInstance:(id)arg1;
- (id)createFlutterInstance;
- (void)preloadFlutterEngine;
- (id)init;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

