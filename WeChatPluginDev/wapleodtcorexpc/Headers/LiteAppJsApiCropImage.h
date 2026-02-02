//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMImageCropperViewController, NSMutableArray, NSString;

@interface LiteAppJsApiCropImage
{
    NSMutableArray *_localIds;
    long long _totalCount;
    MMImageCropperViewController *_cropViewController;
}

- (void).cxx_destruct;
- (void)delayNotifyWeb:(id)arg1;
- (void)onLocalImageSaveFinish:(id)arg1;
- (void)imageCropperDidCancel:(id)arg1;
- (void)imageCropper:(id)arg1 didFinished:(id)arg2;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(_Bool)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

