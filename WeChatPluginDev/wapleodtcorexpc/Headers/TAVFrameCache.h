//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_semaphore;

@interface TAVFrameCache : NSObject
{
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_semaphore> *_dataUpdateSemaphore;
}

+ (id)shared;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *dataUpdateSemaphore; // @synthesize dataUpdateSemaphore=_dataUpdateSemaphore;
@property(retain, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
- (void)cleanCache;
- (id)cacheKeyForSize:(struct CGSize)arg1;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)savePixelBufferPool:(struct __CVPixelBufferPool *)arg1 forKey:(id)arg2;
- (struct __CVPixelBufferPool *)pixelBufferPoolWithSize:(struct CGSize)arg1;
- (struct __CVBuffer *)makePixelBufferWithSize:(struct CGSize)arg1;
- (id)init;
- (void)dealloc;

@end

