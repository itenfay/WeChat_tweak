//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface MMWebOptimPrefetchDomainInfo
{
    unsigned int _openType;
    NSString *_domain;
    NSMutableDictionary *_dicResInfo;
}

+ (void)initialize;
+ (void)PBArrayAdd_dicResInfo;
+ (void)PBArrayAdd_domain;
- (void).cxx_destruct;
@property(nonatomic) unsigned int openType; // @synthesize openType=_openType;
@property(retain, nonatomic) NSMutableDictionary *dicResInfo; // @synthesize dicResInfo=_dicResInfo;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

