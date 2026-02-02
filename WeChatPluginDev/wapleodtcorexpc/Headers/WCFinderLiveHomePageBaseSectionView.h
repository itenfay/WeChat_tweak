//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderLiveSquareStyleInfo, NSString, UICollectionView, WCFinderLiveHomePageSectionViewModel;

@interface WCFinderLiveHomePageBaseSectionView : UIView
{
    UICollectionView *_collectionview;
    WCFinderLiveHomePageSectionViewModel *_vm;
    FinderLiveSquareStyleInfo *_styleInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveSquareStyleInfo *styleInfo; // @synthesize styleInfo=_styleInfo;
@property(retain, nonatomic) WCFinderLiveHomePageSectionViewModel *vm; // @synthesize vm=_vm;
@property(retain, nonatomic) UICollectionView *collectionview; // @synthesize collectionview=_collectionview;
- (void)onPlayStateChanged:(id)arg1 state:(unsigned long long)arg2;
- (void)onContainerSectionVMDisAppear;
- (id)getContainerSectionVisibleItemIndex;
- (void)bindNewExposeReport:(id)arg1 feedVM:(id)arg2 indexPath:(id)arg3;
- (void)reportFeedExposeEnd:(id)arg1 collectionView:(id)arg2 indexPath:(id)arg3;
- (void)reportFeedExpose:(id)arg1 collectionView:(id)arg2 indexPath:(id)arg3;
- (void)bindExposeEventCallback:(id)arg1 feedVM:(id)arg2 indexPath:(id)arg3;
- (void)layoutSubViews_onFrameChanged;
- (id)generateCollectionView;
- (void)scrollToTop:(_Bool)arg1;
- (void)reloadData;
- (void)updateWithVM:(id)arg1;
- (id)getVisibleFeedVM;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1 styleInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

