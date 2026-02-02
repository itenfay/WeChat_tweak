//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMWebOptimizationRedirectInfo
{
    unsigned int _maxCacheTime;
    unsigned int _lastModifiedTime;
    NSString *_identifier;
    NSString *_referUrl;
    NSString *_redirectUrl;
}

+ (void)initialize;
+ (void)PBArrayAdd_lastModifiedTime;
+ (void)PBArrayAdd_maxCacheTime;
+ (void)PBArrayAdd_redirectUrl;
+ (void)PBArrayAdd_referUrl;
+ (void)PBArrayAdd_identifier;
- (void).cxx_destruct;
@property(nonatomic) unsigned int lastModifiedTime; // @synthesize lastModifiedTime=_lastModifiedTime;
@property(nonatomic) unsigned int maxCacheTime; // @synthesize maxCacheTime=_maxCacheTime;
@property(copy, nonatomic) NSString *redirectUrl; // @synthesize redirectUrl=_redirectUrl;
@property(copy, nonatomic) NSString *referUrl; // @synthesize referUrl=_referUrl;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *description;
- (_Bool)isValid;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

