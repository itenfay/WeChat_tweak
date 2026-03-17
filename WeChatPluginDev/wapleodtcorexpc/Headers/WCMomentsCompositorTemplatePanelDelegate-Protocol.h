//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJVideoTemplate, NSIndexPath, WCMomentsCompositorTemplatePanelViewController;

@protocol WCMomentsCompositorTemplatePanelDelegate <NSObject>
- (void)onCloseTemplatePanelSelector:(WCMomentsCompositorTemplatePanelViewController *)arg1;
- (void)templatePanelSelector:(WCMomentsCompositorTemplatePanelViewController *)arg1 didSelectTemplate:(MJVideoTemplate *)arg2 index:(NSIndexPath *)arg3;
@end

