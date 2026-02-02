//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface RingToneSystemMsgExposureReporter
{
    unsigned int _titleType;
    unsigned long long _type;
    unsigned long long _action;
    NSString *_wording;
    NSString *_feedID;
    NSString *_uin;
    NSString *_userName;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int titleType; // @synthesize titleType=_titleType;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *uin; // @synthesize uin=_uin;
@property(copy, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
@property(copy, nonatomic) NSString *wording; // @synthesize wording=_wording;
@property(nonatomic) unsigned long long action; // @synthesize action=_action;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)doReport;
- (unsigned int)reportKvId;
- (id)reportOrderedFieldNameArr;
- (unsigned int)reportNSStringPreprocessType;

@end

