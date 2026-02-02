//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIViewController, WAWebViewController;

@interface WAAppTaskShowFromBackgroundContext : NSObject
{
    WAWebViewController *_showWebView;
    UIViewController *_lastVC;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *lastVC; // @synthesize lastVC=_lastVC;
@property(nonatomic) __weak WAWebViewController *showWebView; // @synthesize showWebView=_showWebView;

@end

