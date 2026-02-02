//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GameHaowanAlbumVideoItem, MMWebImageView, NSString, WCPlayerView;
@protocol GameVideoPreviewControllerDelegate, GameVideoPreviewDataSource;

@interface GameVideoPreviewController
{
    GameHaowanAlbumVideoItem *_videoItem;
    CDUnknownBlockType _resultBlock;
    id <GameVideoPreviewControllerDelegate> _delegate;
    id <GameVideoPreviewDataSource> _dataSource;
    WCPlayerView *_playerView;
    MMWebImageView *_imageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMWebImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) WCPlayerView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) __weak id <GameVideoPreviewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <GameVideoPreviewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)notifyErrorResult:(long long)arg1;
- (void)notifySucceedWithVideoInfo:(id)arg1;
- (void)gameVideoEditController:(id)arg1 didFailedWithError:(id)arg2;
- (void)gameVideoEditController:(id)arg1 didFinishWithFilePath:(id)arg2 withExtra:(id)arg3;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)goEditor;
- (void)addTagViewsToContainer:(id)arg1;
- (void)setupBottomViews;
- (void)goBack;
- (void)viewDidLoad;
- (id)initWithVideoItem:(id)arg1 andCompletion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

