//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface MMFinderLiveAudioModeBackgroundUploadModel : NSObject
{
    _Bool _uploaded;
    unsigned int _backgroundType;
    NSData *_image;
    NSString *_video;
    NSString *_imageUri;
    NSString *_videoUri;
}

+ (id)animatedBackgroundUploadModelWithVideoPath:(id)arg1 fallbackImageData:(id)arg2;
+ (id)staticBackgroundUploadModelWithImageData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *videoUri; // @synthesize videoUri=_videoUri;
@property(retain, nonatomic) NSString *imageUri; // @synthesize imageUri=_imageUri;
@property(retain, nonatomic) NSString *video; // @synthesize video=_video;
@property(retain, nonatomic) NSData *image; // @synthesize image=_image;
@property(nonatomic) _Bool uploaded; // @synthesize uploaded=_uploaded;
@property(nonatomic) unsigned int backgroundType; // @synthesize backgroundType=_backgroundType;
- (_Bool)validPostUpload;
- (_Bool)validPreUpload;
- (id)backgroundConfiguration;
- (void)updateUploadedAnimatedVideoUri:(id)arg1 fallbackImageUri:(id)arg2;
- (void)updateUploadedStaticImageUri:(id)arg1;
@property(readonly, nonatomic) _Bool valid;

@end

