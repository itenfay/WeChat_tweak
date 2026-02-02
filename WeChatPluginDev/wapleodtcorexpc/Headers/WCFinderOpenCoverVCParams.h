//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSURL, WCFinderCropRectModel;

@interface WCFinderOpenCoverVCParams : NSObject
{
    int _coverShowStyle;
    NSURL *_photoCoverUrl;
    double _coverTimeStamp;
    WCFinderCropRectModel *_cropRectModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderCropRectModel *cropRectModel; // @synthesize cropRectModel=_cropRectModel;
@property(nonatomic) int coverShowStyle; // @synthesize coverShowStyle=_coverShowStyle;
@property(nonatomic) double coverTimeStamp; // @synthesize coverTimeStamp=_coverTimeStamp;
@property(retain, nonatomic) NSURL *photoCoverUrl; // @synthesize photoCoverUrl=_photoCoverUrl;

@end

