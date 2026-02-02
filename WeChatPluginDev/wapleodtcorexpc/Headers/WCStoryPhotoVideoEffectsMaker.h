//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCStoryPhotoVideoEffectsMaker : NSObject
{
}

+ (void)addMultiPhotoAnimationToLayer:(id)arg1 blurImageArray:(id)arg2 size:(struct CGSize)arg3;
+ (void)addSinglePhotoAnimationToLayer:(id)arg1 blurImage:(id)arg2 size:(struct CGSize)arg3;
+ (id)createPhotoVideoAnimationLayerWithPhotos:(id)arg1 size:(struct CGSize)arg2 videoLayer:(id)arg3;
+ (id)createSinglePhotoAnimationGroup;
+ (id)createMultiPhotoAnimationGroupWithIndex:(long long)arg1;
+ (id)addBlurBackgroundWithPhotoArray:(id)arg1 targetSize:(struct CGSize)arg2;
+ (_Bool)deleteTempVideoWithPathString:(id)arg1;
+ (id)exportVideoPath;
+ (id)getTempBlackVideoPathString;
+ (struct CGSize)getVideoCreateSize;
+ (void)createEmptyVideo:(CDUnknownBlockType)arg1;
+ (_Bool)appendToAdapter:(id)arg1 pixelBuffer:(struct __CVBuffer *)arg2 atTime:(CDStruct_1b6d18a9)arg3 withInput:(id)arg4 withMovieWriter:(id)arg5;
+ (struct __CVBuffer *)pixelBufferFromCGImage:(struct CGImage *)arg1 size:(struct CGSize)arg2;
+ (void)createPhotoMovieWithPhotoArray:(id)arg1 complection:(CDUnknownBlockType)arg2;
+ (void)exportComposePhotoMovieWithPhotoArrayPhotoArray:(id)arg1 url:(id)arg2 complection:(CDUnknownBlockType)arg3;
+ (void)applyVideoEffectsToComposition:(id)arg1 photoArray:(id)arg2 size:(struct CGSize)arg3;

@end

