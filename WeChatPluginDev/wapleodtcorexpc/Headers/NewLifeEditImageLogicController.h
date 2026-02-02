//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EditImageIntialView, MMAsset, MMLoadingView, NSString, UIImage, UIViewController;
@protocol NewLifeEditImageLogicControllerDelegate;

@interface NewLifeEditImageLogicController : NSObject
{
    MMAsset *_asset;
    UIImage *_originalImage;
    id <NewLifeEditImageLogicControllerDelegate> _delegate;
    EditImageIntialView *_editImageInitialView;
    UIViewController *_currentViewController;
    MMLoadingView *_loadingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) __weak UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(retain, nonatomic) EditImageIntialView *editImageInitialView; // @synthesize editImageInitialView=_editImageInitialView;
@property(nonatomic) __weak id <NewLifeEditImageLogicControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImage *originalImage; // @synthesize originalImage=_originalImage;
@property(retain, nonatomic) MMAsset *asset; // @synthesize asset=_asset;
- (void)getOriginalImage:(CDUnknownBlockType)arg1;
- (void)getDisplayImage:(CDUnknownBlockType)arg1;
- (void)OnClickEditImageDoneBarButton;
- (void)OnClickEditImageBackBarButton;
- (void)realStartEditImageFromViewController:(id)arg1;
- (void)startEditImageFromViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

