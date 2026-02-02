//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface WCAppAuthAuthInfo
{
    unsigned int _allScopeState;
    unsigned int _isShowAllscope;
    NSMutableArray *_scopes;
}

+ (void)initialize;
+ (void)PBArrayAdd_isShowAllscope;
+ (void)PBArrayAdd_allScopeState;
+ (void)PBArrayAdd_scopes;
- (void).cxx_destruct;
@property(nonatomic) unsigned int isShowAllscope; // @synthesize isShowAllscope=_isShowAllscope;
@property(nonatomic) unsigned int allScopeState; // @synthesize allScopeState=_allScopeState;
@property(retain, nonatomic) NSMutableArray *scopes; // @synthesize scopes=_scopes;
- (id)getScopeItemByIdentifier:(id)arg1;
- (void)updateScope:(id)arg1 state:(unsigned int)arg2;
- (id)getScopes;
- (id)init;
- (id)initWithAuthAppPBData:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

