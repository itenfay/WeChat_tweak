//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIViewController, NSDictionary, NSMutableDictionary, NSString;
@protocol WXCustomWebViewControllerProtocol;

@interface GCWebViewCustomEventParam : NSObject
{
    MMUIViewController<WXCustomWebViewControllerProtocol> *_webVc;
    NSString *_eventName;
    NSMutableDictionary *_customParam;
    NSDictionary *_jsParam;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *jsParam; // @synthesize jsParam=_jsParam;
@property(retain, nonatomic) NSMutableDictionary *customParam; // @synthesize customParam=_customParam;
@property(retain, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(retain, nonatomic) MMUIViewController<WXCustomWebViewControllerProtocol> *webVc; // @synthesize webVc=_webVc;

@end

