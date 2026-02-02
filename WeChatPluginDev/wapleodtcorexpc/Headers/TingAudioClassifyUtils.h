//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TingAudioClassifyUtils : NSObject
{
}

+ (void)commReport:(unsigned int)arg1 extraData:(id)arg2;
+ (void)commReport:(unsigned int)arg1;
+ (id)genReportExtraData:(id)arg1;
+ (id)modelVersion;
+ (id)_cacheKeyForPath:(id)arg1 modelVersion:(id)arg2;
+ (void)_writeCacheType:(unsigned int)arg1 forRelativePath:(id)arg2;
+ (unsigned int)_readCacheType:(id)arg1;
+ (id)classifyCacheMMKV;
+ (id)crashProtectMMKV;
+ (_Bool)_safeCall:(CDUnknownBlockType)arg1;
+ (unsigned int)_realRecognizeAudio:(id)arg1 relativePath:(id)arg2;
+ (unsigned int)recognizeAudio:(id)arg1 relativePath:(id)arg2;

@end

