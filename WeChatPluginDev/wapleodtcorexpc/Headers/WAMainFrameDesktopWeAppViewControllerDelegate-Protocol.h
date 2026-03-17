//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WAMainFrameDesktopWeAppViewControllerDelegate <NSObject>
- (void)notifyWeAppChanged;
- (NSString *)getReportSessionId;
- (void)onDragUpToClose;
- (void)onTapSearchArea;
@end

