//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, ForwardMessageLogicController, MMImageBrowseView, MsgDataDownloadLogic, NSString, SightIconView;
@protocol MsgImgWeakBrowseViewControllerDelegate;

@interface MsgImgWeakBrowseViewController
{
    _Bool _playSound;
    id <MsgImgWeakBrowseViewControllerDelegate> _delegate;
    CMessageWrap *_messageWrap;
    long long _type;
    ForwardMessageLogicController *_forwardMessageLogicController;
    MsgDataDownloadLogic *_imageDownloadLogic;
    SightIconView *_loadingView;
    MMImageBrowseView *_imageBrowseView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMImageBrowseView *imageBrowseView; // @synthesize imageBrowseView=_imageBrowseView;
@property(retain, nonatomic) SightIconView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) MsgDataDownloadLogic *imageDownloadLogic; // @synthesize imageDownloadLogic=_imageDownloadLogic;
@property(retain, nonatomic) ForwardMessageLogicController *forwardMessageLogicController; // @synthesize forwardMessageLogicController=_forwardMessageLogicController;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) _Bool playSound; // @synthesize playSound=_playSound;
@property(retain, nonatomic) CMessageWrap *messageWrap; // @synthesize messageWrap=_messageWrap;
@property(nonatomic) __weak id <MsgImgWeakBrowseViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (id)getCurrentViewController;
- (void)onDownloadCommonFail:(id)arg1;
- (void)onDownloadExpireFail:(id)arg1;
- (void)onDownloadSuccess:(id)arg1;
- (_Bool)canLocate;
- (_Bool)canForward;
- (void)downloadImage;
- (_Bool)canDownload;
- (void)onTapMoreBarButtonItem;
- (double)maxSize;
- (id)thumbImage;
- (id)image;
- (_Bool)isImageMessage;
- (unsigned long long)supportedInterfaceOrientations;
- (void)initSubviews;
- (void)initExtensions;
- (void)reloadData;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (id)initWithMessageWrap:(id)arg1 playSound:(_Bool)arg2 type:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

