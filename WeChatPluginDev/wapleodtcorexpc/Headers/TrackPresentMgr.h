//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface TrackPresentMgr
{
    NSMutableDictionary *_trackRoomList;
    _Bool _isTrackRoomListLoaded;
}

- (void).cxx_destruct;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (id)getRoomPOIByUsername:(id)arg1;
- (_Bool)isTrackRoomExpired:(id)arg1;
- (id)getTrackRoomMembersByUsername:(id)arg1;
- (_Bool)isTrackRoomEmpty:(id)arg1;
- (_Bool)loadTrackRoomInfoList;
- (void)saveTrackRoomInfoList;
- (_Bool)writeToFile:(id)arg1 data:(id)arg2;
- (id)getTrackRoomInfoFromMessageWrag:(id)arg1;
- (void)handleTrackRoomInfoMessage:(id)arg1 withMessageWrap:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

