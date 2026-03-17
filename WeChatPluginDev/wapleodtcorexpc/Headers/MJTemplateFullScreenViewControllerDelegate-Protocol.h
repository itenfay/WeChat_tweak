//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class ForwardMessageLogicController, MJTemplateFullScreenViewController;

@protocol MJTemplateFullScreenViewControllerDelegate <NSObject>
- (void)templateFullScreenViewControllerDidClose:(MJTemplateFullScreenViewController *)arg1;
- (void)templateFullScreenViewControllerWillClose:(MJTemplateFullScreenViewController *)arg1;
- (void)templateFullScreenViewController:(MJTemplateFullScreenViewController *)arg1 forwardSuccess:(ForwardMessageLogicController *)arg2;
- (void)templateFullScreenViewController:(MJTemplateFullScreenViewController *)arg1 didCancelForward:(ForwardMessageLogicController *)arg2;
@end

