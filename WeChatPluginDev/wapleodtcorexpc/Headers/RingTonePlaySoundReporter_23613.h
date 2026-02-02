//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface RingTonePlaySoundReporter_23613
{
    unsigned int _playDuration;
    unsigned int _startPlayTimeStamp;
    unsigned long long _roomid;
    unsigned long long _roomkey;
    NSString *_feedID;
    unsigned long long _feedType;
    unsigned long long _usageRange;
    NSString *_toUserName;
    unsigned long long _entryType;
    unsigned long long _applicationState;
    unsigned long long _callKitState;
    unsigned long long _muteType;
    unsigned long long _vibrateType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int startPlayTimeStamp; // @synthesize startPlayTimeStamp=_startPlayTimeStamp;
@property(nonatomic) unsigned long long vibrateType; // @synthesize vibrateType=_vibrateType;
@property(nonatomic) unsigned long long muteType; // @synthesize muteType=_muteType;
@property(nonatomic) unsigned int playDuration; // @synthesize playDuration=_playDuration;
@property(nonatomic) unsigned long long callKitState; // @synthesize callKitState=_callKitState;
@property(nonatomic) unsigned long long applicationState; // @synthesize applicationState=_applicationState;
@property(nonatomic) unsigned long long entryType; // @synthesize entryType=_entryType;
@property(copy, nonatomic) NSString *toUserName; // @synthesize toUserName=_toUserName;
@property(nonatomic) unsigned long long usageRange; // @synthesize usageRange=_usageRange;
@property(nonatomic) unsigned long long feedType; // @synthesize feedType=_feedType;
@property(copy, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
@property(nonatomic) unsigned long long roomkey; // @synthesize roomkey=_roomkey;
@property(nonatomic) unsigned long long roomid; // @synthesize roomid=_roomid;
- (id)fetchMuteState;
- (void)fetchMuteStateThenReport;
- (void)doReport;
- (void)recordStartPlayRing;
- (void)configueWithRing:(id)arg1;
- (id)reportOrderedFieldNameArr;
- (unsigned int)reportNSStringPreprocessType;
- (unsigned int)reportKvId;

@end

