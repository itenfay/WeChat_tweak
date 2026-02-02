//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QAOIMarkerPayload : NSObject
{
    _Bool _visible;
    float _fontSize;
    int _markerID;
    int _subMarkerID;
    int _priority;
    NSString *_iconName;
    NSString *_name;
    NSString *_color;
    double _latitude;
    double _longitude;
    NSString *_annoTextImgName;
    double _iconWidth;
    double _iconHeight;
    double _annoTextImgWidth;
    double _annoTextImgHeight;
    double _annoTextStrokeWidth;
    NSString *_annoTextStrokeColor;
    NSString *_annoTextImgKey;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(copy, nonatomic) NSString *annoTextImgKey; // @synthesize annoTextImgKey=_annoTextImgKey;
@property(nonatomic) int priority; // @synthesize priority=_priority;
@property(copy, nonatomic) NSString *annoTextStrokeColor; // @synthesize annoTextStrokeColor=_annoTextStrokeColor;
@property(nonatomic) double annoTextStrokeWidth; // @synthesize annoTextStrokeWidth=_annoTextStrokeWidth;
@property(nonatomic) double annoTextImgHeight; // @synthesize annoTextImgHeight=_annoTextImgHeight;
@property(nonatomic) double annoTextImgWidth; // @synthesize annoTextImgWidth=_annoTextImgWidth;
@property(nonatomic) double iconHeight; // @synthesize iconHeight=_iconHeight;
@property(nonatomic) double iconWidth; // @synthesize iconWidth=_iconWidth;
@property(copy, nonatomic) NSString *annoTextImgName; // @synthesize annoTextImgName=_annoTextImgName;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *color; // @synthesize color=_color;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(nonatomic) int subMarkerID; // @synthesize subMarkerID=_subMarkerID;
@property(nonatomic) int markerID; // @synthesize markerID=_markerID;
@property(nonatomic) float fontSize; // @synthesize fontSize=_fontSize;

@end

