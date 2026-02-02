//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UILabel;

@interface AppTrackRoomMessageCellView
{
    UILabel *m_statusLabel;
}

- (void).cxx_destruct;
- (void)OnTrackRoomMemberChange:(id)arg1 withNewMemberList:(id)arg2;
- (void)onTouchUpInside;
- (void)layoutContentView;
- (_Bool)canOpenTrackRoom;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

