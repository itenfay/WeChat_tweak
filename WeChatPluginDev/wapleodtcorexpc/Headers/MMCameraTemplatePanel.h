//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, MMCameraEffectPanelViewModel, NSString, UICollectionView, UIView;
@protocol MMCameraTemplatePanelPanelDelegate;

@interface MMCameraTemplatePanel
{
    id <MMCameraTemplatePanelPanelDelegate> _delegate;
    unsigned long long _currentSelectedIndex;
    UICollectionView *_collectionView;
    CAGradientLayer *_maskLayer;
    UIView *_maskView;
    MMCameraEffectPanelViewModel *_viewModel;
}

+ (double)viewH;
- (void).cxx_destruct;
@property(retain, nonatomic) MMCameraEffectPanelViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) CAGradientLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) unsigned long long currentSelectedIndex; // @synthesize currentSelectedIndex=_currentSelectedIndex;
@property(nonatomic) __weak id <MMCameraTemplatePanelPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)cameraEffectPanelViewModelGetScene;
- (void)cameraEffectPanelViewModelDidFetchTemplateFail:(id)arg1;
- (void)cameraEffectPanelViewModelDidFetchTemplateComplete:(id)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)templateItemAtIndex:(unsigned long long)arg1;
- (id)currentSelectedTemplateItem;
- (double)getCollectInset;
- (void)reloadData;
- (void)setupView;
- (void)fetchDataWithShortURL:(id)arg1;
- (void)fetchDataWithUsername:(id)arg1 params:(id)arg2;
- (void)setupData;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

