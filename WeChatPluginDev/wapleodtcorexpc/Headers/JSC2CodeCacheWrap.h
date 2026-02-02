//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, NSURL;
@protocol IJSC2CodeCacheSource;

@interface JSC2CodeCacheWrap : NSObject
{
    NSString *_source;
    NSURL *_sourceURL;
    id <IJSC2CodeCacheSource> _codeCacheSource;
    NSString *_name;
    NSURL *_cachePathURL;
    unsigned long long _version;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(retain, nonatomic) NSURL *cachePathURL; // @synthesize cachePathURL=_cachePathURL;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) id <IJSC2CodeCacheSource> codeCacheSource; // @synthesize codeCacheSource=_codeCacheSource;
@property(retain, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
- (_Bool)isEmpty;

@end

