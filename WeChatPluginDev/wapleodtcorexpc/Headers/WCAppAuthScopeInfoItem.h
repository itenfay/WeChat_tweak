//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCAppAuthScopeInfoItem
{
    _Bool _isUserEnable;
    unsigned int _state;
    NSString *_scope;
    NSString *_scopeDesc;
}

+ (void)initialize;
+ (void)PBArrayAdd_isUserEnable;
+ (void)PBArrayAdd_state;
+ (void)PBArrayAdd_scopeDesc;
+ (void)PBArrayAdd_scope;
- (void).cxx_destruct;
@property(nonatomic) _Bool isUserEnable; // @synthesize isUserEnable=_isUserEnable;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *scopeDesc; // @synthesize scopeDesc=_scopeDesc;
@property(copy, nonatomic) NSString *scope; // @synthesize scope=_scope;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

