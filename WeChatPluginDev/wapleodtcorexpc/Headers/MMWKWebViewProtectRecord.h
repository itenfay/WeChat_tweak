//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WKWebView;

@interface MMWKWebViewProtectRecord : NSObject
{
    WKWebView *_weakWebView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak WKWebView *weakWebView; // @synthesize weakWebView=_weakWebView;

@end

