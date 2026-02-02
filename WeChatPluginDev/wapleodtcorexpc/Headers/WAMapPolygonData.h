//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, UIColor;

@interface WAMapPolygonData : NSObject
{
    UIColor *_fillColor;
    UIColor *_strokeColor;
    double _strokeWidth;
    long long _displayLevel;
    NSArray *_dashArray;
}

- (void).cxx_destruct;
@property(nonatomic) NSArray *dashArray; // @synthesize dashArray=_dashArray;
@property(nonatomic) long long displayLevel; // @synthesize displayLevel=_displayLevel;
@property(nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;

@end

