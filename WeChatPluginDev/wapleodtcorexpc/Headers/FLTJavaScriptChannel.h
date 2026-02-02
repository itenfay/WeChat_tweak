//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterMethodChannel, NSString;

@interface FLTJavaScriptChannel : NSObject
{
    FlutterMethodChannel *_methodChannel;
    NSString *_javaScriptChannelName;
}

- (void).cxx_destruct;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (id)initWithMethodChannel:(id)arg1 javaScriptChannelName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

