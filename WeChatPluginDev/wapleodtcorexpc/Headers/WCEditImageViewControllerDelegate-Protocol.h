//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EditImageAttr, WCEditImageViewController;

@protocol WCEditImageViewControllerDelegate <NSObject>

@optional
- (void)editImageViewControllerDidCancel:(WCEditImageViewController *)arg1;
- (void)editImageViewController:(WCEditImageViewController *)arg1 didFinishEditingImage:(EditImageAttr *)arg2;
@end

