//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController;

@protocol MMUIViewControllerExt <NSObject>

@optional
- (void)MMUIViewControllerWillPopOrDismiss:(MMUIViewController *)arg1;
- (void)MMUIViewControllerWillPushOrPresent:(MMUIViewController *)arg1;
- (void)MMUIViewControllerDidBePopOrDismiss:(MMUIViewController *)arg1;
- (void)MMUIViewControllerDidBePushOrPresent:(MMUIViewController *)arg1;
- (void)MMUIViewControllerDidBePoped:(MMUIViewController *)arg1;
- (void)MMUIViewControllerDidBeDismissed:(MMUIViewController *)arg1;
- (void)MMUIViewControllerDidDisappear:(MMUIViewController *)arg1;
- (void)MMUIViewControllerWillDisppear:(MMUIViewController *)arg1;
- (void)MMUIViewControllerDidAppear:(MMUIViewController *)arg1;
- (void)MMUIViewControllerWillAppear:(MMUIViewController *)arg1;
- (void)MMUIViewControllerDidBeRemoved:(MMUIViewController *)arg1;
@end

