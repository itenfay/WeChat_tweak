//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TPProxyServiceConfig : NSObject
{
    _Bool _vodCachedEnable;
    _Bool _reportEnable;
    int _serviceType;
    NSString *_cacheDir;
    NSString *_dataDir;
    long long _maxUseMemoryMB;
    long long _maxUseStorageMB;
    NSString *_initConfig;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *initConfig; // @synthesize initConfig=_initConfig;
@property(nonatomic) _Bool reportEnable; // @synthesize reportEnable=_reportEnable;
@property(nonatomic) _Bool vodCachedEnable; // @synthesize vodCachedEnable=_vodCachedEnable;
@property(nonatomic) long long maxUseStorageMB; // @synthesize maxUseStorageMB=_maxUseStorageMB;
@property(nonatomic) long long maxUseMemoryMB; // @synthesize maxUseMemoryMB=_maxUseMemoryMB;
@property(retain, nonatomic) NSString *dataDir; // @synthesize dataDir=_dataDir;
@property(retain, nonatomic) NSString *cacheDir; // @synthesize cacheDir=_cacheDir;
@property(nonatomic) int serviceType; // @synthesize serviceType=_serviceType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

