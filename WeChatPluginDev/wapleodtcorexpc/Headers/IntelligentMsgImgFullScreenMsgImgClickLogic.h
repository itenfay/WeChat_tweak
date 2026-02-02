//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MsgImgFullScreenWindow, NSArray, NSString, ViewAppMsgController;
@protocol IntelligentMsgImgFullScreenMsgImgClickLogicDelegate;

@interface IntelligentMsgImgFullScreenMsgImgClickLogic : NSObject
{
    ViewAppMsgController *m_viewAppMsgController;
    MsgImgFullScreenWindow *m_imgFullScreenWnd;
    NSArray *_m_arrResultMessagr;
    id <IntelligentMsgImgFullScreenMsgImgClickLogicDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IntelligentMsgImgFullScreenMsgImgClickLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) NSArray *m_arrResultMessagr; // @synthesize m_arrResultMessagr=_m_arrResultMessagr;
- (void)onImgMsgLocate:(id)arg1;
- (id)getViewController;
- (_Bool)shouldNeedShowImgFastBrowseBtn:(id)arg1;
- (_Bool)onCurrentPageMsgImgDataMatch:(id)arg1;
- (void)onShowImgMsgLocate:(id)arg1 imageScrollView:(id)arg2 vc:(id)arg3;
- (void)onMsgImgPreviewDataRequired:(id)arg1;
- (void)onMsgImgWindowWillHideToMsg:(id)arg1 extraInfo:(id)arg2;
- (void)onImgMsgLocate:(id)arg1 vc:(id)arg2;
- (void)onSightViewDetail:(id)arg1 vc:(id)arg2;
- (void)onPlayAttachVideo:(id)arg1 vc:(id)arg2;
- (void)onJumpToViewDetail:(id)arg1;
- (void)jumpToDetail:(id)arg1;
- (_Bool)messageWrapMatchImage:(id)arg1;
- (void)previewImage:(id)arg1 originFrame:(struct CGRect)arg2;
- (void)PreviewImage:(id)arg1 MsgSquareThumb:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

