//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WAAppActionSheet;
@protocol WASessionContentLogicHandlerDelegate;

@interface WASessionContentLogicHandler : NSObject
{
    _Bool _isRequestedEnterSession;
    WAAppActionSheet *_actionSheet;
    NSMutableArray *_scanQrCodeBlackList;
    id <WASessionContentLogicHandlerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WASessionContentLogicHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onWAActionSheetInfoClicked;
- (void)onWAActionSheetClickButtonWithButtonTitle:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onRightBtnActionSheetClickCancel;
- (void)onRightBtnActionSheetClickExpose;
- (void)onRightBtnActionSheetClickReceiveSessionMessage;
- (void)onRightBtnActionSheetClickBlockSessionMessage;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)openWeAppAboutUs;
- (void)confirmReceiveMsgActionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)confirmBlockMsgActionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)getFromPagePath;
- (id)getFatherAppid;
- (unsigned int)getAppVersion;
- (unsigned long long)getDebugMode;
- (id)getSceneID;
- (id)getPageID;
- (unsigned long long)getEnterScene;
- (id)getSessionContentViewController;
- (id)getNavigationController;
- (id)getContact;
- (void)onResponseFetchKFSessionInfo:(id)arg1;
- (void)onResponseEnterSession:(id)arg1;
- (id)getScanQrCodeBlackList;
- (void)fetchKFSessionInfo;
- (void)onClickWeAppReceiveSessionMsg;
- (id)menubuttonTitleArray;
- (void)dismissRightBtnActionSheet;
- (void)showRightBtnActionSheetWithShowHomePage:(_Bool)arg1;
- (void)requestEnterSessionCGIWithSessionFrom:(id)arg1 enterScene:(unsigned long long)arg2 extInfo:(id)arg3 fromScene:(unsigned long long)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

