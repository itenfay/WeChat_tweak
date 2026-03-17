//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WAWebViewPlugin_ReportPageEvent, WAWebViewPlugin_WeAppMsg;
@protocol IWARecentForwardScrollViewHelper;

@protocol IWAShareAppMessageProxyServiceProtocol <NSObject>
+ (void)onWeAppStartToShareAppMessageWithShareAppMessagePlugin:(WAWebViewPlugin_WeAppMsg *)arg1 reportPageEventPlugin:(WAWebViewPlugin_ReportPageEvent *)arg2;

@optional
+ (id <IWARecentForwardScrollViewHelper>)generateRecentForwardScrollViewHelper;
@end

