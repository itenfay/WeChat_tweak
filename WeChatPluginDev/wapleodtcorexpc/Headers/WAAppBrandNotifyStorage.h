//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WAAppBrandNotifyStorage : NSObject
{
    NSMutableDictionary *_dicAppNotify;
}

+ (_Bool)saveStorage:(id)arg1 toPath:(id)arg2;
+ (id)loadStorageFromPath:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_dicAppNotify;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicAppNotify; // @synthesize dicAppNotify=_dicAppNotify;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

