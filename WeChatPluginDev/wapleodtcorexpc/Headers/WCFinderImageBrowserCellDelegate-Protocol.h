//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderImageBrowserCell;

@protocol WCFinderImageBrowserCellDelegate <NSObject>

@optional
- (_Bool)imageBrowserCellShouldStartPullingDown:(WCFinderImageBrowserCell *)arg1;
- (void)imageBrowserCellPullingToDismiss:(WCFinderImageBrowserCell *)arg1;
- (void)imageBrowserCellOnSingleTap:(WCFinderImageBrowserCell *)arg1;
- (_Bool)imageBrowserCellIsRotating:(WCFinderImageBrowserCell *)arg1;
- (void)imageBrowserCell:(WCFinderImageBrowserCell *)arg1 changePullingDownState:(_Bool)arg2;
- (void)imageBrowserCell:(WCFinderImageBrowserCell *)arg1 changeBackgrondColorAlpha:(double)arg2;
@end

