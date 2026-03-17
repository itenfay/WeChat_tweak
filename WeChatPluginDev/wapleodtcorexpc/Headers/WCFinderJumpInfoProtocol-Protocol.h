//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderWindowProductInfo, NSMutableArray, UIViewController, WCFinderJumpInfo, WCFinderJumpInfoParams;

@protocol WCFinderJumpInfoProtocol <NSObject>
- (void)jumpToMiniStore:(WCFinderJumpInfo *)arg1 fromVC:(UIViewController *)arg2 params:(WCFinderJumpInfoParams *)arg3 productInfo:(FinderWindowProductInfo *)arg4 widgetParameters:(NSMutableArray *)arg5;
- (void)jumpToSchema:(WCFinderJumpInfo *)arg1 fromVC:(UIViewController *)arg2 params:(WCFinderJumpInfoParams *)arg3;
- (void)jumpToNative:(WCFinderJumpInfo *)arg1 fromVC:(UIViewController *)arg2 params:(WCFinderJumpInfoParams *)arg3;
- (void)jumpToH5:(WCFinderJumpInfo *)arg1 fromVC:(UIViewController *)arg2 params:(WCFinderJumpInfoParams *)arg3;
- (void)jumpToMiniApp:(WCFinderJumpInfo *)arg1 fromVC:(UIViewController *)arg2 params:(WCFinderJumpInfoParams *)arg3;
@end

