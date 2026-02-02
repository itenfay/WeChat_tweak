//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor;

@interface WAMapCircleData : NSObject
{
    UIColor *_color;
    UIColor *_fillColor;
    double _strokeWidth;
    long long _displayLevel;
}

- (void).cxx_destruct;
@property(nonatomic) long long displayLevel; // @synthesize displayLevel=_displayLevel;
@property(nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;

@end

