//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveRedPacketMessage, MemoryMappedKV, NSMutableDictionary, NSString;

@interface MMFinderLiveRedPacketCache
{
    MMFinderLiveRedPacketMessage *_taggedRedPacketMessage;
    NSMutableDictionary *_redPacketDictionary;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *redPacketDictionary; // @synthesize redPacketDictionary=_redPacketDictionary;
@property(retain, nonatomic) MMFinderLiveRedPacketMessage *taggedRedPacketMessage; // @synthesize taggedRedPacketMessage=_taggedRedPacketMessage;
- (void)clearOutdatedDataForStatusOpenedInMMKV:(id)arg1;
- (_Bool)isOpenedForRedPacketItem:(id)arg1;
- (void)redPacketItemDidOpen:(id)arg1;
- (id)mmkvKeyForStatusOpenWithItem:(id)arg1;
- (void)clearTagRedPacket;
- (void)tagRedPacketWithMessage:(id)arg1;
- (id)queryRedPacketItemsForTaskId:(id)arg1;
- (id)redPacketItemForId:(id)arg1;
- (void)addRedPacketItem:(id)arg1 forId:(id)arg2;
@property(readonly, nonatomic) MemoryMappedKV *mmkv;
- (id)mmkvID;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

