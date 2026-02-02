//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface WXTalkPresentMgr
{
    NSMutableDictionary *_infoList;
    _Bool _isInfoListLoaded;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *infoList; // @synthesize infoList=_infoList;
- (_Bool)isTrackMode:(id)arg1;
- (_Bool)isTalkRoomEmpty:(id)arg1;
- (_Bool)loadWXTalkRoomInfoList;
- (void)saveWXTalkRoomInfoList;
- (_Bool)writeToFile:(id)arg1 data:(id)arg2;
- (void)handleWXTalkRoomInfoMessage:(id)arg1 withMessageWrap:(id)arg2;
- (id)getRoomInfoFromMessageWrap:(id)arg1;
- (void)OnMsgNotAddDBNotify:(id)arg1 MsgWrap:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

