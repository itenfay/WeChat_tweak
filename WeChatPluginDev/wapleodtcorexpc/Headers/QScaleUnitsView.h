//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, UIColor, UILabel;

@interface QScaleUnitsView : UIView
{
    NSMutableArray *_strings;
    UIColor *_lightColor;
    UIColor *_normalColor;
    UIColor *_strokeColor;
    float _fontSize;
    _Bool _withUnits;
    _Bool _useLightText;
    NSString *_baseLegendString;
    NSString *_unitsString;
    double _segmentLengthInPixels;
    long long _segmentNumber;
    UILabel *_segmentLable;
    NSString *_fontName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(retain, nonatomic) UILabel *segmentLable; // @synthesize segmentLable=_segmentLable;
@property(nonatomic) long long segmentNumber; // @synthesize segmentNumber=_segmentNumber;
@property(nonatomic) double segmentLengthInPixels; // @synthesize segmentLengthInPixels=_segmentLengthInPixels;
@property(retain, nonatomic) NSString *unitsString; // @synthesize unitsString=_unitsString;
@property(retain, nonatomic) NSString *baseLegendString; // @synthesize baseLegendString=_baseLegendString;
@property(nonatomic) _Bool useLightText; // @synthesize useLightText=_useLightText;
- (void)updateSegmentLable;
- (id)getFormattedString:(double)arg1;
- (void)calculateLegend;
- (void)initAttributes;
- (id)initWithFrame:(struct CGRect)arg1;

@end

