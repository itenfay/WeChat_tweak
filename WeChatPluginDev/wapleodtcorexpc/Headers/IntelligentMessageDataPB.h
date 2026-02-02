//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface IntelligentMessageDataPB
{
    unsigned int _currentIntelligentMsgVersion;
    unsigned int _strartRepairIntelligentMsgCurrentVersion;
    NSString *_lastUpdateModelId;
    NSMutableDictionary *_modelKeyInfoDic;
    NSMutableDictionary *_updateModelItemDic;
    long long _faceClusterSequence;
}

+ (void)initialize;
+ (void)PBArrayAdd_strartRepairIntelligentMsgCurrentVersion;
+ (void)PBArrayAdd_currentIntelligentMsgVersion;
+ (void)PBArrayAdd_faceClusterSequence;
+ (void)PBArrayAdd_updateModelItemDic;
+ (void)PBArrayAdd_modelKeyInfoDic;
+ (void)PBArrayAdd_lastUpdateModelId;
- (void).cxx_destruct;
@property(nonatomic) unsigned int strartRepairIntelligentMsgCurrentVersion; // @synthesize strartRepairIntelligentMsgCurrentVersion=_strartRepairIntelligentMsgCurrentVersion;
@property(nonatomic) unsigned int currentIntelligentMsgVersion; // @synthesize currentIntelligentMsgVersion=_currentIntelligentMsgVersion;
@property(nonatomic) long long faceClusterSequence; // @synthesize faceClusterSequence=_faceClusterSequence;
@property(retain, nonatomic) NSMutableDictionary *updateModelItemDic; // @synthesize updateModelItemDic=_updateModelItemDic;
@property(retain, nonatomic) NSMutableDictionary *modelKeyInfoDic; // @synthesize modelKeyInfoDic=_modelKeyInfoDic;
@property(retain, nonatomic) NSString *lastUpdateModelId; // @synthesize lastUpdateModelId=_lastUpdateModelId;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

