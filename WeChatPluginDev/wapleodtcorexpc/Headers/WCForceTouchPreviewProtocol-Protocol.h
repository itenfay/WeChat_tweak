//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController, NSString, UIView, UIViewController;

@protocol WCForceTouchPreviewProtocol <NSObject>
- (_Bool)canPeek;

@optional
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(UIView *)arg2;
- (NSString *)urlForPreView:(MMUIViewController *)arg1;
- (UIViewController *)viewControllerForPreview:(MMUIViewController *)arg1;
- (UIViewController *)viewControllerToPreviewWithFromController:(MMUIViewController *)arg1 forLocation:(struct CGPoint)arg2 inCoordinateView:(UIView *)arg3;
@end

