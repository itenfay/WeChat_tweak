//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol FlutterBinaryMessenger;

@interface WxaLiteAppWidgetFlutterPluginApi : NSObject
{
    NSObject<FlutterBinaryMessenger> *_binaryMessenger;
    NSString *_messageChannelSuffix;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *messageChannelSuffix; // @synthesize messageChannelSuffix=_messageChannelSuffix;
@property(retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger; // @synthesize binaryMessenger=_binaryMessenger;
- (void)closeWindowMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)tapEventMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setForbidRightGestureEnableMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updatePopGestureEnableMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)navigateBackMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithBinaryMessenger:(id)arg1 messageChannelSuffix:(id)arg2;
- (id)initWithBinaryMessenger:(id)arg1;

@end

