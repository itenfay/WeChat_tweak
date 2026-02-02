//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIViewController;
@protocol TakeOrSelectHeadImageLogicDelegate;

@interface TakeOrSelectHeadImageLogic
{
    UIViewController *m_viewController;
    id <TakeOrSelectHeadImageLogicDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithViewController:(id)arg1 delegate:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showGetHeadImage;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)showImagePikcer:(long long)arg1;
- (id)getNavigationController;
- (id)getViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

