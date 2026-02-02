//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MMFinderLiveOlyBarragePubbleAnimationRoute : NSObject
{
    NSMutableArray *_positionValues;
    NSMutableArray *_opacityValues;
    NSMutableArray *_scaleValues;
    NSMutableArray *_timeValues;
    double _duration;
    struct CGSize _containerSize;
}

- (void).cxx_destruct;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSMutableArray *timeValues; // @synthesize timeValues=_timeValues;
@property(retain, nonatomic) NSMutableArray *scaleValues; // @synthesize scaleValues=_scaleValues;
@property(retain, nonatomic) NSMutableArray *opacityValues; // @synthesize opacityValues=_opacityValues;
@property(retain, nonatomic) NSMutableArray *positionValues; // @synthesize positionValues=_positionValues;
@property(nonatomic) struct CGSize containerSize; // @synthesize containerSize=_containerSize;

@end

