//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, NSURL, UIViewController;
@protocol IWAHTMLWebVCHelper;

@protocol IWAWebVCService <NSObject>
+ (void)tryJumpWeAppOrH5:(NSString *)arg1 H5EntryScene:(NSString *)arg2 animated:(_Bool)arg3;
+ (UIViewController<IWAHTMLWebVCHelper> *)getWAHTMLWebVCWithURL:(NSURL *)arg1 extraInfo:(NSDictionary *)arg2;
+ (UIViewController *)getWebVCByUrl:(NSString *)arg1 presentModal:(_Bool)arg2;
@end

