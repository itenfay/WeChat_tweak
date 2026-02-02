//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface FinderLivePlayInfo : NSObject
{
    NSString *_finder_export_id;
    NSNumber *_videoScrWidth;
    NSNumber *_videoScrHeight;
    NSNumber *_containerWidth;
    NSNumber *_containerHeight;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithFinder_export_id:(id)arg1 videoScrWidth:(id)arg2 videoScrHeight:(id)arg3 containerWidth:(id)arg4 containerHeight:(id)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *containerHeight; // @synthesize containerHeight=_containerHeight;
@property(retain, nonatomic) NSNumber *containerWidth; // @synthesize containerWidth=_containerWidth;
@property(retain, nonatomic) NSNumber *videoScrHeight; // @synthesize videoScrHeight=_videoScrHeight;
@property(retain, nonatomic) NSNumber *videoScrWidth; // @synthesize videoScrWidth=_videoScrWidth;
@property(copy, nonatomic) NSString *finder_export_id; // @synthesize finder_export_id=_finder_export_id;
- (id)toList;

@end

