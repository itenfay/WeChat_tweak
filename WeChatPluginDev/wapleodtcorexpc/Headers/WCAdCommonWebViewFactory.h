//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol FlutterBinaryMessenger;

@interface WCAdCommonWebViewFactory : NSObject
{
    NSObject<FlutterBinaryMessenger> *_messenger;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<FlutterBinaryMessenger> *messenger; // @synthesize messenger=_messenger;
- (id)createArgsCodec;
- (id)createWithFrame:(struct CGRect)arg1 viewIdentifier:(long long)arg2 arguments:(id)arg3;
- (id)initWithMessenger:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

