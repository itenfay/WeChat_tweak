//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderRedPacketCropSliderTimeRange, WCFinderRedPacketVideoEditCropRectModel;

@interface WCFinderRedPacketVideoEditResponseParams : NSObject
{
    NSString *_thumbPath;
    WCFinderRedPacketVideoEditCropRectModel *_cropRectModel;
    WCFinderRedPacketCropSliderTimeRange *_timeRangeModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderRedPacketCropSliderTimeRange *timeRangeModel; // @synthesize timeRangeModel=_timeRangeModel;
@property(retain, nonatomic) WCFinderRedPacketVideoEditCropRectModel *cropRectModel; // @synthesize cropRectModel=_cropRectModel;
@property(copy, nonatomic) NSString *thumbPath; // @synthesize thumbPath=_thumbPath;
- (id)description;
- (id)init;

@end

