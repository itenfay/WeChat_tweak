//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMPickLocationViewController, MMUIView, NSMutableArray, NSString, UINavigationController;
@protocol MailRTEToolViewDelegate;

@interface MailRTEToolView : UIView
{
    MMUIView *_basicBtnContainer;
    MMUIView *_extBtnContainer;
    UIView *_tabLine;
    UINavigationController *_picker;
    unsigned int _mmassetCount;
    id <MailRTEToolViewDelegate> _delegate;
    NSMutableArray *_arrAttachments;
    MMPickLocationViewController *_locationViewCtrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMPickLocationViewController *locationViewCtrl; // @synthesize locationViewCtrl=_locationViewCtrl;
@property(retain, nonatomic) NSMutableArray *arrAttachments; // @synthesize arrAttachments=_arrAttachments;
@property(nonatomic) unsigned int mmassetCount; // @synthesize mmassetCount=_mmassetCount;
@property(nonatomic) __weak id <MailRTEToolViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)onAddImageItemComplete;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)showImagePicker:(long long)arg1 withAvailableCount:(unsigned int)arg2;
- (void)onTakePhotoForPost;
- (void)onCreatePostImageView:(unsigned int)arg1;
- (unsigned int)checkExceedMaxObjectCountAndAlert:(unsigned int)arg1;
- (void)onClickItem:(id)arg1;
- (id)getIconSelectedName:(int)arg1;
- (id)getIconName:(int)arg1;
- (id)getTitle:(int)arg1;
- (void)showBasicView;
- (void)initBasicView;
- (void)initUI;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

