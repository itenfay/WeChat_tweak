//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, EditImageAttr, EditImageIntialView, FavoritesItem, ForwardMessageLogicController, MMLoadingView, NSString, UIImage, UIViewController, WCActionSheet;
@protocol EditImageForwardAndEditLogicDelegate;

@interface EditImageForwardAndEditLogicController : NSObject
{
    EditImageIntialView *_editImageInitialView;
    MMLoadingView *_loadingView;
    EditImageAttr *_editImageAttr;
    ForwardMessageLogicController *_forwardMessageLogicController;
    FavoritesItem *_addingFavItem;
    WCActionSheet *_actionsheet;
    _Bool isImgSaved;
    _Bool _isEmoticonBoardSearchEnabled;
    int _editImageScene;
    id <EditImageForwardAndEditLogicDelegate> _delegate;
    CMessageWrap *_originalMessageWrap;
    UIImage *_originalImage;
    NSString *_originalImagePath;
    UIViewController *_currentViewController;
    FavoritesItem *_favItem;
    UIViewController *_forwardBasedViewController;
    unsigned long long _editImageEntrance;
    unsigned long long _editImageCompletion;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isEmoticonBoardSearchEnabled; // @synthesize isEmoticonBoardSearchEnabled=_isEmoticonBoardSearchEnabled;
@property(nonatomic) unsigned long long editImageCompletion; // @synthesize editImageCompletion=_editImageCompletion;
@property(nonatomic) int editImageScene; // @synthesize editImageScene=_editImageScene;
@property(nonatomic) unsigned long long editImageEntrance; // @synthesize editImageEntrance=_editImageEntrance;
@property(nonatomic) __weak UIViewController *forwardBasedViewController; // @synthesize forwardBasedViewController=_forwardBasedViewController;
@property(retain, nonatomic) FavoritesItem *favItem; // @synthesize favItem=_favItem;
@property(nonatomic) __weak UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(retain, nonatomic) NSString *originalImagePath; // @synthesize originalImagePath=_originalImagePath;
@property(retain, nonatomic) UIImage *originalImage; // @synthesize originalImage=_originalImage;
@property(retain, nonatomic) CMessageWrap *originalMessageWrap; // @synthesize originalMessageWrap=_originalMessageWrap;
@property(nonatomic) __weak id <EditImageForwardAndEditLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnAddNewFavoritesItems:(id)arg1;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)getEditImageAttr;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)processEditImage:(CDUnknownBlockType)arg1;
- (void)OnClickEditImageDoneBarButton;
- (void)OnClickEditImageBackBarButton;
- (void)getOriginalImage:(CDUnknownBlockType)arg1;
- (void)getDisplayImage:(CDUnknownBlockType)arg1;
- (void)forwardMessage:(id)arg1;
- (void)checkNonActionsheetOptionsAfterProcessDone;
- (void)callbackSaveImageSuccess;
- (void)editImageActionSheetClickedButtonWithTitle:(id)arg1;
- (void)startEditImage;
@property(readonly, nonatomic) _Bool isSaved;
- (void)reloadViews;
- (void)startLogic;
- (void)checkValidity;
- (id)initWithOriginalImage:(id)arg1 atPath:(id)arg2 withDelegate:(id)arg3 withCurrentViewController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

