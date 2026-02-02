//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveKtvThemeResource, NSArray, NSString, UIColor;

@interface MMLiveKtvThemeItem : NSObject
{
    NSString *_themeId;
    NSString *_previewThumbnailUri;
    UIColor *_colorA;
    UIColor *_colorB;
    MMLiveKtvThemeResource *_ambientAnimation;
    MMLiveKtvThemeResource *_ambientAnimationFallbackImage;
    MMLiveKtvThemeResource *_bottomButtonIcon;
    MMLiveKtvThemeResource *_centerIcon;
    MMLiveKtvThemeResource *_goodAnimation;
    MMLiveKtvThemeResource *_perfectAnimation;
    NSArray *_allResources;
}

+ (id)themeItemWithResource:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *allResources; // @synthesize allResources=_allResources;
@property(retain, nonatomic) MMLiveKtvThemeResource *perfectAnimation; // @synthesize perfectAnimation=_perfectAnimation;
@property(retain, nonatomic) MMLiveKtvThemeResource *goodAnimation; // @synthesize goodAnimation=_goodAnimation;
@property(retain, nonatomic) MMLiveKtvThemeResource *centerIcon; // @synthesize centerIcon=_centerIcon;
@property(retain, nonatomic) MMLiveKtvThemeResource *bottomButtonIcon; // @synthesize bottomButtonIcon=_bottomButtonIcon;
@property(retain, nonatomic) MMLiveKtvThemeResource *ambientAnimationFallbackImage; // @synthesize ambientAnimationFallbackImage=_ambientAnimationFallbackImage;
@property(retain, nonatomic) MMLiveKtvThemeResource *ambientAnimation; // @synthesize ambientAnimation=_ambientAnimation;
@property(retain, nonatomic) UIColor *colorB; // @synthesize colorB=_colorB;
@property(retain, nonatomic) UIColor *colorA; // @synthesize colorA=_colorA;
@property(retain, nonatomic) NSString *previewThumbnailUri; // @synthesize previewThumbnailUri=_previewThumbnailUri;
@property(retain, nonatomic) NSString *themeId; // @synthesize themeId=_themeId;
- (id)createResourcesPinningToken;

@end

