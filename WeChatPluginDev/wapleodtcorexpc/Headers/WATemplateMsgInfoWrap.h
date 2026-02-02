//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface WATemplateMsgInfoWrap
{
    _Bool _globalSwitchOFF;
    _Bool _globalAudioSwitchOFF;
    NSMutableArray *_banAppIdList;
    NSMutableArray *_msgRecordList;
}

+ (void)initialize;
+ (void)PBArrayAdd_msgRecordList;
+ (void)PBArrayAdd_globalAudioSwitchOFF;
+ (void)PBArrayAdd_banAppIdList;
+ (void)PBArrayAdd_globalSwitchOFF;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *msgRecordList; // @synthesize msgRecordList=_msgRecordList;
@property(nonatomic) _Bool globalAudioSwitchOFF; // @synthesize globalAudioSwitchOFF=_globalAudioSwitchOFF;
@property(retain, nonatomic) NSMutableArray *banAppIdList; // @synthesize banAppIdList=_banAppIdList;
@property(nonatomic) _Bool globalSwitchOFF; // @synthesize globalSwitchOFF=_globalSwitchOFF;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

