//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor;

@interface MMMusicSearchVideoInitParams : NSObject
{
    _Bool _canMultiSelect;
    double _cellSpacing;
    double _cellWidth;
    double _cellHeight;
    UIColor *_bgColor;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool canMultiSelect; // @synthesize canMultiSelect=_canMultiSelect;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(nonatomic) double cellSpacing; // @synthesize cellSpacing=_cellSpacing;

@end

