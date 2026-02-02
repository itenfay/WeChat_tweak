//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAPreFetchInfo
{
    unsigned int _scene;
    unsigned int _lastModifyTime;
    NSString *_userName;
    NSString *_path;
    NSString *_query;
    NSString *_fetchData;
    unsigned long long _lastModifyTimeMs;
}

+ (void)initialize;
+ (void)PBArrayAdd_lastModifyTimeMs;
+ (void)PBArrayAdd_lastModifyTime;
+ (void)PBArrayAdd_fetchData;
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_query;
+ (void)PBArrayAdd_path;
+ (void)PBArrayAdd_userName;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long lastModifyTimeMs; // @synthesize lastModifyTimeMs=_lastModifyTimeMs;
@property(nonatomic) unsigned int lastModifyTime; // @synthesize lastModifyTime=_lastModifyTime;
@property(retain, nonatomic) NSString *fetchData; // @synthesize fetchData=_fetchData;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

