//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary;

@interface OpenImResourceStorageCacheInfo
{
    NSMutableDictionary *_dictAppId2ContactResources;
    NSMutableDictionary *_dictAppId2LastUpdateTime;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dictAppId2LastUpdateTime; // @synthesize dictAppId2LastUpdateTime=_dictAppId2LastUpdateTime;
@property(retain, nonatomic) NSMutableDictionary *dictAppId2ContactResources; // @synthesize dictAppId2ContactResources=_dictAppId2ContactResources;
- (id)init;

@end

