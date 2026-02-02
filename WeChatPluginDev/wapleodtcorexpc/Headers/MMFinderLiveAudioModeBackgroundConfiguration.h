//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface MMFinderLiveAudioModeBackgroundConfiguration : NSObject
{
    unsigned int _backgroundType;
    UIImage *_localStaticImage;
    NSString *_remoteStaticImageUri;
    NSString *_localAnimatedVideoPath;
    NSString *_remoteAnimatedVideoUri;
    UIImage *_localAnimatedFallbackImage;
    NSString *_remoteAnimatedFallbackImageUri;
}

+ (id)configurationWithLiveRoomImg:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *remoteAnimatedFallbackImageUri; // @synthesize remoteAnimatedFallbackImageUri=_remoteAnimatedFallbackImageUri;
@property(retain, nonatomic) UIImage *localAnimatedFallbackImage; // @synthesize localAnimatedFallbackImage=_localAnimatedFallbackImage;
@property(retain, nonatomic) NSString *remoteAnimatedVideoUri; // @synthesize remoteAnimatedVideoUri=_remoteAnimatedVideoUri;
@property(retain, nonatomic) NSString *localAnimatedVideoPath; // @synthesize localAnimatedVideoPath=_localAnimatedVideoPath;
@property(retain, nonatomic) NSString *remoteStaticImageUri; // @synthesize remoteStaticImageUri=_remoteStaticImageUri;
@property(retain, nonatomic) UIImage *localStaticImage; // @synthesize localStaticImage=_localStaticImage;
@property(nonatomic) unsigned int backgroundType; // @synthesize backgroundType=_backgroundType;
- (id)equivalentLiveRoomImg;
- (_Bool)isEqualToOtherAudioModeBackgroundConfig:(id)arg1;
@property(readonly, nonatomic) NSString *preferredStaticImageUri;
@property(readonly, nonatomic) _Bool valid;

@end

