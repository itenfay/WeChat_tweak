//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface WCAdTagNode : NSObject
{
    NSString *_tagName;
    NSString *_iconForDarkMode;
    NSString *_iconForLightMode;
    NSString *_tagLightBgColor;
    NSString *_tagLightNameColor;
    NSString *_tagDarkBgColor;
    NSString *_tagDarkNameColor;
    UIImage *_darkIcon;
    UIImage *_lightIcon;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *lightIcon; // @synthesize lightIcon=_lightIcon;
@property(retain, nonatomic) UIImage *darkIcon; // @synthesize darkIcon=_darkIcon;
@property(retain, nonatomic) NSString *tagDarkNameColor; // @synthesize tagDarkNameColor=_tagDarkNameColor;
@property(retain, nonatomic) NSString *tagDarkBgColor; // @synthesize tagDarkBgColor=_tagDarkBgColor;
@property(retain, nonatomic) NSString *tagLightNameColor; // @synthesize tagLightNameColor=_tagLightNameColor;
@property(retain, nonatomic) NSString *tagLightBgColor; // @synthesize tagLightBgColor=_tagLightBgColor;
@property(retain, nonatomic) NSString *iconForLightMode; // @synthesize iconForLightMode=_iconForLightMode;
@property(retain, nonatomic) NSString *iconForDarkMode; // @synthesize iconForDarkMode=_iconForDarkMode;
@property(retain, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
- (_Bool)hasIcon;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

