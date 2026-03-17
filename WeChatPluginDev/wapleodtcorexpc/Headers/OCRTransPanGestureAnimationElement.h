//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OCRTransPanGestureAnimationElement : NSObject
{
    double _exitViewTopAtPanBegin;
    double _previousPanPositionX;
    double _zoomScaleAtPanBegin;
    struct CGPoint _scrollOffsetAtPanBegin;
    struct CGSize _imageSizeAtPanBegin;
    struct CGPoint _imageOriginAtPanBegin;
}

@property(nonatomic) struct CGPoint imageOriginAtPanBegin; // @synthesize imageOriginAtPanBegin=_imageOriginAtPanBegin;
@property(nonatomic) struct CGSize imageSizeAtPanBegin; // @synthesize imageSizeAtPanBegin=_imageSizeAtPanBegin;
@property(nonatomic) struct CGPoint scrollOffsetAtPanBegin; // @synthesize scrollOffsetAtPanBegin=_scrollOffsetAtPanBegin;
@property(nonatomic) double zoomScaleAtPanBegin; // @synthesize zoomScaleAtPanBegin=_zoomScaleAtPanBegin;
@property(nonatomic) double previousPanPositionX; // @synthesize previousPanPositionX=_previousPanPositionX;
@property(nonatomic) double exitViewTopAtPanBegin; // @synthesize exitViewTopAtPanBegin=_exitViewTopAtPanBegin;

@end

