//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterBasicMessageChannel;

@interface FlutterHostEvent : NSObject
{
    FlutterBasicMessageChannel *_channel;
}

- (void).cxx_destruct;
- (void)onAccountLogout;
- (void)onUpdateUIContext;
- (void)onEngineExitCallback:(CDUnknownBlockType)arg1;
- (id)initWithMessenger:(id)arg1;

@end

