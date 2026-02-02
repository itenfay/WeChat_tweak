//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface MMDeviceCameraGroup : NSObject
{
    NSArray *_sortedCameraInfoList;
    double _minDigitalZoomFactor;
    double _maxDigitalZoomFactor;
    double _visualFactorScale;
}

+ (void)_insertCameraInfo:(id)arg1 intoSortedList:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) double visualFactorScale; // @synthesize visualFactorScale=_visualFactorScale;
@property(nonatomic) double maxDigitalZoomFactor; // @synthesize maxDigitalZoomFactor=_maxDigitalZoomFactor;
@property(nonatomic) double minDigitalZoomFactor; // @synthesize minDigitalZoomFactor=_minDigitalZoomFactor;
@property(retain, nonatomic) NSArray *sortedCameraInfoList; // @synthesize sortedCameraInfoList=_sortedCameraInfoList;
- (void)_resetCameraGroupWithCameraInfoList:(id)arg1;
- (id)_initWithCameraInfoList:(id)arg1;

@end

