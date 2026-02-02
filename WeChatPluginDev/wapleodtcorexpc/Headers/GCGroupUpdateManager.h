//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GCGroupServer, GameLifeTabBarViewController, GetMyChatroomResponse, NSString;

@interface GCGroupUpdateManager
{
    int _previousSceneType;
    GameLifeTabBarViewController *_willPushTabVc;
    GetMyChatroomResponse *_lastestRoomResponse;
    GCGroupServer *_groupServer;
}

- (void).cxx_destruct;
@property(nonatomic) int previousSceneType; // @synthesize previousSceneType=_previousSceneType;
@property(retain, nonatomic) GCGroupServer *groupServer; // @synthesize groupServer=_groupServer;
@property(retain, nonatomic) GetMyChatroomResponse *lastestRoomResponse; // @synthesize lastestRoomResponse=_lastestRoomResponse;
@property(nonatomic) __weak GameLifeTabBarViewController *willPushTabVc; // @synthesize willPushTabVc=_willPushTabVc;
- (void)endUpdate;
- (void)registerGroupUpdateExt:(id)arg1;
- (void)onChatRoomResponseUpdate:(id)arg1;
- (void)tabVcPushed:(id)arg1;
- (void)triggerGroupStatusUpdate:(id)arg1;
- (int)innerGetSceneType;
- (int)getSceneType;
- (_Bool)isVcTabBarVcAndSelectChatV2:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

