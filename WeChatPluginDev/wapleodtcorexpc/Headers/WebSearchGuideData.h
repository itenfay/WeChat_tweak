//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WebSearchGuideData
{
    _Bool _isPreloadData;
    unsigned long long _expiredTime;
    NSString *_json;
    NSString *_searchID;
}

+ (void)initialize;
+ (void)PBArrayAdd_isPreloadData;
+ (void)PBArrayAdd_searchID;
+ (void)PBArrayAdd_json;
+ (void)PBArrayAdd_expiredTime;
- (void).cxx_destruct;
@property(nonatomic) _Bool isPreloadData; // @synthesize isPreloadData=_isPreloadData;
@property(retain, nonatomic) NSString *searchID; // @synthesize searchID=_searchID;
@property(retain, nonatomic) NSString *json; // @synthesize json=_json;
@property(nonatomic) unsigned long long expiredTime; // @synthesize expiredTime=_expiredTime;
- (_Bool)isValid;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

