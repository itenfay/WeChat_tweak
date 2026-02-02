//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface MMTemplateMsgScopeCache
{
    _Bool _isGlobalRecv;
    _Bool _hasSettingEntry;
    NSString *_userName;
    NSMutableArray *_scopeList;
}

+ (void)initialize;
+ (void)PBArrayAdd_hasSettingEntry;
+ (void)PBArrayAdd_scopeList;
+ (void)PBArrayAdd_isGlobalRecv;
+ (void)PBArrayAdd_userName;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasSettingEntry; // @synthesize hasSettingEntry=_hasSettingEntry;
@property(retain, nonatomic) NSMutableArray *scopeList; // @synthesize scopeList=_scopeList;
@property(nonatomic) _Bool isGlobalRecv; // @synthesize isGlobalRecv=_isGlobalRecv;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (id)showInSettingScopeList;
- (id)getScopeItemWithScopeID:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

