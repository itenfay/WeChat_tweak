//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveMoreFunctionItem, UIViewController;

@protocol MMLiveMoreFunctionManagerDelegate <NSObject>

@optional
- (void)operationViewDidPushVC:(UIViewController *)arg1 naviBarHidden:(_Bool)arg2 item:(MMFinderLiveMoreFunctionItem *)arg3;
- (void)moreFunctionOperationViewWillDisappear;
- (void)operationViewDidSelect:(unsigned long long)arg1 item:(MMFinderLiveMoreFunctionItem *)arg2;
@end

