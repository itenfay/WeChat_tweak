//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface KindaModule : NSObject
{
    NSMapTable *viewModuleMap;
    NSMapTable *nativeModuleMap;
}

- (void).cxx_destruct;
- (void)initModuleInner;
- (void)registerNativeModule:(id)arg1 _class:(Class)arg2;
- (void)registerView:(id)arg1 _class:(Class)arg2;
- (void)onAppCreate;
- (void)configureModule;
- (id)init;

@end

