//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, QAOIMarkerHandler;

@interface QAOIMarker : NSObject
{
    _Bool _visible;
    float _fontSize;
    int _priority;
    NSString *_poiUID;
    NSString *_mainPoiUID;
    NSString *_iconName;
    NSString *_name;
    NSString *_color;
    NSString *_category;
    double _latitude;
    double _longitude;
    QAOIMarkerHandler *_handler;
    NSString *_annoTextImgName;
    double _iconWidth;
    double _iconHeight;
    double _annoTextImgWidth;
    double _annoTextImgHeight;
    double _annoTextStrokeWidth;
    NSString *_annoTextStrokeColor;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *annoTextStrokeColor; // @synthesize annoTextStrokeColor=_annoTextStrokeColor;
@property(nonatomic) double annoTextStrokeWidth; // @synthesize annoTextStrokeWidth=_annoTextStrokeWidth;
@property(nonatomic) double annoTextImgHeight; // @synthesize annoTextImgHeight=_annoTextImgHeight;
@property(nonatomic) double annoTextImgWidth; // @synthesize annoTextImgWidth=_annoTextImgWidth;
@property(nonatomic) double iconHeight; // @synthesize iconHeight=_iconHeight;
@property(nonatomic) double iconWidth; // @synthesize iconWidth=_iconWidth;
@property(copy, nonatomic) NSString *annoTextImgName; // @synthesize annoTextImgName=_annoTextImgName;
@property(retain, nonatomic) QAOIMarkerHandler *handler; // @synthesize handler=_handler;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) int priority; // @synthesize priority=_priority;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) float fontSize; // @synthesize fontSize=_fontSize;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *color; // @synthesize color=_color;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(copy, nonatomic) NSString *mainPoiUID; // @synthesize mainPoiUID=_mainPoiUID;
@property(copy, nonatomic) NSString *poiUID; // @synthesize poiUID=_poiUID;

@end

