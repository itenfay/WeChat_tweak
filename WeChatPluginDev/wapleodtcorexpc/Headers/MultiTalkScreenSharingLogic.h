//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMHalfScreenGuideView, MultiTalkScreenSharingPresentationViewController, NSString;
@protocol MultiTalkScreenSharingLogicDelegate;

@interface MultiTalkScreenSharingLogic : NSObject
{
    unsigned int _sessionID;
    id <MultiTalkScreenSharingLogicDelegate> _delegate;
    MMHalfScreenGuideView *_guideView;
    MultiTalkScreenSharingPresentationViewController *_presentingPresentationViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MultiTalkScreenSharingPresentationViewController *presentingPresentationViewController; // @synthesize presentingPresentationViewController=_presentingPresentationViewController;
@property(retain, nonatomic) MMHalfScreenGuideView *guideView; // @synthesize guideView=_guideView;
@property(readonly, nonatomic) __weak id <MultiTalkScreenSharingLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
- (void)screenSharingPresentationViewControllerDidResumeSharing:(id)arg1;
- (void)screenSharingPresentationViewControllerDidPauseSharing:(id)arg1;
- (void)screenSharingPresentationViewControllerDidStopSharing:(id)arg1;
- (void)screenSharingPresentationViewControllerDidStartSharing:(id)arg1;
- (void)screenSharingPresentationViewControllerWillDismiss:(id)arg1;
- (void)screenSharingPresentationViewController:(id)arg1 viewDidTransitionToSize:(struct CGSize)arg2;
- (void)screenSharingPresentationViewController:(id)arg1 viewWillTransitionToSize:(struct CGSize)arg2;
- (void)screenSharingPresentationViewController:(id)arg1 didClickSpeakerButton:(_Bool)arg2;
- (void)screenSharingPresentationViewController:(id)arg1 didClickMicrophoneButton:(_Bool)arg2;
- (void)screenSharingPresentationViewController:(id)arg1 didClickPenButton:(_Bool)arg2;
- (void)screenSharingPreparationViewControllerDidStartPresentation:(id)arg1;
- (void)documentPickerWasCancelled:(id)arg1;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)onFileBrowseOpeniCloud;
- (void)onFileBrowser:(id)arg1 clickFile:(id)arg2;
- (void)guideView:(id)arg1 acceptButtonDidClick:(id)arg2;
- (void)guideView:(id)arg1 cancelButtonDidClick:(id)arg2;
- (void)openBlackboardPresentation;
- (void)shareBlackboard;
- (void)openFilePresentationFromViewController:(id)arg1 withFileURL:(id)arg2;
- (void)openFilePresentationFromViewController:(id)arg1 withBrowseInfo:(id)arg2;
- (void)openFilePreparationFromViewController:(id)arg1 withFileURL:(id)arg2;
- (void)openFilePreparationFromViewController:(id)arg1 withBrowseInfo:(id)arg2;
- (void)openDocumentPickerViewController;
- (void)openFileBrowser;
- (id)createFileDetailViewControllerWithLogicController:(id)arg1;
- (void)showToastIfFileTypeNotSupported;
- (_Bool)supportsPDFFileWithPath:(id)arg1;
- (_Bool)supportsFileTypeForLogicController:(id)arg1;
- (id)fileDetailLogicControllerWithFileURL:(id)arg1;
- (id)fileDetailLogicControllerWithBrowseInfo:(id)arg1;
- (_Bool)showGuideIfNeeded;
- (void)didShowGuide;
- (_Bool)hasShowedGuide;
- (_Bool)shouldShowBadge;
- (void)shareFile;
- (void)dealloc;
@property(readonly, nonatomic) NSString *reportGroupId;
@property(readonly, nonatomic) NSString *chatroomName;
@property(readonly, nonatomic) id group;
- (id)initWithDelegate:(id)arg1;
- (void)updateTalkingUsernames:(id)arg1;
- (void)cleanUp;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

