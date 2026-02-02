//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, NSString;
@protocol MsgImgFullScreenWindowDelegate;

@interface MsgImgFullScreenWindow
{
    NSString *_chatname;
    id <MsgImgFullScreenWindowDelegate> m_delegate;
    CMessageWrap *m_tempMessageWrap;
    _Bool m_bCloseForViewDetail;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *chatname; // @synthesize chatname=_chatname;
- (void)onShareVideoToTimeline:(_Bool)arg1;
- (void)onShareVideoToFriend:(id)arg1;
- (void)onClickFavVideoMenu;
- (_Bool)stopAtLastVideoFrameWhenPlayEnd;
- (void)onClosePlayerForViewDetail:(id)arg1;
- (void)onClosePlayer;
- (id)getWCNetworkMediaPlayer:(id)arg1;
- (void)onPlayAttachVideo:(id)arg1;
- (_Bool)isForAd:(id)arg1;
- (_Bool)viewAlreadyShow;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

