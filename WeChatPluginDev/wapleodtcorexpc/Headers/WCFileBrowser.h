//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FBDocumentViewController, FBFilesViewController, MMAssetPickerController, MMUIViewController, MMUnderlineTabsView, NSString, UIDocumentPickerViewController, UINavigationController, WCFileBrowserToolBar, WCFileBrowserToolBarViewModel;
@protocol WCFileBrowseDelegate;

@interface WCFileBrowser
{
    _Bool _loadAlbumFinish;
    unsigned int _maxFileCount;
    unsigned int _currentIndex;
    id <WCFileBrowseDelegate> _delegate;
    CDUnknownBlockType _assetSelectedBlock;
    MMUnderlineTabsView *_underlineTabView;
    FBFilesViewController *_chatFilesViewController;
    FBFilesViewController *_favFilesViewController;
    UINavigationController *_albumControlCenter;
    MMAssetPickerController *_albumViewController;
    UIDocumentPickerViewController *_iCloudViewController;
    FBDocumentViewController *_documentViewController;
    unsigned long long _currentDataType;
    MMUIViewController *_currentVC;
    WCFileBrowserToolBar *_toolBar;
    WCFileBrowserToolBarViewModel *_toolBarViewModel;
    CDUnknownBlockType _GetFileInfosFromAlbum;
    unsigned long long _type;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) CDUnknownBlockType GetFileInfosFromAlbum; // @synthesize GetFileInfosFromAlbum=_GetFileInfosFromAlbum;
@property(nonatomic) _Bool loadAlbumFinish; // @synthesize loadAlbumFinish=_loadAlbumFinish;
@property(retain, nonatomic) WCFileBrowserToolBarViewModel *toolBarViewModel; // @synthesize toolBarViewModel=_toolBarViewModel;
@property(retain, nonatomic) WCFileBrowserToolBar *toolBar; // @synthesize toolBar=_toolBar;
@property(nonatomic) unsigned int currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) MMUIViewController *currentVC; // @synthesize currentVC=_currentVC;
@property(nonatomic) unsigned long long currentDataType; // @synthesize currentDataType=_currentDataType;
@property(retain, nonatomic) FBDocumentViewController *documentViewController; // @synthesize documentViewController=_documentViewController;
@property(retain, nonatomic) UIDocumentPickerViewController *iCloudViewController; // @synthesize iCloudViewController=_iCloudViewController;
@property(retain, nonatomic) MMAssetPickerController *albumViewController; // @synthesize albumViewController=_albumViewController;
@property(retain, nonatomic) UINavigationController *albumControlCenter; // @synthesize albumControlCenter=_albumControlCenter;
@property(retain, nonatomic) FBFilesViewController *favFilesViewController; // @synthesize favFilesViewController=_favFilesViewController;
@property(retain, nonatomic) FBFilesViewController *chatFilesViewController; // @synthesize chatFilesViewController=_chatFilesViewController;
@property(retain, nonatomic) MMUnderlineTabsView *underlineTabView; // @synthesize underlineTabView=_underlineTabView;
@property(copy, nonatomic) CDUnknownBlockType assetSelectedBlock; // @synthesize assetSelectedBlock=_assetSelectedBlock;
@property(nonatomic) id <WCFileBrowseDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int maxFileCount; // @synthesize maxFileCount=_maxFileCount;
- (void)reportFileSize;
- (void)onToolBarSendButtonClicked;
- (void)onToolBarRemoveFile:(id)arg1 dataType:(unsigned long long)arg2;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)onAssetPickerControllerChangeSelectInfo:(id)arg1 index:(long long)arg2;
- (void)onAssetPickerLoadAlbumFinish:(_Bool)arg1;
- (void)onAssetPickerController:(id)arg1 clickAssetInfo:(id)arg2;
- (_Bool)onFileBrowseWillSelectFile:(id)arg1 selectedFiles:(id)arg2;
- (void)FBFilesViewController:(id)arg1 DidSelectFiles:(id)arg2;
- (void)checkAlbumVCLoadingState;
- (void)onOpeniCloud;
- (void)replaceController:(id)arg1 newController:(id)arg2;
- (void)onTabsViewValueChanged:(id)arg1;
- (void)onBack;
- (_Bool)showNavigationBarSepLine;
- (id)navigationBarBackgroundColor;
- (_Bool)shouldInteractiveDismiss;
- (void)displayLastVC;
- (void)initViews;
- (id)tabItemFor_iCloud;
- (id)tabItemForAlbum;
- (id)tabItemForFav;
- (id)tabItemForChatLog;
- (id)tabItemWithTabView:(id)arg1;
- (id)tabViewForTabItemWithText:(id)arg1;
- (id)tabItemArrayWithType:(unsigned long long)arg1;
- (void)initAlbumViewController;
- (id)albumOptions;
- (struct UIEdgeInsets)childAdditionalInset;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

