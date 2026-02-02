//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WNBkgImageInfo : NSObject
{
    float _backgroundAlpha;
    float _fontAlpha;
    float _logoAlpha;
    int _colorType;
    NSString *_displayName;
    NSString *_backgroundColor;
    NSString *_fontColor;
    NSString *_logoColor;
}

+ (void)initialize;
+ (void)PBArrayAdd_colorType;
+ (void)PBArrayAdd_logoAlpha;
+ (void)PBArrayAdd_logoColor;
+ (void)PBArrayAdd_fontAlpha;
+ (void)PBArrayAdd_fontColor;
+ (void)PBArrayAdd_backgroundAlpha;
+ (void)PBArrayAdd_backgroundColor;
+ (void)PBArrayAdd_displayName;
- (void).cxx_destruct;
@property(nonatomic) int colorType; // @synthesize colorType=_colorType;
@property(nonatomic) float logoAlpha; // @synthesize logoAlpha=_logoAlpha;
@property(retain, nonatomic) NSString *logoColor; // @synthesize logoColor=_logoColor;
@property(nonatomic) float fontAlpha; // @synthesize fontAlpha=_fontAlpha;
@property(retain, nonatomic) NSString *fontColor; // @synthesize fontColor=_fontColor;
@property(nonatomic) float backgroundAlpha; // @synthesize backgroundAlpha=_backgroundAlpha;
@property(retain, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)initWithFavBkgImageResourceInfo:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

