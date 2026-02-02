//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class LiteAppJsApiCallback, NSString, UIViewController;

@interface LiteAppJsApi : NSObject
{
    double _timeInterval;
    LiteAppJsApiCallback *_callBack;
    UIViewController *_controller;
    unsigned int _localId;
    NSString *_appId;
    NSString *_apiName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *apiName; // @synthesize apiName=_apiName;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) unsigned int localId; // @synthesize localId=_localId;
@property(nonatomic) __weak UIViewController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) LiteAppJsApiCallback *callBack; // @synthesize callBack=_callBack;
@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(_Bool)arg3;
- (void)invalidCallBack;
- (void)setUIViewController:(id)arg1;
- (id)init;

@end

