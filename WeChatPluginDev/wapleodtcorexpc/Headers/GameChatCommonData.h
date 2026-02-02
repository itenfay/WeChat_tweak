//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BanAction, GameChatErrorTipBar, NSMutableArray, NSMutableDictionary, NSString, SafeMutableDictionary;

@interface GameChatCommonData
{
    NSString *_topGroupName;
    BanAction *_banJoinGroup;
    BanAction *_banCreateGroup;
    SafeMutableDictionary *_recentlyTickleMap;
    GameChatErrorTipBar *_banBtn;
    NSMutableDictionary *_dbDataDict;
    NSMutableArray *_normalUserArray;
    double _normalUserArrayTimeStamp;
}

- (void).cxx_destruct;
@property(nonatomic) double normalUserArrayTimeStamp; // @synthesize normalUserArrayTimeStamp=_normalUserArrayTimeStamp;
@property(retain, nonatomic) NSMutableArray *normalUserArray; // @synthesize normalUserArray=_normalUserArray;
@property(retain, nonatomic) NSMutableDictionary *dbDataDict; // @synthesize dbDataDict=_dbDataDict;
@property(retain, nonatomic) GameChatErrorTipBar *banBtn; // @synthesize banBtn=_banBtn;
@property(retain, nonatomic) SafeMutableDictionary *recentlyTickleMap; // @synthesize recentlyTickleMap=_recentlyTickleMap;
@property(retain, nonatomic) BanAction *banCreateGroup; // @synthesize banCreateGroup=_banCreateGroup;
@property(retain, nonatomic) BanAction *banJoinGroup; // @synthesize banJoinGroup=_banJoinGroup;
@property(retain, nonatomic) NSString *topGroupName; // @synthesize topGroupName=_topGroupName;
- (void)savePbMessage:(id)arg1 withKey:(id)arg2 expireDuration:(double)arg3 tablePrefix:(id)arg4;
- (_Bool)removeAllChatRoomData;
- (void)savePbMessage:(id)arg1 withKey:(id)arg2 tablePrefix:(id)arg3;
- (id)getChatRoomDataOfCustomKey:(id)arg1 pbClass:(Class)arg2 tablePrefix:(id)arg3;
- (id)getPbOfCustomKey:(id)arg1 pbClass:(Class)arg2 tablePrefix:(id)arg3;
- (void)savePbMessage:(id)arg1 withKey:(id)arg2 expireDuration:(double)arg3;
- (void)savePbMessage:(id)arg1 withKey:(id)arg2;
- (id)getPbOfCustomKey:(id)arg1 pbClass:(Class)arg2;
- (id)getChatRoomPbTableWithPrefix:(id)arg1;
- (id)getChatRoomPbTable;
- (_Bool)isDataExpired:(id)arg1;
- (_Bool)isTimeExpired:(double)arg1 expireTime:(double)arg2 info:(id)arg3;
- (id)pbCategoryKey:(id)arg1;
- (_Bool)checkCanCreateGroup;
- (_Bool)checkBanAction:(id)arg1;
- (_Bool)checkCanJoinGroup;
- (void)removeBanBtn;
- (void)showBanBtnWithText:(id)arg1;
- (void)updateBanStatus:(id)arg1;
- (id)getExpireRecordWithKey:(id)arg1;
- (void)saveExpireRecordValue:(id)arg1 maxAge:(double)arg2 key:(id)arg3;
- (id)init;
- (void)saveChannelInfo:(id)arg1 chatRoomName:(id)arg2;
- (id)getCachedChannelInfo:(id)arg1;
- (void)saveMsgResponse:(id)arg1 ofChannel:(long long)arg2 chatRoomName:(id)arg3;
- (id)getCachedMsgResponseOfChannel:(long long)arg1 chatRoomName:(id)arg2;
- (id)cacheKeyForChannelId:(long long)arg1 chatRoomName:(id)arg2 category:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

