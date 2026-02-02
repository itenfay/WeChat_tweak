//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdSphereCardInfo : NSObject
{
    unsigned int _displayType;
    unsigned int _markMaxAlpha;
    unsigned int _titlePosition;
    NSString *_title;
    NSString *_descriptionText;
    unsigned long long _gestureDelayTime;
    NSString *_sphereThumbUrl;
    NSString *_sphereImageUrl;
    double _sphereImageWidth;
    double _sphereImageHeight;
    NSString *_bgColor;
    double _bgColorAlpha;
}

- (void).cxx_destruct;
@property(nonatomic) double bgColorAlpha; // @synthesize bgColorAlpha=_bgColorAlpha;
@property(retain, nonatomic) NSString *bgColor; // @synthesize bgColor=_bgColor;
@property(nonatomic) double sphereImageHeight; // @synthesize sphereImageHeight=_sphereImageHeight;
@property(nonatomic) double sphereImageWidth; // @synthesize sphereImageWidth=_sphereImageWidth;
@property(retain, nonatomic) NSString *sphereImageUrl; // @synthesize sphereImageUrl=_sphereImageUrl;
@property(retain, nonatomic) NSString *sphereThumbUrl; // @synthesize sphereThumbUrl=_sphereThumbUrl;
@property(nonatomic) unsigned long long gestureDelayTime; // @synthesize gestureDelayTime=_gestureDelayTime;
@property(nonatomic) unsigned int titlePosition; // @synthesize titlePosition=_titlePosition;
@property(nonatomic) unsigned int markMaxAlpha; // @synthesize markMaxAlpha=_markMaxAlpha;
@property(retain, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned int displayType; // @synthesize displayType=_displayType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

