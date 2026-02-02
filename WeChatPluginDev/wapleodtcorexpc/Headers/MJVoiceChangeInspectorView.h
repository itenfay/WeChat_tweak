//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJSegmentInspectorViewModel, MMUIActivityIndicatorView, MMUIButton, NSString, UICollectionView;
@protocol MJSpeechTextInspectorViewModelProtocol;

@interface MJVoiceChangeInspectorView
{
    _Bool _shouldBlockWhenLoading;
    _Bool _shouldRequestVoiceChangeUponLoaded;
    _Bool _shouldHideTopBar;
    unsigned long long _options;
    CDUnknownBlockType _tapLinkBlock;
    UICollectionView *_collectionView;
    MMUIActivityIndicatorView *_loadingView;
    MMUIButton *_protocolButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *protocolButton; // @synthesize protocolButton=_protocolButton;
@property(nonatomic) _Bool shouldHideTopBar; // @synthesize shouldHideTopBar=_shouldHideTopBar;
@property(nonatomic) _Bool shouldRequestVoiceChangeUponLoaded; // @synthesize shouldRequestVoiceChangeUponLoaded=_shouldRequestVoiceChangeUponLoaded;
@property(nonatomic) _Bool shouldBlockWhenLoading; // @synthesize shouldBlockWhenLoading=_shouldBlockWhenLoading;
@property(retain, nonatomic) MMUIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) CDUnknownBlockType tapLinkBlock; // @synthesize tapLinkBlock=_tapLinkBlock;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
- (void)hideProtocolButton;
- (void)showProtocolButton;
- (void)protocolButtonButtonDidTouchUpInside:(id)arg1;
- (void)voiceChangeCellDidSelectDeleteCloneRole:(id)arg1;
- (void)voiceChangeCellDidRequestRetry:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)handleCollectionView:(id)arg1 selectItemAtIndexPath:(id)arg2 autoPlay:(_Bool)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)updateCellSelection;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)unblockUserInteraction;
- (void)blockUserInteraction;
- (void)requestVoiceChangeForSelectedRole;
- (void)updateViewsForDidLoadContents:(_Bool)arg1;
- (void)updateViewsForWillLoadContents;
- (void)loadContents;
- (void)reloadContents;
- (void)bindViews;
- (void)layoutViews;
- (void)setupViews;
- (id)initWithViewModel:(id)arg1 options:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) MJSegmentInspectorViewModel<MJSpeechTextInspectorViewModelProtocol> *viewModel; // @dynamic viewModel;

@end

