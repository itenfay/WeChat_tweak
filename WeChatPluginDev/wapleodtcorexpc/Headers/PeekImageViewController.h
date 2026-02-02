//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIViewController.h>

@class CMessageWrap, ImageMessageCellView, NSArray, NSString, UIImageView, UIView, WCImageView;

@interface PeekImageViewController : UIViewController
{
    CMessageWrap *_msgWrap;
    UIViewController *previewFromController;
    UIView *previewSourceView;
    UIViewController *_fromViewController;
    NSArray *_previewActions;
    UIImageView *_imageView;
    WCImageView *_wcImageView;
    ImageMessageCellView *_imgCellView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak ImageMessageCellView *imgCellView; // @synthesize imgCellView=_imgCellView;
@property(nonatomic) __weak WCImageView *wcImageView; // @synthesize wcImageView=_wcImageView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSArray *previewActions; // @synthesize previewActions=_previewActions;
@property(nonatomic) __weak UIViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
@property(nonatomic) __weak UIView *previewSourceView; // @synthesize previewSourceView;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIView",?,W,N,VpreviewSourceView

@property(nonatomic) __weak UIViewController *previewFromController; // @synthesize previewFromController;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIViewController",?,W,N,VpreviewFromController

- (id)previewActionItems;
- (void)commitViewController;
- (_Bool)canPop;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDownloadImageFail:(id)arg1;
- (void)OnDownloadImageOk:(id)arg1;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (void)startDownloadImg:(_Bool)arg1;
- (void)reloadImage;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithWCImageView:(id)arg1 fromController:(id)arg2;
- (id)initWithImageCellView:(id)arg1 fromController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

