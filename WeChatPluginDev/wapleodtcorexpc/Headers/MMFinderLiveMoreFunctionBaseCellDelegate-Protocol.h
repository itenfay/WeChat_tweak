//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveMoreFunctionItem, NSIndexPath, UIViewController;

@protocol MMFinderLiveMoreFunctionBaseCellDelegate <NSObject>
- (void)moreFunctionIndexPath:(NSIndexPath *)arg1 item:(MMFinderLiveMoreFunctionItem *)arg2 isOn:(_Bool)arg3;

@optional
- (void)invokePushToVC:(UIViewController *)arg1 naviBarHidden:(_Bool)arg2 fromItem:(MMFinderLiveMoreFunctionItem *)arg3;
@end

