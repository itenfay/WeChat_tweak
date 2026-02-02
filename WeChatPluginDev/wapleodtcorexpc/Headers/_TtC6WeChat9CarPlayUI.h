//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE, _TtC6WeChat17CarPlayController;

@interface _TtC6WeChat9CarPlayUI
{
    MISSING_TYPE *interfaceController;
    MISSING_TYPE *tabBarController;
    MISSING_TYPE *tabBarControllerElements;
    MISSING_TYPE *currentAlert;
    MISSING_TYPE *presentedController;
}

- (void).cxx_destruct;
- (id)init;
- (void)templateWillAppear:(id)arg1 animated:(_Bool)arg2;
- (void)showTabBarController;
- (void)replaceRootController:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
- (void)popController;
- (void)presentController:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
- (_Bool)isShowingNowPlayingController;
@property(nonatomic, retain) _TtC6WeChat17CarPlayController *presentedController; // @synthesize presentedController;
- (_Bool)isCarPlayConnected;
- (void)disconnectedCarplay;
- (void)connectedCarplayWithInterfaceController:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;
@property(nonatomic, readonly) _Bool enableCarPlay;
- (void)showRecentTalksController;
- (void)showEmptyCallRecords;
- (_Bool)isOnVoIP;
- (void)tabBarTemplate:(id)arg1 didSelectTemplate:(id)arg2;
- (void)dismissAlert;
- (void)showAlertWithTitle:(id)arg1 cancelTitle:(id)arg2 cancelHandler:(CDUnknownBlockType)arg3 confirmTitle:(id)arg4 confirmHandler:(CDUnknownBlockType)arg5;
- (void)showAlertWithTitle:(id)arg1 confirmHandler:(CDUnknownBlockType)arg2;
- (void)showAlertWithTitle:(id)arg1;
- (void)showActionSheetWithActionSheet:(id)arg1;

@end

