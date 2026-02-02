//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCFinderHalfMoveModel : NSObject
{
    _Bool _halfScreenIsShow;
    NSMutableArray *_halfScreenMoveProgressArray;
    double _haflScreenHeightPercent;
    NSString *_bindFeedId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *bindFeedId; // @synthesize bindFeedId=_bindFeedId;
@property(nonatomic) double haflScreenHeightPercent; // @synthesize haflScreenHeightPercent=_haflScreenHeightPercent;
@property(retain, nonatomic) NSMutableArray *halfScreenMoveProgressArray; // @synthesize halfScreenMoveProgressArray=_halfScreenMoveProgressArray;
@property(nonatomic) _Bool halfScreenIsShow; // @synthesize halfScreenIsShow=_halfScreenIsShow;
- (_Bool)halfScreenProgressArrayIsFull;
- (double)videoCurHalfScreenMoveProgress;
- (double)videoLastHalfScreenMoveProgress;
- (id)init;

@end

