//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface KvReportItem30752
{
    _Bool _hasNewMsg_25;
    unsigned int _scene_21;
    unsigned int _sessionId_22;
    unsigned int _enterTime_23;
    unsigned int _newMsgContactCount_26;
    unsigned int _enterPos_27;
    NSString *_clickContactUserName_24;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int enterPos_27; // @synthesize enterPos_27=_enterPos_27;
@property(nonatomic) unsigned int newMsgContactCount_26; // @synthesize newMsgContactCount_26=_newMsgContactCount_26;
@property(nonatomic) _Bool hasNewMsg_25; // @synthesize hasNewMsg_25=_hasNewMsg_25;
@property(retain, nonatomic) NSString *clickContactUserName_24; // @synthesize clickContactUserName_24=_clickContactUserName_24;
@property(nonatomic) unsigned int enterTime_23; // @synthesize enterTime_23=_enterTime_23;
@property(nonatomic) unsigned int sessionId_22; // @synthesize sessionId_22=_sessionId_22;
@property(nonatomic) unsigned int scene_21; // @synthesize scene_21=_scene_21;
- (id)reportOrderedFieldNameArr;
- (unsigned int)reportKvId;

@end

