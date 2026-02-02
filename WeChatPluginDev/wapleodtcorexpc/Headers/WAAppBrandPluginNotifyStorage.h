//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WAAppBrandPluginNotifyStorage : NSObject
{
    NSMutableDictionary *_dicPluginNotify;
}

+ (_Bool)saveStorage:(id)arg1 toPath:(id)arg2;
+ (id)loadStorageFromPath:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_dicPluginNotify;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicPluginNotify; // @synthesize dicPluginNotify=_dicPluginNotify;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

