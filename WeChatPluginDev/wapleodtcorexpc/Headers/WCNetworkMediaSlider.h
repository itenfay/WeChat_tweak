//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UISlider.h>

@class NSArray, UIColor, UIImage;

@interface WCNetworkMediaSlider : UISlider
{
    double m_cacheTime;
    double m_thumbLeftMargin;
    double m_thumbRightMargin;
    _Bool _showCacheProgress;
    _Bool _roundedRect;
    _Bool _showThumb;
    UIColor *_frontgroundColor;
    UIColor *_backgroundColor;
    UIColor *_cacheColor;
    double _sliderHeight;
    UIImage *_thumbImage;
    NSArray *_markArr;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *markArr; // @synthesize markArr=_markArr;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(nonatomic) _Bool showThumb; // @synthesize showThumb=_showThumb;
@property(nonatomic) _Bool roundedRect; // @synthesize roundedRect=_roundedRect;
@property(nonatomic) _Bool showCacheProgress; // @synthesize showCacheProgress=_showCacheProgress;
@property(nonatomic) double sliderHeight; // @synthesize sliderHeight=_sliderHeight;
@property(retain, nonatomic) UIColor *cacheColor; // @synthesize cacheColor=_cacheColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *frontgroundColor; // @synthesize frontgroundColor=_frontgroundColor;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (void)drawMarkArr:(struct CGContext *)arg1;
- (id)getFrontgroundImage;
- (id)getBackgroundImage;
- (void)resizeCacheProgress;
- (void)setCacheProgress:(double)arg1;
- (struct CGRect)minimumValueImageRectForBounds:(struct CGRect)arg1;
- (void)initView;
- (id)init;

@end

