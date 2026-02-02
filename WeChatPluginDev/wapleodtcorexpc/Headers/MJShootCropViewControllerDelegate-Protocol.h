//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJShootCropViewController, OMJCamSpatialDesc;

@protocol MJShootCropViewControllerDelegate <NSObject>
- (void)cropViewControllerDidTapOnReset:(MJShootCropViewController *)arg1;
- (void)cropViewControllerDidTapOnFlip:(MJShootCropViewController *)arg1;
- (void)cropViewControllerDidTapOnRotate:(MJShootCropViewController *)arg1;
- (void)cropViewControllerDidScaleContent:(MJShootCropViewController *)arg1;
- (void)cropViewControllerDidMoveContent:(MJShootCropViewController *)arg1;
- (void)cropViewController:(MJShootCropViewController *)arg1 didFinishCroppingWithSpatialDesc:(OMJCamSpatialDesc *)arg2;
@end

