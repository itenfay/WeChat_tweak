//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, VoIPMPSystemAuthNativeAPICallback;

@interface VoIPMPSystemAuthNativeImpl : NSObject
{
    VoIPMPSystemAuthNativeAPICallback *_callback;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) VoIPMPSystemAuthNativeAPICallback *callback; // @synthesize callback=_callback;
- (void)requestAsync:(unsigned long long)arg1 type:(int)arg2;
- (void)requestCameraAsync:(unsigned long long)arg1;
- (void)requestMicrophoneAsync:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

