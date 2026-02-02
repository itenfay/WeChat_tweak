//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveShareLiveQRCodeInfo, NSString, WCFinderContact;

@interface MMFinderLiveLegacyGenericQrCodeViewController
{
    unsigned int _isSpamModPic;
    WCFinderContact *_anchorContact;
    FinderLiveShareLiveQRCodeInfo *_qrCodeInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveShareLiveQRCodeInfo *qrCodeInfo; // @synthesize qrCodeInfo=_qrCodeInfo;
@property(nonatomic) unsigned int isSpamModPic; // @synthesize isSpamModPic=_isSpamModPic;
@property(retain, nonatomic) WCFinderContact *anchorContact; // @synthesize anchorContact=_anchorContact;
- (void)reportShareQRCodeAction:(unsigned long long)arg1;
- (void)clearBackgroundImage;
- (void)setBackgroundImage:(id)arg1;
- (void)onLiveGenericQrCodeViewBackgroundImageChangeRequested:(id)arg1;
- (void)onShareButtonInvoked;
- (void)onSaveImageButtonInvoked;
- (void)onCancelButtonInvoked;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (id)reporter;
- (id)createQrCodeView;
- (void)fetchDetailsQRCodeInfoWithLiveTaskId:(id)arg1 contact:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

