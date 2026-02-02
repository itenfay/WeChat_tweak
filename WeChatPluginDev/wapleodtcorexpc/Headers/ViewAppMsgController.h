//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, MMUIViewController, MMUIWindow, NSString, UIImageView;
@protocol ViewAppMsgControllerDelegate;

@interface ViewAppMsgController : NSObject
{
    MMUIViewController *m_fromVC;
    id <ViewAppMsgControllerDelegate> m_delegate;
    MMUIWindow *m_fullScreenWindow;
    CMessageWrap *m_curWrapMsg;
    struct CGRect m_originFrame;
    UIImageView *m_thumbImageVew;
}

- (void).cxx_destruct;
- (void)onShareVideoToTimeline:(_Bool)arg1;
- (void)onShareVideoToFriend:(id)arg1;
- (void)onClickFavVideoMenu;
- (void)onClosePlayerForViewDetail:(id)arg1;
- (void)jumpToDetail:(id)arg1;
- (void)onClosePlayer;
- (_Bool)stopAtLastVideoFrameWhenPlayEnd;
- (void)OnAppDataPreview:(id)arg1 MsgWrap:(id)arg2;
- (void)viewAppMsg:(id)arg1 msg:(id)arg2 originFrame:(struct CGRect)arg3 thumbImageView:(id)arg4 delegate:(id)arg5;
- (void)viewAppMsg:(id)arg1 msg:(id)arg2 originFrame:(struct CGRect)arg3 delegate:(id)arg4;
- (void)viewAppMsg:(id)arg1;
- (void)PreviewAppMsg:(id)arg1 Pop:(_Bool)arg2;
- (void)JumpToViewStreamVideo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

