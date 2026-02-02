//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSURL, UIView, UIViewController, WCFileBrowseInfo;

@interface MultiTalkScreenSharingBaseViewController
{
    _Bool _showsCancelBarButtonItem;
    _Bool _showsOrientationLockedToast;
    UIViewController *_targetViewController;
    UIView *_contentView;
    UIView *_contentMaskView;
    WCFileBrowseInfo *_fileBrowseInfo;
    NSURL *_fileURL;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showsOrientationLockedToast; // @synthesize showsOrientationLockedToast=_showsOrientationLockedToast;
@property(nonatomic) _Bool showsCancelBarButtonItem; // @synthesize showsCancelBarButtonItem=_showsCancelBarButtonItem;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain, nonatomic) WCFileBrowseInfo *fileBrowseInfo; // @synthesize fileBrowseInfo=_fileBrowseInfo;
@property(retain, nonatomic) UIView *contentMaskView; // @synthesize contentMaskView=_contentMaskView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIViewController *targetViewController; // @synthesize targetViewController=_targetViewController;
- (void)rotationDetectorRoationDidChange:(id)arg1;
- (void)showOrientationLockedToast;
- (void)endOrientationDetection;
- (void)startOrientationDetection;
- (void)cancelBarButtonItemDidClick:(id)arg1;
- (void)removeTargetViewIfNeeded;
- (void)addTargetViewIfNeeded;
- (void)didSetTargetViewController:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

@end

