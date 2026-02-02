//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, UIButton, UIImage, UIScrollView, UIView, WNImageActionSheetView, WNMultiImagesCollectionView, WNSaveImageLogic;

@interface WNImagePreviewViewController
{
    _Bool _isTrueScroll;
    unsigned int _localId;
    UIView *_bottomView;
    UIView *_longNoteView;
    UIImage *_snapshotImage;
    WNSaveImageLogic *_saveImageLogic;
    UIView *_headerView;
    UIButton *_closeBtn;
    UIButton *_changeStyleBtn;
    double _lastContentOffset;
    UIScrollView *_longNoteScrollView;
    MMUILabel *_changeStyleLabel;
    WNImageActionSheetView *_actionSheetView;
    WNMultiImagesCollectionView *_multiImagesCollectionView;
    UIButton *_doneBtn;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isTrueScroll; // @synthesize isTrueScroll=_isTrueScroll;
@property(retain, nonatomic) UIButton *doneBtn; // @synthesize doneBtn=_doneBtn;
@property(retain, nonatomic) WNMultiImagesCollectionView *multiImagesCollectionView; // @synthesize multiImagesCollectionView=_multiImagesCollectionView;
@property(retain, nonatomic) WNImageActionSheetView *actionSheetView; // @synthesize actionSheetView=_actionSheetView;
@property(retain, nonatomic) MMUILabel *changeStyleLabel; // @synthesize changeStyleLabel=_changeStyleLabel;
@property(retain, nonatomic) UIScrollView *longNoteScrollView; // @synthesize longNoteScrollView=_longNoteScrollView;
@property(nonatomic) double lastContentOffset; // @synthesize lastContentOffset=_lastContentOffset;
@property(retain, nonatomic) UIButton *changeStyleBtn; // @synthesize changeStyleBtn=_changeStyleBtn;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) unsigned int localId; // @synthesize localId=_localId;
@property(retain, nonatomic) WNSaveImageLogic *saveImageLogic; // @synthesize saveImageLogic=_saveImageLogic;
@property(retain, nonatomic) UIImage *snapshotImage; // @synthesize snapshotImage=_snapshotImage;
@property(retain, nonatomic) UIView *longNoteView; // @synthesize longNoteView=_longNoteView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
- (double)getHeaderViewHeight;
- (double)getBottomViewHeight;
- (double)getActionViewHeight;
- (double)getBottomInsert;
- (double)getTopInsert;
- (void)didSaveImage:(unsigned int)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)displayLongNoteView:(id)arg1 withSize:(struct CGSize)arg2;
- (void)showRefuseGenerateView;
- (void)showSquareNoteWithViews:(id)arg1;
- (void)showSquareNoteViews;
- (void)showLongNoteWithView:(id)arg1;
- (void)showLongNoteView;
- (void)changeImageAlignment:(long long)arg1;
- (void)changeImageBackgroudImage:(long long)arg1;
- (void)changeImageFontStyle:(long long)arg1;
- (void)changeImageStyle:(long long)arg1;
- (void)hiddenActionSheetViewWithRecordState:(_Bool)arg1;
- (void)onClickConfirmButton;
- (void)onClickCancelButton;
- (void)onClickButtonWithType:(long long)arg1 andIndex:(long long)arg2;
- (void)onChangeStyle:(id)arg1;
- (void)onDone:(id)arg1;
- (void)onClose:(id)arg1;
- (void)initActionSheetView;
- (void)initBackgroundView;
- (void)initBottomView;
- (void)initHeaderView;
- (void)initView;
- (_Bool)hidesStatusBar;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

