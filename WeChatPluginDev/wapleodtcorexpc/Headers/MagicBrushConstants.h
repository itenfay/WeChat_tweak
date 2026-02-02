//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSMutableSet, NSString;

@interface MagicBrushConstants
{
    NSMutableSet *_bizNameList;
    NSMutableSet *_publicServiceList;
    NSMutableSet *_bizNameWithPublicServiceList;
    NSMutableSet *_bizUseBootsNameList;
    NSMutableSet *_bizUseSCLNameList;
    NSMutableSet *_bizUseADPSNameList;
    NSMutableSet *_bizUseFeedBackNameList;
    NSMutableSet *_bizSupportFrameSetCoverList;
    NSMutableDictionary *_bizNameToProjectDic;
    NSMutableDictionary *_projectToBizNameDic;
    NSMutableDictionary *_allUDRExpt;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *allUDRExpt; // @synthesize allUDRExpt=_allUDRExpt;
@property(retain, nonatomic) NSMutableDictionary *projectToBizNameDic; // @synthesize projectToBizNameDic=_projectToBizNameDic;
@property(retain, nonatomic) NSMutableDictionary *bizNameToProjectDic; // @synthesize bizNameToProjectDic=_bizNameToProjectDic;
@property(retain, nonatomic) NSMutableSet *bizSupportFrameSetCoverList; // @synthesize bizSupportFrameSetCoverList=_bizSupportFrameSetCoverList;
@property(retain, nonatomic) NSMutableSet *bizUseFeedBackNameList; // @synthesize bizUseFeedBackNameList=_bizUseFeedBackNameList;
@property(retain, nonatomic) NSMutableSet *bizUseADPSNameList; // @synthesize bizUseADPSNameList=_bizUseADPSNameList;
@property(retain, nonatomic) NSMutableSet *bizUseSCLNameList; // @synthesize bizUseSCLNameList=_bizUseSCLNameList;
@property(retain, nonatomic) NSMutableSet *bizUseBootsNameList; // @synthesize bizUseBootsNameList=_bizUseBootsNameList;
@property(retain, nonatomic) NSMutableSet *bizNameWithPublicServiceList; // @synthesize bizNameWithPublicServiceList=_bizNameWithPublicServiceList;
@property(retain, nonatomic) NSMutableSet *publicServiceList; // @synthesize publicServiceList=_publicServiceList;
@property(retain, nonatomic) NSMutableSet *bizNameList; // @synthesize bizNameList=_bizNameList;
- (_Bool)getCoverABTest:(id)arg1;
- (id)getBizNameFromProjectId:(id)arg1;
- (id)getProjectIdFromBizName:(id)arg1;
- (_Bool)getExptFromBizName:(id)arg1;
- (id)setUDRExpt;
- (id)getPublicServiceSet:(id)arg1;
- (id)getSupportFrameSetCoverSet;
- (id)getUseFeedBackSet;
- (id)getUseADPSSet;
- (id)getUseSCLSet;
- (id)getUseBootsSet;
- (id)getBizNameWithPublicServiceSet;
- (id)getPublicServiceSet;
- (id)getBizNameSet;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

