//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface DiscoverEntranceSettingReporter
{
    NSString *_sessionId;
    unsigned long long _action;
    unsigned long long _entranceType;
    unsigned long long _switchType;
    NSString *_exposedItemsString;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *exposedItemsString; // @synthesize exposedItemsString=_exposedItemsString;
@property(nonatomic) unsigned long long switchType; // @synthesize switchType=_switchType;
@property(nonatomic) unsigned long long entranceType; // @synthesize entranceType=_entranceType;
@property(nonatomic) unsigned long long action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void)doReport;
- (id)reportOrderedFieldNameArr;
- (unsigned int)reportKvId;
- (void)setExposedItems:(id)arg1;

@end

