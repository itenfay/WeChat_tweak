//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterMethodChannel;

@interface FLTWKProgressionDelegate : NSObject
{
    FlutterMethodChannel *_methodChannel;
}

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObservingProgress:(id)arg1;
- (id)initWithWebView:(id)arg1 channel:(id)arg2;

@end

