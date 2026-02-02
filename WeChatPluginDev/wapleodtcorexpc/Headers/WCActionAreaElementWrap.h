//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface WCActionAreaElementWrap : NSObject
{
    double _realWidth;
    double _maxWidth;
    double _minWidth;
    double _adjustedWidth;
    unsigned long long _displayLine;
    NSArray *_subElements;
    double _subElementSpacing;
}

- (void).cxx_destruct;
@property(nonatomic) double subElementSpacing; // @synthesize subElementSpacing=_subElementSpacing;
@property(retain, nonatomic) NSArray *subElements; // @synthesize subElements=_subElements;
@property(nonatomic) unsigned long long displayLine; // @synthesize displayLine=_displayLine;
@property(nonatomic) double adjustedWidth; // @synthesize adjustedWidth=_adjustedWidth;
@property(nonatomic) double minWidth; // @synthesize minWidth=_minWidth;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) double realWidth; // @synthesize realWidth=_realWidth;
- (void)adjustSubElementsWidthFromBackToFront;
- (id)initWithSubElements:(id)arg1 subElementSpacing:(double)arg2;

@end

