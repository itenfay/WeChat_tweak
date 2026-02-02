//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLongImagePreviewViewController, NSError, UIImage;

@protocol MMLongImagePreviewViewControllerDelegate <NSObject>
- (void)onLongImagePreviewActionCancel:(MMLongImagePreviewViewController *)arg1;
- (void)onLongImagePreviewActionSaveImage:(MMLongImagePreviewViewController *)arg1 image:(UIImage *)arg2 isSucc:(_Bool)arg3 error:(NSError *)arg4;
- (void)onLongImagePreviewActionAddFavorite:(MMLongImagePreviewViewController *)arg1;
- (void)onLongImagePreviewActionForward:(MMLongImagePreviewViewController *)arg1;
@end

