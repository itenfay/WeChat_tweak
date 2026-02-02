//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMSightCameraOptionUtil : NSObject
{
}

+ (double)_getRotateFromTransform:(struct CGAffineTransform)arg1;
+ (struct CGAffineTransform)_rotateTransform:(struct CGAffineTransform)arg1 toDeviceOrientation:(long long)arg2;
+ (void)transformView:(id)arg1 rotateToOrientation:(long long)arg2 animated:(_Bool)arg3;
+ (id)createAvgViewWithFrame:(struct CGRect)arg1 fromSubviewList:(id)arg2 justified:(_Bool)arg3 edgeInsets:(struct UIEdgeInsets)arg4;
+ (id)createPureTitleButtonForText:(id)arg1 withAccessibilityText:(id)arg2;
+ (id)createTopBarButtonWithIconName:(id)arg1;
+ (double)topBarBtnLen;
+ (id)createIconButtonWithTitle:(id)arg1 font:(id)arg2 viewTag:(long long)arg3 accessibilityText:(id)arg4;
+ (id)createIconButtonWithSVGName:(id)arg1 viewSize:(struct CGSize)arg2 imageSize:(struct CGSize)arg3 viewTag:(long long)arg4 accessibilityText:(id)arg5;
+ (id)createIconButtonWithSVGName:(id)arg1 viewTag:(long long)arg2 accessibilityText:(id)arg3;
- (double)_getScaleYFromTransform:(struct CGAffineTransform)arg1;
- (double)_getScaleXFromTransform:(struct CGAffineTransform)arg1;

@end

