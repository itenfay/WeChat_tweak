//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BizAppMsgDetailInfo, NSString, NSURL, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView, UIViewController, WCFileBrowseInfo;

@interface MMLiveScreenSharingBaseViewController
{
    _Bool _blocksSingleTapInContentView;
    _Bool _blocksLongPressInContentView;
    _Bool _showsCancelBarButtonItem;
    UIViewController *_targetViewController;
    UIView *_contentView;
    UIView *_contentMaskView;
    id _userInfo;
    WCFileBrowseInfo *_fileBrowseInfo;
    NSURL *_fileURL;
    NSURL *_webURL;
    BizAppMsgDetailInfo *_bizArticle;
    UITapGestureRecognizer *_singleTapBlocker;
    UILongPressGestureRecognizer *_longPressBlocker;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressBlocker; // @synthesize longPressBlocker=_longPressBlocker;
@property(retain, nonatomic) UITapGestureRecognizer *singleTapBlocker; // @synthesize singleTapBlocker=_singleTapBlocker;
@property(nonatomic) _Bool showsCancelBarButtonItem; // @synthesize showsCancelBarButtonItem=_showsCancelBarButtonItem;
@property(retain, nonatomic) BizAppMsgDetailInfo *bizArticle; // @synthesize bizArticle=_bizArticle;
@property(retain, nonatomic) NSURL *webURL; // @synthesize webURL=_webURL;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain, nonatomic) WCFileBrowseInfo *fileBrowseInfo; // @synthesize fileBrowseInfo=_fileBrowseInfo;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) _Bool blocksLongPressInContentView; // @synthesize blocksLongPressInContentView=_blocksLongPressInContentView;
@property(nonatomic) _Bool blocksSingleTapInContentView; // @synthesize blocksSingleTapInContentView=_blocksSingleTapInContentView;
@property(retain, nonatomic) UIView *contentMaskView; // @synthesize contentMaskView=_contentMaskView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIViewController *targetViewController; // @synthesize targetViewController=_targetViewController;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)handleLongPressBlocker:(id)arg1;
- (void)handleSingleTapBlocker:(id)arg1;
- (void)loadGestureBlockers;
- (void)cancelBarButtonItemDidClick:(id)arg1;
- (void)removeTargetViewIfNeeded;
- (void)addTargetViewIfNeeded;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

