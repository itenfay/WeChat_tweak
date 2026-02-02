//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSString, QScaleUnitsView, UIColor;
@protocol QScaleViewDelegate;

@interface QScaleView : UIView
{
    UIColor *_borderColorRegular;
    UIColor *_lightSegmentColorSatellite;
    UIColor *_darkSegmentColorSatellite;
    UIColor *_borderColorSatellite;
    NSString *_metersAbbreviation;
    NSString *_kilometersAbbreviation;
    double *_magicNumbers;
    int _oldNumberOfSegments;
    int _segmentNumber;
    double _resultSegmentLength;
    double _resultSegmentLengthInMeters;
    double _tempSegmentLengthInMeters;
    NSArray *_scaleMetersArray;
    UIView *_outlineView;
    UIView *_verticalLineLeft;
    UIView *_verticalLineRight;
    QScaleUnitsView *_unitsView;
    _Bool _useRegularStyle;
    _Bool _isDarkMode;
    double _distanceInMeters;
    id <QScaleViewDelegate> _delegate;
    NSString *_customFont;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isDarkMode; // @synthesize isDarkMode=_isDarkMode;
@property(retain, nonatomic) NSString *customFont; // @synthesize customFont=_customFont;
@property(nonatomic) __weak id <QScaleViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double distanceInMeters; // @synthesize distanceInMeters=_distanceInMeters;
@property(nonatomic) _Bool useRegularStyle; // @synthesize useRegularStyle=_useRegularStyle;
- (_Bool)checkRectIsValid:(struct CGRect)arg1;
- (struct CGSize)getScaleViewMaxSize;
- (void)notifyScaleSegmentLengthChange;
- (void)updateUnitsView:(int)arg1;
- (id)drawVerticalLine:(struct CGPoint)arg1 width:(double)arg2 height:(double)arg3;
- (void)updateOutlineView;
- (void)updateDisplayStyle;
- (void)calculateSegmentLength;
- (void)calculateSegments;
- (void)updateScaleViewWithScaleLevel:(int)arg1 andDistanceMeters:(double)arg2;
- (void)updateOrigin:(struct CGPoint)arg1;
- (void)initBaseLayer;
- (void)initMagicNumber;
- (void)initAttributes;
- (id)init;
- (void)dealloc;

@end

