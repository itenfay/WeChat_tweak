//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AddEmoticonWrap, EmoticonCameraReportObject, EmoticonCheckCameraFollowLogic, EmoticonCustomManageAddLogic, MMUIViewController, NSString;
@protocol EmoticonCustomAddLogicControllerDelegate, MMUIViewControllerDelegate;

@interface EmoticonCustomAddLogicController : NSObject
{
    MMUIViewController *m_tmpViewController;
    EmoticonCameraReportObject *m_reportObject;
    AddEmoticonWrap *m_addEmoticonWrap;
    _Bool m_needAsyncUpload;
    _Bool _useNewSnackStyle;
    id <MMUIViewControllerDelegate> _vcDelegate;
    id <EmoticonCustomAddLogicControllerDelegate> _delegate;
    unsigned long long _recentPulledByCameraEmoticonLabelTime;
    EmoticonCustomManageAddLogic *_addEmoticonLogic;
    EmoticonCheckCameraFollowLogic *_checkCameraFollowLogic;
}

+ (SEL)selectorForEmoticonAsyncUploadOperate:(unsigned long long)arg1;
+ (id)localizedStringForEmoticonAsyncUploadOperate:(unsigned long long)arg1;
+ (_Bool)isEmoticonCameraSceneRedEnvelope:(unsigned int)arg1;
+ (_Bool)shouldForbiddenEmoticonCameraNewYearPendantMessageTail;
+ (_Bool)shouldEnableEmoticonCameraNewYearPendant;
+ (_Bool)shouldShowEmoticonCameraFollow;
+ (_Bool)shouldShowEmoticonCameraEntrance;
- (void).cxx_destruct;
@property(retain, nonatomic) EmoticonCheckCameraFollowLogic *checkCameraFollowLogic; // @synthesize checkCameraFollowLogic=_checkCameraFollowLogic;
@property(retain, nonatomic) EmoticonCustomManageAddLogic *addEmoticonLogic; // @synthesize addEmoticonLogic=_addEmoticonLogic;
@property(nonatomic) unsigned long long recentPulledByCameraEmoticonLabelTime; // @synthesize recentPulledByCameraEmoticonLabelTime=_recentPulledByCameraEmoticonLabelTime;
@property(nonatomic) _Bool useNewSnackStyle; // @synthesize useNewSnackStyle=_useNewSnackStyle;
@property(nonatomic) __weak id <EmoticonCustomAddLogicControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MMUIViewControllerDelegate> vcDelegate; // @synthesize vcDelegate=_vcDelegate;
- (void)onEmoticonCameraClose;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)handleEmoticonUploadInfo:(id)arg1 source:(long long)arg2;
- (void)handleGIFInfo:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)onAddEmoticonPendingUploadWithWrap:(id)arg1;
- (void)AddEmoticonFinishedWithWrap:(id)arg1 IsSuccessed:(_Bool)arg2;
- (void)onEmoticonCameraDidTakeImgWithUploadInfo:(id)arg1 viewController:(id)arg2;
- (id)getViewController;
- (void)onDeleteButtonClick;
- (void)onReuploadButtonClick;
- (void)handleEmoticonAsyncUploadWithWrap:(id)arg1;
- (_Bool)deleteEmoticonWithWrap:(id)arg1;
- (_Bool)startAddEmoticonWithWrap:(id)arg1;
- (_Bool)startExchangePackAndAddEmoticonWithWrap:(id)arg1;
- (void)DismissModalViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)DismissModalViewControllerAnimated:(_Bool)arg1;
- (_Bool)realDoTakePhotoWithModel:(id)arg1;
- (_Bool)showTakePhotoWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

