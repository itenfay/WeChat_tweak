//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface JSC2CodeCacheDetail : NSObject
{
    _Bool _injectUseCodeCache;
    unsigned int _codeCacheSizeInBytes;
    unsigned int _codeCacheVersion;
}

@property(nonatomic) unsigned int codeCacheVersion; // @synthesize codeCacheVersion=_codeCacheVersion;
@property(nonatomic) unsigned int codeCacheSizeInBytes; // @synthesize codeCacheSizeInBytes=_codeCacheSizeInBytes;
@property(nonatomic) _Bool injectUseCodeCache; // @synthesize injectUseCodeCache=_injectUseCodeCache;

@end

