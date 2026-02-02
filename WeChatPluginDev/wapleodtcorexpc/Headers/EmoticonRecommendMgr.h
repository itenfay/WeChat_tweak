//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonServerTip, NSString;

@interface EmoticonRecommendMgr
{
    EmoticonServerTip *m_serverTip;
    NSString *m_lastEmotionStoreNodePid;
    NSString *m_lastEmotionStoreContent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EmoticonServerTip *m_serverTip; // @synthesize m_serverTip;
- (void)onGetEmoticonClickFlag:(unsigned int)arg1 downloadFlag:(unsigned int)arg2 pid:(id)arg3;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onServerTipsUpdated;
- (void)setEmoticonStoreTipsFromNode:(struct XmlReaderNode_t *)arg1;
- (_Bool)hasBoardViewPlusNew;
- (_Bool)ClearNew;
- (_Bool)lastUpdateTimeNoneZero;
- (void)resetLastUpdateTime;
- (_Bool)isTipsExpired;
- (id)iconUrl;
- (id)tipString;
- (_Bool)isFreeTip;
- (_Bool)HasNew;
- (void)clearDesignerEmojiEntranceNew;
- (_Bool)hasDesignerEmojiEntranceNew;
- (_Bool)clearPersonalNew;
- (_Bool)hasPersonalNew;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

