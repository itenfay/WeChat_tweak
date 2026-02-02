//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface FlutterEmbedderKeyResponder : NSObject
{
    CDUnknownBlockType _sendEvent;
    NSMutableDictionary *_pressingRecords;
    unsigned long long _modifierFlagOfInterestMask;
    unsigned long long _lastModifierFlagsOfInterest;
    unsigned long long _responseId;
    NSMutableDictionary *_pendingResponses;
}

@property(readonly, retain, nonatomic) NSMutableDictionary *pendingResponses; // @synthesize pendingResponses=_pendingResponses;
@property(nonatomic) unsigned long long responseId; // @synthesize responseId=_responseId;
@property(nonatomic) unsigned long long lastModifierFlagsOfInterest; // @synthesize lastModifierFlagsOfInterest=_lastModifierFlagsOfInterest;
@property(nonatomic) unsigned long long modifierFlagOfInterestMask; // @synthesize modifierFlagOfInterestMask=_modifierFlagOfInterestMask;
@property(readonly, retain, nonatomic) NSMutableDictionary *pressingRecords; // @synthesize pressingRecords=_pressingRecords;
@property(readonly, copy, nonatomic) CDUnknownBlockType sendEvent; // @synthesize sendEvent=_sendEvent;
- (unsigned int)adjustModifiers:(id)arg1;
- (unsigned int)fixSidedFlags:(int)arg1 withLeftFlag:(int)arg2 withRightFlag:(int)arg3 withLeftKey:(unsigned short)arg4 withRightKey:(unsigned short)arg5 withKeyCode:(unsigned short)arg6 keyDown:(_Bool)arg7 forFlags:(unsigned int)arg8;
- (void)handleResponse:(_Bool)arg1 forId:(unsigned long long)arg2;
- (void)handlePressEnd:(id)arg1 callback:(id)arg2;
- (void)handlePressBegin:(id)arg1 callback:(id)arg2;
- (void)synthesizeModifierEventOfType:(_Bool)arg1 timestamp:(double)arg2 keyCode:(unsigned int)arg3;
- (void)sendEmptyEvent;
- (void)sendPrimaryFlutterEvent:(const CDStruct_19ee6a98 *)arg1 callback:(id)arg2;
- (void)updateKey:(unsigned long long)arg1 asPressed:(unsigned long long)arg2;
- (void)synthesizeCapsLockTapWithTimestamp:(double)arg1;
- (void)synchronizeModifiers:(id)arg1;
- (void)handlePress:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithSendEvent:(CDUnknownBlockType)arg1;

@end

