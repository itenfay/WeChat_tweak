//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface MMWebOptimPrefetchResInfo
{
    unsigned int _opType;
    NSString *_domain;
    NSString *_path;
    NSString *_manifestUrl;
    NSString *_referDomain;
    NSData *_hashId;
    NSString *_appId;
    NSString *_userName;
    NSData *_businessData;
}

+ (void)initialize;
+ (void)PBArrayAdd_businessData;
+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_hashId;
+ (void)PBArrayAdd_referDomain;
+ (void)PBArrayAdd_manifestUrl;
+ (void)PBArrayAdd_path;
+ (void)PBArrayAdd_domain;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *businessData; // @synthesize businessData=_businessData;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) unsigned int opType; // @synthesize opType=_opType;
@property(retain, nonatomic) NSData *hashId; // @synthesize hashId=_hashId;
@property(copy, nonatomic) NSString *referDomain; // @synthesize referDomain=_referDomain;
@property(copy, nonatomic) NSString *manifestUrl; // @synthesize manifestUrl=_manifestUrl;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

