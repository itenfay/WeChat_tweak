//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, UIColor, UIFont;

@interface WNSaveImageConfiguration : NSObject
{
    long long _imageType;
    UIColor *_backgroundColor;
    long long _textAlignment;
    double _visibleHeight;
    double _squareHeight;
    UIFont *_longImageFont;
    UIFont *_squareImageFont;
    double _scale;
    UIColor *_textColor;
    UIColor *_logoColor;
    unsigned long long _colorType;
    NSMutableArray *_arrSelectedIndex;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrSelectedIndex; // @synthesize arrSelectedIndex=_arrSelectedIndex;
@property(nonatomic) unsigned long long colorType; // @synthesize colorType=_colorType;
@property(retain, nonatomic) UIColor *logoColor; // @synthesize logoColor=_logoColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) UIFont *squareImageFont; // @synthesize squareImageFont=_squareImageFont;
@property(retain, nonatomic) UIFont *longImageFont; // @synthesize longImageFont=_longImageFont;
@property(nonatomic) double squareHeight; // @synthesize squareHeight=_squareHeight;
@property(nonatomic) double visibleHeight; // @synthesize visibleHeight=_visibleHeight;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) long long imageType; // @synthesize imageType=_imageType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initSaveImageConfigWithType:(long long)arg1 andTextAlignment:(long long)arg2 andVisibleHeight:(double)arg3 andSquareHeight:(double)arg4 isDarkMode:(_Bool)arg5;

@end

