//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, RingToneDetail;

@interface RingTone
{
    _Bool _isPlaying;
    unsigned int _musicSid;
    unsigned long long _objectId;
    NSString *_nonceId;
    double _startTime;
    double _endTime;
    NSString *_userName;
    unsigned long long _type;
    RingToneDetail *_detail;
}

+ (void)initialize;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_musicSid;
+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_endTime;
+ (void)PBArrayAdd_startTime;
+ (void)PBArrayAdd_nonceId;
+ (void)PBArrayAdd_objectId;
- (void).cxx_destruct;
@property(retain, nonatomic) RingToneDetail *detail; // @synthesize detail=_detail;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned int musicSid; // @synthesize musicSid=_musicSid;
@property(copy, nonatomic) NSString *nonceId; // @synthesize nonceId=_nonceId;
@property(nonatomic) unsigned long long objectId; // @synthesize objectId=_objectId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (unsigned long long)identifier;
- (_Bool)isGlobalRing;
- (_Bool)isCropTimeValid;
- (_Bool)isValid;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFinderDataItem:(id)arg1;
- (id)initFromWCSetting:(id)arg1;
- (id)genSimplePB;
- (id)genPB;
- (id)initFromPB:(id)arg1;
- (id)initWithRingbackSetting:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

