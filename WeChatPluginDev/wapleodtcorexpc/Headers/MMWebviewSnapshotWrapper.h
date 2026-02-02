//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMWebViewController;

@interface MMWebviewSnapshotWrapper : NSObject
{
    MMWebViewController *_webviewVC;
}

@property(nonatomic) __weak MMWebViewController *webviewVC; // @synthesize webviewVC=_webviewVC;
- (void)animateHideFullSnapshotEntrance;

@end

