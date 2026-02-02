//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterEventChannel, NSString;

@interface FlutterAvatarPlugin : NSObject
{
    FlutterEventChannel *_m_avatar_changed_event_channel;
    CDUnknownBlockType _m_avatar_changed_event_sink;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType m_avatar_changed_event_sink; // @synthesize m_avatar_changed_event_sink=_m_avatar_changed_event_sink;
@property(retain, nonatomic) FlutterEventChannel *m_avatar_changed_event_channel; // @synthesize m_avatar_changed_event_channel=_m_avatar_changed_event_channel;
- (void)onHeadImageChange:(id)arg1;
- (id)onCancelWithArguments:(id)arg1;
- (id)onListenWithArguments:(id)arg1 eventSink:(CDUnknownBlockType)arg2;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToEngine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

