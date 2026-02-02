//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSNumber;

@interface GCLayoutConfig : NSObject
{
    int _numLine;
    double _outTotalHeight;
    double _outMaxWidth;
    NSArray *_subViewArray;
    double _space;
    NSArray *_spaceArray;
    double _maxRight;
    double _lineSpace;
    double _verticalFixeRight;
    NSNumber *_verticalAlignTop;
    double _maxWidth;
    double _firstViewLeft;
    double _centerY;
    unsigned long long _alignStrategy;
}

+ (id)layoutConfigWithSubviewArray:(id)arg1 space:(double)arg2 maxRight:(double)arg3;
+ (id)layoutConfigWithSubviewArray:(id)arg1 space:(double)arg2 maxRight:(double)arg3 lineSpace:(double)arg4 alignStrategy:(unsigned long long)arg5;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long alignStrategy; // @synthesize alignStrategy=_alignStrategy;
@property(nonatomic) double centerY; // @synthesize centerY=_centerY;
@property(nonatomic) double firstViewLeft; // @synthesize firstViewLeft=_firstViewLeft;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) NSNumber *verticalAlignTop; // @synthesize verticalAlignTop=_verticalAlignTop;
@property(nonatomic) double verticalFixeRight; // @synthesize verticalFixeRight=_verticalFixeRight;
@property(nonatomic) double lineSpace; // @synthesize lineSpace=_lineSpace;
@property(nonatomic) double maxRight; // @synthesize maxRight=_maxRight;
@property(retain, nonatomic) NSArray *spaceArray; // @synthesize spaceArray=_spaceArray;
@property(nonatomic) double space; // @synthesize space=_space;
@property(retain, nonatomic) NSArray *subViewArray; // @synthesize subViewArray=_subViewArray;
@property(nonatomic) int numLine; // @synthesize numLine=_numLine;
@property(nonatomic) double outMaxWidth; // @synthesize outMaxWidth=_outMaxWidth;
@property(nonatomic) double outTotalHeight; // @synthesize outTotalHeight=_outTotalHeight;

@end

