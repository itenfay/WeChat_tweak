//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, WCAdInteractionResourceLayoutInfo;

@interface WCAdInteractionResourceInfo : NSObject
{
    _Bool _showGradientView;
    _Bool _startAnimationManually;
    _Bool _showShadow;
    _Bool _usingPerformanceMode;
    _Bool _needAccelerationData;
    _Bool _clockwise;
    _Bool _needExposedInfo;
    NSString *_resourceId;
    unsigned long long _resourceType;
    double _cornerRadius;
    NSArray *_contentResources;
    unsigned long long _gradientViewType;
    NSString *_relatedId;
    double _alpha;
    NSString *_backgroundColor;
    double _backgroundColorAlpha;
    WCAdInteractionResourceLayoutInfo *_portraitLayoutInfo;
    WCAdInteractionResourceLayoutInfo *_landscapeLayoutInfo;
    unsigned long long _imageType;
    NSString *_resourceUrl;
    NSString *_imageName;
    NSString *_imageColor;
    double _imageColorAlpha;
    NSString *_text;
    double _fontSize;
    unsigned long long _fontWeightType;
    NSString *_textColor;
    double _textColorAlpha;
    unsigned long long _lineCount;
    unsigned long long _alignmentType;
    NSString *_btnBackgroundColor;
    double _btnBackgroundColorAlpha;
    NSString *_btnIconUrl;
    unsigned long long _btnIconSize;
    double _btnIconSpacing;
    double _startAngle;
    double _endAngle;
    Class _reportDataHendlerClass;
}

- (void).cxx_destruct;
@property(retain, nonatomic) Class reportDataHendlerClass; // @synthesize reportDataHendlerClass=_reportDataHendlerClass;
@property(nonatomic) _Bool needExposedInfo; // @synthesize needExposedInfo=_needExposedInfo;
@property(nonatomic) _Bool clockwise; // @synthesize clockwise=_clockwise;
@property(nonatomic) double endAngle; // @synthesize endAngle=_endAngle;
@property(nonatomic) double startAngle; // @synthesize startAngle=_startAngle;
@property(nonatomic) _Bool needAccelerationData; // @synthesize needAccelerationData=_needAccelerationData;
@property(nonatomic) _Bool usingPerformanceMode; // @synthesize usingPerformanceMode=_usingPerformanceMode;
@property(nonatomic) double btnIconSpacing; // @synthesize btnIconSpacing=_btnIconSpacing;
@property(nonatomic) unsigned long long btnIconSize; // @synthesize btnIconSize=_btnIconSize;
@property(retain, nonatomic) NSString *btnIconUrl; // @synthesize btnIconUrl=_btnIconUrl;
@property(nonatomic) double btnBackgroundColorAlpha; // @synthesize btnBackgroundColorAlpha=_btnBackgroundColorAlpha;
@property(retain, nonatomic) NSString *btnBackgroundColor; // @synthesize btnBackgroundColor=_btnBackgroundColor;
@property(nonatomic) unsigned long long alignmentType; // @synthesize alignmentType=_alignmentType;
@property(nonatomic) _Bool showShadow; // @synthesize showShadow=_showShadow;
@property(nonatomic) unsigned long long lineCount; // @synthesize lineCount=_lineCount;
@property(nonatomic) double textColorAlpha; // @synthesize textColorAlpha=_textColorAlpha;
@property(retain, nonatomic) NSString *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) unsigned long long fontWeightType; // @synthesize fontWeightType=_fontWeightType;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) double imageColorAlpha; // @synthesize imageColorAlpha=_imageColorAlpha;
@property(retain, nonatomic) NSString *imageColor; // @synthesize imageColor=_imageColor;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) NSString *resourceUrl; // @synthesize resourceUrl=_resourceUrl;
@property(nonatomic) unsigned long long imageType; // @synthesize imageType=_imageType;
@property(retain, nonatomic) WCAdInteractionResourceLayoutInfo *landscapeLayoutInfo; // @synthesize landscapeLayoutInfo=_landscapeLayoutInfo;
@property(retain, nonatomic) WCAdInteractionResourceLayoutInfo *portraitLayoutInfo; // @synthesize portraitLayoutInfo=_portraitLayoutInfo;
@property(nonatomic) double backgroundColorAlpha; // @synthesize backgroundColorAlpha=_backgroundColorAlpha;
@property(retain, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) _Bool startAnimationManually; // @synthesize startAnimationManually=_startAnimationManually;
@property(retain, nonatomic) NSString *relatedId; // @synthesize relatedId=_relatedId;
@property(nonatomic) unsigned long long gradientViewType; // @synthesize gradientViewType=_gradientViewType;
@property(nonatomic) _Bool showGradientView; // @synthesize showGradientView=_showGradientView;
@property(retain, nonatomic) NSArray *contentResources; // @synthesize contentResources=_contentResources;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) unsigned long long resourceType; // @synthesize resourceType=_resourceType;
@property(retain, nonatomic) NSString *resourceId; // @synthesize resourceId=_resourceId;
@property(readonly, retain, nonatomic) WCAdInteractionResourceLayoutInfo *layoutInfo;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

