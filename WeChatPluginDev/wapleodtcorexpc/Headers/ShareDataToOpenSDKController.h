//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, MMScrollActionSheet, MsgToDeviceLogic, NSArray, NSMutableArray, NSString, ShareTo3rdAppSettingViewController, UIDocumentInteractionController, UIView, UIViewController, WCDataItem;
@protocol ShareDataToOpenSDKControllerDelegate;

@interface ShareDataToOpenSDKController
{
    MMScrollActionSheet *m_shareSheet;
    NSMutableArray *m_deviceSheetSection;
    NSMutableArray *m_3rdAppSection;
    UIViewController *fromViewController;
    CMessageWrap *m_oMessageWrap;
    WCDataItem *m_oDataItem;
    NSString *m_nsUsrName;
    NSString *_tmpFilePath;
    NSString *_tmpFileName;
    NSArray *m_arrLanDevices;
    UIDocumentInteractionController *m_vcDocument;
    ShareTo3rdAppSettingViewController *_appSettingVC;
    id <ShareDataToOpenSDKControllerDelegate> m_delegate;
    long long m_opScene;
    UIView *m_viewToShow;
    MsgToDeviceLogic *_ilinkDeviceLogic;
}

+ (id)shareInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) MsgToDeviceLogic *ilinkDeviceLogic; // @synthesize ilinkDeviceLogic=_ilinkDeviceLogic;
@property(nonatomic) __weak UIView *m_viewToShow; // @synthesize m_viewToShow;
@property(nonatomic) long long m_opScene; // @synthesize m_opScene;
@property(nonatomic) __weak id <ShareDataToOpenSDKControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void)reloadActionSheet;
- (void)onActionSheetConfirmCancel;
- (id)actionSheetCellForLanDevice:(id)arg1;
- (id)itemForLanDevice:(id)arg1;
- (void)onMsgToDeviceSending:(id)arg1 progress:(double)arg2;
- (void)onMsgToDeviceFail:(id)arg1 type:(long long)arg2;
- (void)onMsgToDeviceSuccess:(id)arg1;
- (void)onILinkDeviceUpdate:(id)arg1;
- (void)onWCLanDeviceForwardMsgProgressUpdate:(double)arg1 toDevice:(id)arg2;
- (void)onWCLanDeviceForwardMsgFinishedWithErrCode:(int)arg1 toDevice:(id)arg2;
- (void)onWCLanDeviceFoundDeviceListUpdated:(id)arg1;
- (void)onShouldReloadView;
- (void)documentInteractionController:(id)arg1 didEndSendingToApplication:(id)arg2;
- (void)OnOpenByApp:(id)arg1;
- (id)copyFileToTmpPathAndRetPath:(id)arg1;
- (id)GetFilePath;
- (_Bool)hasMessageTypeSupportOpenBySystem;
- (id)customViewForItem:(id)arg1;
- (id)customViewForRow:(long long)arg1;
- (_Bool)scrollActionSheetShouldCancel:(id)arg1;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)shareTimeLineToOpenSDKByDataItem:(id)arg1 mediaItem:(id)arg2;
- (void)shareMsgToOpenSDKByMessageWrap:(id)arg1;
- (_Bool)checkAvailablityOfMsg:(id)arg1;
- (id)make3rdAppSection;
- (id)getCurrentVC;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

