//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface MJSegmentCropBoxView : UIView
{
    double _croppedViewInitializedScale;
    UIView *_croppedView;
    struct CGSize _croppedViewInitializedSize;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *croppedView; // @synthesize croppedView=_croppedView;
@property(nonatomic) double croppedViewInitializedScale; // @synthesize croppedViewInitializedScale=_croppedViewInitializedScale;
@property(nonatomic) struct CGSize croppedViewInitializedSize; // @synthesize croppedViewInitializedSize=_croppedViewInitializedSize;
- (void)resetToOriginalRect;
- (struct CGRect)calcCroppedRect;
- (struct CGRect)restrictCroppedRect:(struct CGRect)arg1;
- (void)restrictCroppedViewCenter;
- (void)restrictCroppedViewCenterAnimated:(_Bool)arg1;
- (void)restrictCroppedViewScaleTransform;
- (void)restrictCroppedViewScaleTransformAnimated:(_Bool)arg1;
- (void)handlePinchGesture:(id)arg1 inView:(id)arg2;
- (void)handlePanGesture:(id)arg1 inView:(id)arg2;
- (void)commonInit;
- (id)init;

@end

