//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMImageDetectUploader, MsgDataDownloadLogic, NSString, WCImageSearchEntity, WCWebSearchViewControllerNewH5;
@protocol WCImageSearchEventDelegate;

@interface WCImageSearchLogic
{
    int _detectImageEventID;
    id <WCImageSearchEventDelegate> _delegate;
    MsgDataDownloadLogic *_imageDownloadLogic;
    WCWebSearchViewControllerNewH5 *_webSearchVC;
    WCImageSearchEntity *_searchEntity;
    MMImageDetectUploader *_uploader;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMImageDetectUploader *uploader; // @synthesize uploader=_uploader;
@property(retain, nonatomic) WCImageSearchEntity *searchEntity; // @synthesize searchEntity=_searchEntity;
@property(retain, nonatomic) WCWebSearchViewControllerNewH5 *webSearchVC; // @synthesize webSearchVC=_webSearchVC;
@property(retain, nonatomic) MsgDataDownloadLogic *imageDownloadLogic; // @synthesize imageDownloadLogic=_imageDownloadLogic;
@property(nonatomic) int detectImageEventID; // @synthesize detectImageEventID=_detectImageEventID;
@property(nonatomic) __weak id <WCImageSearchEventDelegate> delegate; // @synthesize delegate=_delegate;
- (id)curViewController;
- (void)onDownloadCommonFail:(id)arg1;
- (void)onDownloadExpireFail:(id)arg1;
- (void)onDownloadSuccess:(id)arg1;
- (void)onSendPressImageInfoFail:(id)arg1 errorCode:(long long)arg2 errorMsg:(id)arg3 isNetworkError:(_Bool)arg4;
- (void)onSendPressImageInfoSuccess:(id)arg1;
- (void)onImageDetectUploadFinish:(unsigned int)arg1 context:(id)arg2 detectMediaInfo:(id)arg3;
- (void)tryStartDownloadImageIfNeed;
- (void)reportJumpLoadingView;
- (void)startRecognize;
- (void)dealloc;
- (id)initWithSearchEntity:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

