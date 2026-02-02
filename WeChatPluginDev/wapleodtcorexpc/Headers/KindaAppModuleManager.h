//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface KindaAppModuleManager : NSObject
{
    NSMutableArray *moduleList;
}

- (void).cxx_destruct;
- (void)onAppCreate;
- (void)initAllModule;
- (void)registerModule:(id)arg1;
- (id)init;

@end

