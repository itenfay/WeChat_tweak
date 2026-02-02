//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QVisCacheManager : NSObject
{
    NSString *_configPath;
    NSString *_key;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) NSString *configPath; // @synthesize configPath=_configPath;
- (id)getModelLayerCachePath:(id)arg1;
- (void)getLayerCacheDataVerAndSytleVer:(id)arg1 verStruct:(CDStruct_9e61a806 *)arg2;
- (id)getVisLayerFileName:(id)arg1;
- (id)getLayerCachePath:(id)arg1;
- (void)createInfoFolder:(id)arg1;
- (id)createCommonVector:(id)arg1;
- (id)createIdentifier;
- (_Bool)validateCacheConfigVersion:(id)arg1 dataVer:(id)arg2 layer:(id)arg3;
- (id)getModelLayerDataID:(id)arg1;
- (id)extractModelIDFromDictionary:(id)arg1;
- (void)saveModelLayerData:(id)arg1 layer:(id)arg2;
- (id)getLayersDictionaryFromConfigData:(id)arg1;
- (void)saveVisualLayerConfig:(id)arg1;
- (id)getLayerCacheData:(id)arg1;
- (void)writeData:(id)arg1 layer:(id)arg2;
- (void)saveLocalData:(id)arg1 layer:(id)arg2;
- (_Bool)checkIsLayerAuthen:(id)arg1;

@end

