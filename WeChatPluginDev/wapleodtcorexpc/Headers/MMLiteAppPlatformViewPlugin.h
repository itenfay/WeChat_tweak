//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol FlutterBinaryMessenger;

@interface MMLiteAppPlatformViewPlugin : NSObject
{
    NSObject<FlutterBinaryMessenger> *_messenger;
}

+ (void)registerWithRegistrar:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak NSObject<FlutterBinaryMessenger> *messenger; // @synthesize messenger=_messenger;
- (void)instanceRegisterWithRegistrar:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

