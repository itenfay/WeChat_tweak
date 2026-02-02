//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FLTCookieManager, NSString;
@protocol FlutterBinaryMessenger;

@interface FLTWebViewFactory : NSObject
{
    NSObject<FlutterBinaryMessenger> *_messenger;
    FLTCookieManager *_cookieManager;
}

- (void).cxx_destruct;
- (id)createWithFrame:(struct CGRect)arg1 viewIdentifier:(long long)arg2 arguments:(id)arg3;
- (id)createArgsCodec;
- (id)initWithMessenger:(id)arg1 cookieManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

