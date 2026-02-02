//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController;

@protocol KidsWatchBaseViewControllerDelegate <NSObject>

@optional
- (void)closeAndExit;
- (void)onLeaveViewController:(MMUIViewController *)arg1;
@end

