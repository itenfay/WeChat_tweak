//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WABGAudioMinimizationProxy : NSObject
{
}

+ (void)prepareForMinimizationCoverStyle:(id)arg1;
+ (_Bool)hasVoipBGAudio;
+ (void)stopBGAudio;
+ (_Bool)dismiss:(id)arg1;
+ (_Bool)show:(id)arg1;
+ (_Bool)updateState:(long long)arg1 forHost:(id)arg2;
+ (void)clearBGAudioInfoForHost:(id)arg1;
+ (id)bgAudioInfo:(id)arg1;
+ (void)updateBGAudioInfo:(id)arg1 forHost:(id)arg2;
+ (_Bool)isBGAudioEnabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

