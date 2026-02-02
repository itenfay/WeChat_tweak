//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAAppEntryPagePathInfo : NSObject
{
    NSString *_appid;
    NSString *_username;
    NSString *_entryPagePath;
}

+ (_Bool)save:(id)arg1 toPath:(id)arg2;
+ (id)loadFromPath:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_entryPagePath;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_appid;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *entryPagePath; // @synthesize entryPagePath=_entryPagePath;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

