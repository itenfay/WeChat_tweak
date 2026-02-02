//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, WCEditImageViewController;

@interface LiteAppJsApiEditImage
{
    NSMutableArray *_localIds;
    long long _totalCount;
    WCEditImageViewController *_editImageViewController;
}

- (void).cxx_destruct;
- (void)delayNotifyWeb:(id)arg1;
- (void)onLocalImageSaveFinish:(id)arg1;
- (void)editImageViewControllerDidCancel:(id)arg1;
- (void)editImageViewController:(id)arg1 didFinishEditingImage:(id)arg2;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(_Bool)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

