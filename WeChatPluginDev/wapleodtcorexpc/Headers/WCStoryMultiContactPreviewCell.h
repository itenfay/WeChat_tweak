//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMLoadingView, NSString, WCStoryDataUnit, WCStoryPageControl, WCStoryPreivewPageCollectionController;
@protocol WCStoryMultiContactPreviewCellDelegate;

@interface WCStoryMultiContactPreviewCell : UICollectionViewCell
{
    id <WCStoryMultiContactPreviewCellDelegate> _delegate;
    WCStoryDataUnit *_dataUnit;
    WCStoryPreivewPageCollectionController *_controller;
    WCStoryPageControl *_pageControl;
    MMLoadingView *_loadingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCStoryPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) WCStoryPreivewPageCollectionController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) WCStoryDataUnit *dataUnit; // @synthesize dataUnit=_dataUnit;
@property(nonatomic) __weak id <WCStoryMultiContactPreviewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onUserRelatedCommentReadWithTid:(id)arg1;
- (void)onDataItemAllCommentMakeRead:(id)arg1;
- (void)reverseDataItemPrivateWithTid:(id)arg1 isInvisible:(_Bool)arg2;
- (id)updateItemOfDataUnitWithTid:(id)arg1;
- (void)onStoryVideoPlayStarted;
- (void)onClickPageView:(id)arg1 toHideUIElement:(_Bool)arg2;
- (void)onLongPressToHidePageView:(id)arg1;
- (void)onLongPressToDeletePageView:(id)arg1;
- (void)onCommentListView:(id)arg1 show:(_Bool)arg2;
- (void)onStoryPageCollectionControllerChangePage:(id)arg1 pageView:(id)arg2 lastIndexPath:(id)arg3;
- (void)tryShowCommentsList;
- (void)markCommentRead:(unsigned long long)arg1;
- (void)reloadView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

