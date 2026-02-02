//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor;

@interface QPolylineSegmentColor : NSObject
{
    int _startIndex;
    int _endIndex;
    UIColor *_color;
    UIColor *_borderColor;
    unsigned long long _indexOfColorPair;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long indexOfColorPair; // @synthesize indexOfColorPair=_indexOfColorPair;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) int endIndex; // @synthesize endIndex=_endIndex;
@property(nonatomic) int startIndex; // @synthesize startIndex=_startIndex;

@end

