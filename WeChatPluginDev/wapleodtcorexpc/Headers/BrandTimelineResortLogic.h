//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BrandTimelineViewController;

@interface BrandTimelineResortLogic : NSObject
{
    _Bool _hasTryResort;
    BrandTimelineViewController *_timelineVC;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasTryResort; // @synthesize hasTryResort=_hasTryResort;
@property(nonatomic) __weak BrandTimelineViewController *timelineVC; // @synthesize timelineVC=_timelineVC;
- (id)genResortCommItemFromExposeInfo:(id)arg1;
- (id)getResortContext:(id)arg1;
- (void)tryResortOnEnterTimeline;

@end

