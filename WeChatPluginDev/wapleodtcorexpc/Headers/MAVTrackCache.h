//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MAVTrackCache : NSObject
{
    NSMutableDictionary *_imageCache;
    NSMutableDictionary *_resourceCache;
    CDStruct_1b6d18a9 _imageDuration;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *resourceCache; // @synthesize resourceCache=_resourceCache;
@property(retain, nonatomic) NSMutableDictionary *imageCache; // @synthesize imageCache=_imageCache;
@property(nonatomic) CDStruct_1b6d18a9 imageDuration; // @synthesize imageDuration=_imageDuration;
- (void)didReceiveMemoryWarning:(id)arg1;
- (struct CGImage *)createRescaleImage:(id)arg1;
- (void)removeAllObjects;
- (void)remove:(id)arg1;
- (struct CGImage *)getImageRef:(id)arg1;
- (void)setResource:(id)arg1 withTrack:(id)arg2;
- (id)getResource:(id)arg1;
- (void)initCache;
- (id)init:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

