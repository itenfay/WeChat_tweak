//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiteAppViewController;
@protocol WCFinderGlobalStore;

@interface WCFinderGlobalStoreHandler
{
    MMLiteAppViewController *_liteAppVC;
    id <WCFinderGlobalStore> _currentStore;
}

+ (void)registerHandler:(Class)arg1;
+ (id)handlerMap;
- (void).cxx_destruct;
@property(retain, nonatomic) id <WCFinderGlobalStore> currentStore; // @synthesize currentStore=_currentStore;
@property(nonatomic) __weak MMLiteAppViewController *liteAppVC; // @synthesize liteAppVC=_liteAppVC;
- (id)handleForActionName:(id)arg1;
- (_Bool)onDispatch:(id)arg1 insId:(unsigned long long)arg2 actionName:(id)arg3 data:(id)arg4 callbackId:(int)arg5;
- (id)init;

@end

