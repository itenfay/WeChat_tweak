//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMTableView, MMUIView, MMUIViewController, NSArray, NSString, UIImageView, UIView;
@protocol MMAlbumDropPickerControllerDelegate, MMImagePickerControlCenter, OS_dispatch_queue;

@interface MMAlbumDropPickerController : NSObject
{
    _Bool _isQuit;
    _Bool _directToFirstAlbum;
    _Bool _allAlbumsLoaded;
    _Bool _isShow;
    _Bool _isFirstAlbum;
    _Bool _hasRegisterChangeObserver;
    id <MMAlbumDropPickerControllerDelegate> _delegate;
    NSArray *_deviceAlbums;
    NSString *_currentAlbum;
    id <MMImagePickerControlCenter> _controlCenter;
    NSString *_waitingEntryAlbumId;
    MMUIViewController *_attachViewController;
    MMUIView *_bgView;
    UIView *_tableContainerView;
    MMTableView *_tableView;
    MMUIView *_blurView;
    UIImageView *_shadowImageView;
    MMUIView *_dimmingView;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool hasRegisterChangeObserver; // @synthesize hasRegisterChangeObserver=_hasRegisterChangeObserver;
@property(retain, nonatomic) MMUIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(retain, nonatomic) UIImageView *shadowImageView; // @synthesize shadowImageView=_shadowImageView;
@property(retain, nonatomic) MMUIView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *tableContainerView; // @synthesize tableContainerView=_tableContainerView;
@property(retain, nonatomic) MMUIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak MMUIViewController *attachViewController; // @synthesize attachViewController=_attachViewController;
@property(retain, nonatomic) NSString *waitingEntryAlbumId; // @synthesize waitingEntryAlbumId=_waitingEntryAlbumId;
@property(nonatomic) _Bool isFirstAlbum; // @synthesize isFirstAlbum=_isFirstAlbum;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(nonatomic) _Bool allAlbumsLoaded; // @synthesize allAlbumsLoaded=_allAlbumsLoaded;
@property(nonatomic) _Bool directToFirstAlbum; // @synthesize directToFirstAlbum=_directToFirstAlbum;
@property(nonatomic) __weak id <MMImagePickerControlCenter> controlCenter; // @synthesize controlCenter=_controlCenter;
@property(retain, nonatomic) NSString *currentAlbum; // @synthesize currentAlbum=_currentAlbum;
@property(copy, nonatomic) NSArray *deviceAlbums; // @synthesize deviceAlbums=_deviceAlbums;
@property(nonatomic) __weak id <MMAlbumDropPickerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property _Bool isQuit; // @synthesize isQuit=_isQuit;
- (id)getAlbumName:(id)arg1 isFirstAlbum:(_Bool)arg2;
- (long long)getCacheOption;
- (void)dispatchAction:(CDUnknownBlockType)arg1;
- (void)safeCallOnMainThread:(CDUnknownBlockType)arg1;
- (void)stopLoading;
- (void)startLoadingBlocked:(_Bool)arg1;
- (void)backgroundUpdateAlbums:(id)arg1;
- (void)onAlbumAssetsChange:(id)arg1;
- (void)unregisterChangeObserver;
- (void)registerChangeObserver;
- (void)photoLibraryDidChange:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)hideIfNeeded;
- (void)handleSwitchShowStatus;
- (void)selectAlbum:(id)arg1;
- (void)loadAllAlbums:(_Bool)arg1;
- (void)toEntryAlbum:(CDUnknownBlockType)arg1;
- (void)readAlbums;
- (void)initAccessLimitTips;
- (void)initUI;
- (void)reloadTableView;
- (void)dismiss;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)showWithAnimated:(_Bool)arg1;
- (void)startLoadAlbum;
- (id)titleView;
- (void)dealloc;
- (id)initWithViewController:(id)arg1 delegate:(id)arg2 controlCenter:(id)arg3 toFirstAlbum:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

