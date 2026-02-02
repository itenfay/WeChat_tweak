//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WKWebView;

@interface MMWebviewWrapper : NSObject
{
    _Bool _isRequesting;
    WKWebView *_weakWebview;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isRequesting; // @synthesize isRequesting=_isRequesting;
@property(nonatomic) __weak WKWebView *weakWebview; // @synthesize weakWebview=_weakWebview;

@end

