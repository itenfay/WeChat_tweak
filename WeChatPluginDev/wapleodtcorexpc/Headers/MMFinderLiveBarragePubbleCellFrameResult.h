//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MMFinderLiveBarragePubbleCellFrameResult : NSObject
{
    unsigned long long _layoutedStyle;
    NSMutableArray *_singleArrStyles;
    double _singleFirstLineOriginX;
    NSMutableArray *_multiArrStyles;
    double _multiFirstLineOriginX;
    NSMutableArray *_singleArrStylesInBright;
    double _singleFirstLineOriginXInBright;
    NSMutableArray *_multiArrStylesInBright;
    double _multiFirstLineOriginXInBright;
    struct CGSize _singleCellSize;
    struct CGSize _singleContentSize;
    struct CGSize _multiCellSize;
    struct CGSize _multiContentSize;
    struct CGSize _singleCellSizeInBright;
    struct CGSize _singleContentSizeInBright;
    struct CGSize _multiCellSizeInBright;
    struct CGSize _multiContentSizeInBright;
}

- (void).cxx_destruct;
@property(nonatomic) double multiFirstLineOriginXInBright; // @synthesize multiFirstLineOriginXInBright=_multiFirstLineOriginXInBright;
@property(retain, nonatomic) NSMutableArray *multiArrStylesInBright; // @synthesize multiArrStylesInBright=_multiArrStylesInBright;
@property(nonatomic) struct CGSize multiContentSizeInBright; // @synthesize multiContentSizeInBright=_multiContentSizeInBright;
@property(nonatomic) struct CGSize multiCellSizeInBright; // @synthesize multiCellSizeInBright=_multiCellSizeInBright;
@property(nonatomic) double singleFirstLineOriginXInBright; // @synthesize singleFirstLineOriginXInBright=_singleFirstLineOriginXInBright;
@property(retain, nonatomic) NSMutableArray *singleArrStylesInBright; // @synthesize singleArrStylesInBright=_singleArrStylesInBright;
@property(nonatomic) struct CGSize singleContentSizeInBright; // @synthesize singleContentSizeInBright=_singleContentSizeInBright;
@property(nonatomic) struct CGSize singleCellSizeInBright; // @synthesize singleCellSizeInBright=_singleCellSizeInBright;
@property(nonatomic) double multiFirstLineOriginX; // @synthesize multiFirstLineOriginX=_multiFirstLineOriginX;
@property(retain, nonatomic) NSMutableArray *multiArrStyles; // @synthesize multiArrStyles=_multiArrStyles;
@property(nonatomic) struct CGSize multiContentSize; // @synthesize multiContentSize=_multiContentSize;
@property(nonatomic) struct CGSize multiCellSize; // @synthesize multiCellSize=_multiCellSize;
@property(nonatomic) double singleFirstLineOriginX; // @synthesize singleFirstLineOriginX=_singleFirstLineOriginX;
@property(retain, nonatomic) NSMutableArray *singleArrStyles; // @synthesize singleArrStyles=_singleArrStyles;
@property(nonatomic) struct CGSize singleContentSize; // @synthesize singleContentSize=_singleContentSize;
@property(nonatomic) struct CGSize singleCellSize; // @synthesize singleCellSize=_singleCellSize;
@property(nonatomic) unsigned long long layoutedStyle; // @synthesize layoutedStyle=_layoutedStyle;

@end

