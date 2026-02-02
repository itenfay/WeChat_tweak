//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TAVPixelBufferCache : NSObject
{
    NSMutableDictionary *_pixelBufferCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *pixelBufferCache; // @synthesize pixelBufferCache=_pixelBufferCache;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)cleanCache;
- (struct __CVBuffer *)cachedPixelBufferWithKey:(id)arg1;
- (void)cachePixelBuffer:(struct __CVBuffer *)arg1 withKey:(id)arg2;
- (id)init;
- (void)dealloc;

@end

