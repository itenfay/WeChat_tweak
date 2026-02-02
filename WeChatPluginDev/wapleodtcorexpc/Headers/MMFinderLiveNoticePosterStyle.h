//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveNoticePosterStyle : NSObject
{
    _Bool _isFallback;
    NSString *_styleId;
    unsigned long long _backgroundType;
    NSString *_backgroundColorHexCode;
    NSString *_backgroundImageUri;
    NSString *_foregroundColorHexCode;
    NSString *_brandLogoColorHexCode;
    NSString *_verificationIconUri;
}

+ (id)fallbackStyle;
+ (id)styleWithBackendModel:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isFallback; // @synthesize isFallback=_isFallback;
@property(retain, nonatomic) NSString *verificationIconUri; // @synthesize verificationIconUri=_verificationIconUri;
@property(retain, nonatomic) NSString *brandLogoColorHexCode; // @synthesize brandLogoColorHexCode=_brandLogoColorHexCode;
@property(retain, nonatomic) NSString *foregroundColorHexCode; // @synthesize foregroundColorHexCode=_foregroundColorHexCode;
@property(retain, nonatomic) NSString *backgroundImageUri; // @synthesize backgroundImageUri=_backgroundImageUri;
@property(retain, nonatomic) NSString *backgroundColorHexCode; // @synthesize backgroundColorHexCode=_backgroundColorHexCode;
@property(nonatomic) unsigned long long backgroundType; // @synthesize backgroundType=_backgroundType;
@property(retain, nonatomic) NSString *styleId; // @synthesize styleId=_styleId;

@end

