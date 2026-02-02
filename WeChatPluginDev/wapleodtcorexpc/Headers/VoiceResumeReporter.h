//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, NSString;

@interface VoiceResumeReporter : NSObject
{
    unsigned int _action;
    unsigned int _stopReason;
    unsigned int _scene;
    unsigned int _totalTime;
    unsigned int _playTime;
    NSString *_actionResult;
    CMessageWrap *_msgWrap;
    NSString *_voiceId;
}

+ (void)updateVoiceStopReason:(unsigned int)arg1;
+ (void)reportAction:(unsigned int)arg1;
+ (id)reporter;
- (void).cxx_destruct;
@property(nonatomic) unsigned int playTime; // @synthesize playTime=_playTime;
@property(nonatomic) unsigned int totalTime; // @synthesize totalTime=_totalTime;
@property(retain, nonatomic) NSString *voiceId; // @synthesize voiceId=_voiceId;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
@property(nonatomic) unsigned int stopReason; // @synthesize stopReason=_stopReason;
@property(retain, nonatomic) NSString *actionResult; // @synthesize actionResult=_actionResult;
@property(nonatomic) unsigned int action; // @synthesize action=_action;
- (void)afterReport;
- (void)realReport;
- (void)beforeReport;
- (void)report;

@end

