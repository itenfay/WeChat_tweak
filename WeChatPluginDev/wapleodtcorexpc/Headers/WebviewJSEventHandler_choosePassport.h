//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSString;

@interface WebviewJSEventHandler_choosePassport
{
    unsigned long long _sourceType;
    NSDictionary *_scanDetailMsgMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *scanDetailMsgMap; // @synthesize scanDetailMsgMap=_scanDetailMsgMap;
@property(nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
- (_Bool)isVerticalScreen;
- (void)reportMode:(unsigned long long)arg1 action:(unsigned long long)arg2;
- (void)onLocalImageSaveFinish:(id)arg1;
- (void)WCPayScanPassportViewControllerFail:(id)arg1;
- (void)WCPayScanPassportViewControllerCancel:(id)arg1;
- (void)WCPayScanPassportViewController:(id)arg1 DidDetectImageArr:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)reportDetail:(unsigned long long)arg1;
- (void)report:(unsigned long long)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)asyncHandleCancel;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

