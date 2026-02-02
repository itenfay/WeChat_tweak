//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterMethodChannel, MMLiteAppView, NSString;
@protocol FlutterBinaryMessenger;

@interface MMLiteAppPlatformView : NSObject
{
    long long _viewId;
    id _args;
    MMLiteAppView *_liteAppView;
    FlutterMethodChannel *_channel;
    NSObject<FlutterBinaryMessenger> *_messenger;
    struct CGRect _frame;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSObject<FlutterBinaryMessenger> *messenger; // @synthesize messenger=_messenger;
@property(retain, nonatomic) FlutterMethodChannel *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) MMLiteAppView *liteAppView; // @synthesize liteAppView=_liteAppView;
@property(retain, nonatomic) id args; // @synthesize args=_args;
@property(nonatomic) long long viewId; // @synthesize viewId=_viewId;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (void)sendEvent:(id)arg1 data:(id)arg2;
- (id)view;
- (void)initLiteAppView;
- (id)initWithFrame:(struct CGRect)arg1 viewIdentifier:(long long)arg2 argument:(id)arg3 messenger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

