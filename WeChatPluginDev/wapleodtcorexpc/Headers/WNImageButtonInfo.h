//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIFont, UIImage;

@interface WNImageButtonInfo : NSObject
{
    NSString *_buttonName;
    UIImage *_buttonImage;
    UIFont *_displayFont;
    long long _textAlignment;
    long long _dataSourceType;
    long long _imageType;
    UIColor *_textColor;
    UIColor *_logoColor;
    unsigned long long _colorType;
    NSString *_reportName;
    double _btnWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double btnWidth; // @synthesize btnWidth=_btnWidth;
@property(retain, nonatomic) NSString *reportName; // @synthesize reportName=_reportName;
@property(nonatomic) unsigned long long colorType; // @synthesize colorType=_colorType;
@property(retain, nonatomic) UIColor *logoColor; // @synthesize logoColor=_logoColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) long long imageType; // @synthesize imageType=_imageType;
@property(nonatomic) long long dataSourceType; // @synthesize dataSourceType=_dataSourceType;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) UIFont *displayFont; // @synthesize displayFont=_displayFont;
@property(retain, nonatomic) UIImage *buttonImage; // @synthesize buttonImage=_buttonImage;
@property(retain, nonatomic) NSString *buttonName; // @synthesize buttonName=_buttonName;
- (id)initInfoWith:(id)arg1 buttonImage:(id)arg2 displayFont:(id)arg3 textAlignment:(long long)arg4 dataSourceType:(long long)arg5 imageType:(long long)arg6 textColor:(id)arg7 logoColor:(id)arg8 colorType:(unsigned long long)arg9;
- (id)initInfoWith:(id)arg1 buttonImage:(id)arg2 displayFont:(id)arg3 textAlignment:(long long)arg4 dataSourceType:(long long)arg5 imageType:(long long)arg6;
- (id)initInfoWith:(id)arg1 buttonImage:(id)arg2 displayFont:(id)arg3 textAlignment:(long long)arg4 dataSourceType:(long long)arg5;

@end

