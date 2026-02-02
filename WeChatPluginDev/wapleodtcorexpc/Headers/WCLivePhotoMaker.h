//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCLivePhotoMaker : NSObject
{
    _Bool _preferedHEVC;
    long long _stillImageTimeMs;
    long long _imageMetadataCostTimeMs;
    long long _videoMetadataCostTimeMs;
}

+ (id)generateImagePathWithRandom;
+ (_Bool)saveToJPEGWithImage:(id)arg1 imagePath:(id)arg2;
+ (void)makeLivePhotoByImagePath:(id)arg1 videoPath:(id)arg2 preferedHEVC:(_Bool)arg3 stillImageTimeMs:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
@property long long videoMetadataCostTimeMs; // @synthesize videoMetadataCostTimeMs=_videoMetadataCostTimeMs;
@property long long imageMetadataCostTimeMs; // @synthesize imageMetadataCostTimeMs=_imageMetadataCostTimeMs;
@property(nonatomic) long long stillImageTimeMs; // @synthesize stillImageTimeMs=_stillImageTimeMs;
@property(nonatomic) _Bool preferedHEVC; // @synthesize preferedHEVC=_preferedHEVC;
- (void)makeLivePhotoWithImagePath:(id)arg1 videoPath:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

