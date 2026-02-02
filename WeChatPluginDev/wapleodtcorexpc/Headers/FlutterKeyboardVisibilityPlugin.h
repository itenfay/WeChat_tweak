//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FlutterKeyboardVisibilityPlugin : NSObject
{
    _Bool _flutterEventListening;
    _Bool _isVisible;
    CDUnknownBlockType _flutterEventSink;
}

+ (void)registerWithRegistrar:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isVisible; // @synthesize isVisible=_isVisible;
@property(nonatomic) _Bool flutterEventListening; // @synthesize flutterEventListening=_flutterEventListening;
@property(copy, nonatomic) CDUnknownBlockType flutterEventSink; // @synthesize flutterEventSink=_flutterEventSink;
- (id)onCancelWithArguments:(id)arg1;
- (id)onListenWithArguments:(id)arg1 eventSink:(CDUnknownBlockType)arg2;
- (void)didHide;
- (void)willShow;
- (void)didShow;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

