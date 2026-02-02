//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface RingToneHomePageActionReporter_23612
{
    unsigned long long _action;
    NSString *_feedID;
    unsigned long long _feedType;
    NSString *_toUserName;
    unsigned long long _usageRange;
    unsigned long long _valid;
    unsigned long long _vibrateType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long vibrateType; // @synthesize vibrateType=_vibrateType;
@property(nonatomic) unsigned long long valid; // @synthesize valid=_valid;
@property(nonatomic) unsigned long long usageRange; // @synthesize usageRange=_usageRange;
@property(copy, nonatomic) NSString *toUserName; // @synthesize toUserName=_toUserName;
@property(nonatomic) unsigned long long feedType; // @synthesize feedType=_feedType;
@property(copy, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
@property(nonatomic) unsigned long long action; // @synthesize action=_action;
- (void)report:(unsigned long long)arg1 withRing:(id)arg2;
- (id)reportOrderedFieldNameArr;
- (unsigned int)reportNSStringPreprocessType;
- (unsigned int)reportKvId;

@end

