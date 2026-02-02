//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMImageLoaderReqContext, NSURL;

@interface MMWebImageRequest : NSObject
{
    _Bool _forceUpdate;
    _Bool _disableCacheWrite;
    _Bool _syncReadDiskCache;
    _Bool _onlyNeedData;
    NSURL *_url;
    long long _scene;
    NSURL *_customIdentifier;
    NSURL *_darkModeUrl;
    NSURL *_darkModeCustomIdentifier;
    MMImageLoaderReqContext *_context;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMImageLoaderReqContext *context; // @synthesize context=_context;
@property(nonatomic) _Bool onlyNeedData; // @synthesize onlyNeedData=_onlyNeedData;
@property(nonatomic) _Bool syncReadDiskCache; // @synthesize syncReadDiskCache=_syncReadDiskCache;
@property(nonatomic) _Bool disableCacheWrite; // @synthesize disableCacheWrite=_disableCacheWrite;
@property(nonatomic) _Bool forceUpdate; // @synthesize forceUpdate=_forceUpdate;
@property(retain, nonatomic) NSURL *darkModeCustomIdentifier; // @synthesize darkModeCustomIdentifier=_darkModeCustomIdentifier;
@property(retain, nonatomic) NSURL *darkModeUrl; // @synthesize darkModeUrl=_darkModeUrl;
@property(retain, nonatomic) NSURL *customIdentifier; // @synthesize customIdentifier=_customIdentifier;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)initWithString:(id)arg1 scene:(long long)arg2;
- (id)initWith:(id)arg1 scene:(long long)arg2;

@end

