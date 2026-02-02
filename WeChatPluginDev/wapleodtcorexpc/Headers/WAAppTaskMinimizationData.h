//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAAppTaskMinimizationData
{
    _Bool _isGameAPP;
    NSString *_username;
    unsigned long long _debugMode;
    NSString *_appEntryPage;
    NSString *_appID;
}

+ (void)initialize;
+ (void)PBArrayAdd_appID;
+ (void)PBArrayAdd_appEntryPage;
+ (void)PBArrayAdd_isGameAPP;
+ (void)PBArrayAdd_debugMode;
+ (void)PBArrayAdd_username;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(copy, nonatomic) NSString *appEntryPage; // @synthesize appEntryPage=_appEntryPage;
@property(nonatomic) _Bool isGameAPP; // @synthesize isGameAPP=_isGameAPP;
@property(nonatomic) unsigned long long debugMode; // @synthesize debugMode=_debugMode;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

