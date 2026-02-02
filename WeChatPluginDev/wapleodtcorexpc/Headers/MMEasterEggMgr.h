//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableSet, NSString;

@interface MMEasterEggMgr
{
    _Bool m_isShowEgg;
    unsigned int m_uiEasterEggLastUpdateTime;
    NSMutableArray *m_arrEgg;
    NSMutableSet *m_disabledAppIdSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *disabledAppIdSet; // @synthesize disabledAppIdSet=m_disabledAppIdSet;
- (void)disableEasterEggWithAppId:(id)arg1;
- (id)easterEggWithMessage:(id)arg1;
- (void)setupEasterEggAttributesToMessage:(id)arg1;
- (_Bool)isShowEasterEgg;
- (id)init;
- (id)disabledAppIdListKey;
- (void)decodeDisabledAppIdList;
- (void)encodeDisabledAppIdList;
- (id)parseEggAnimationFromAnimTypeNode:(struct XmlReaderNode_t *)arg1 dirPath:(id)arg2 clientEggVersion:(long long)arg3 ignoreImageName:(_Bool)arg4;
- (id)parseTopAnimationFromTopAnimNode:(struct XmlReaderNode_t *)arg1 dirPath:(id)arg2;
- (void)onEmoticonResDeleteForSubType:(unsigned int)arg1;
- (void)onEmoticonResUpdateForSubType:(unsigned int)arg1 dirPath:(id)arg2;
- (void)initEggWithConfigDirPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

