//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WebviewAuthorizationCache : NSObject
{
    NSMutableDictionary *_dicScope2ApiInfo;
}

- (void).cxx_destruct;
- (_Bool)isAuthorizedApi:(id)arg1 inScope:(id)arg2;
- (_Bool)isExistAuthInfoForApi:(id)arg1 inScope:(id)arg2;
- (_Bool)isAuthorizedScope:(id)arg1;
- (_Bool)isNOUseScope:(id)arg1;
- (_Bool)isExistAuthInfoForScope:(id)arg1;
- (id)getScopeInfoForScope:(id)arg1;
- (void)removeScopeInfoForScope:(id)arg1;
- (void)addScopeInfo:(id)arg1 forScope:(id)arg2;
- (void)addScopeInfoList:(id)arg1;
- (id)init;

@end

