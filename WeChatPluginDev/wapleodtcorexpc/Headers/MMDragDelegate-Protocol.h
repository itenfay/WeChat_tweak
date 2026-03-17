//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIDragPreviewParameters, UIImage, UITargetedDragPreview;

@protocol MMDragDelegate <NSObject>
- (void)liftingImageNeedRemove;
- (UITargetedDragPreview *)liftingItemWithImage:(UIImage *)arg1 parameters:(UIDragPreviewParameters *)arg2;
@end

