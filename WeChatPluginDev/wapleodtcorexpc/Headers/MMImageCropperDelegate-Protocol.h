//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMImageCropperViewController, UIImage;

@protocol MMImageCropperDelegate <NSObject>
- (void)imageCropperDidCancel:(MMImageCropperViewController *)arg1;
- (void)imageCropper:(MMImageCropperViewController *)arg1 didFinished:(UIImage *)arg2;
@end

