//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface QDataCacheWorldMap
{
    int _sceneType;
}

+ (_Bool)onReceivedSourceConfig:(id)arg1 isBingSource:(_Bool)arg2;
+ (void)clearCache;
@property(nonatomic) int sceneType; // @synthesize sceneType=_sceneType;
- (int)tileType;
- (id)initWithVersion:(id)arg1;

@end

