//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIDocumentInteractionController, UIView, UIViewController;

@protocol UIDocumentInteractionControllerDelegate <NSObject>

@optional
- (_Bool)documentInteractionController:(UIDocumentInteractionController *)arg1 performAction:(SEL)arg2;
- (_Bool)documentInteractionController:(UIDocumentInteractionController *)arg1 canPerformAction:(SEL)arg2;
- (void)documentInteractionController:(UIDocumentInteractionController *)arg1 didEndSendingToApplication:(NSString *)arg2;
- (void)documentInteractionController:(UIDocumentInteractionController *)arg1 willBeginSendingToApplication:(NSString *)arg2;
- (void)documentInteractionControllerDidDismissOpenInMenu:(UIDocumentInteractionController *)arg1;
- (void)documentInteractionControllerWillPresentOpenInMenu:(UIDocumentInteractionController *)arg1;
- (void)documentInteractionControllerDidDismissOptionsMenu:(UIDocumentInteractionController *)arg1;
- (void)documentInteractionControllerWillPresentOptionsMenu:(UIDocumentInteractionController *)arg1;
- (void)documentInteractionControllerDidEndPreview:(UIDocumentInteractionController *)arg1;
- (void)documentInteractionControllerWillBeginPreview:(UIDocumentInteractionController *)arg1;
- (UIView *)documentInteractionControllerViewForPreview:(UIDocumentInteractionController *)arg1;
- (struct CGRect)documentInteractionControllerRectForPreview:(UIDocumentInteractionController *)arg1;
- (UIViewController *)documentInteractionControllerViewControllerForPreview:(UIDocumentInteractionController *)arg1;
@end

