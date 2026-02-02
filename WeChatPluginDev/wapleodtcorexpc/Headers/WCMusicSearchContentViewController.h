//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCMusicSearchWorker;
@protocol WCMusicSearchContentViewControllerDelegate;

@interface WCMusicSearchContentViewController
{
    _Bool _isLiteMode;
    id <WCMusicSearchContentViewControllerDelegate> _delegate;
    WCMusicSearchWorker *_searchWorker;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCMusicSearchWorker *searchWorker; // @synthesize searchWorker=_searchWorker;
@property(nonatomic) _Bool isLiteMode; // @synthesize isLiteMode=_isLiteMode;
@property(nonatomic) __weak id <WCMusicSearchContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)musicSearchCollectionCell:(id)arg1 didClickSendButton:(id)arg2 withMusicInfo:(id)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)updateHighlightedStatusForCollectionView:(id)arg1 indexPath:(id)arg2 highlighted:(_Bool)arg3;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionVeiwCellForDataItem:(id)arg1 reuseCell:(id)arg2;
- (_Bool)showFooterView;
- (void)cancelSearchWithLastReqeustId:(unsigned long long)arg1;
- (id)filteredInfosWithResult:(id)arg1 existedItems:(id)arg2;
- (unsigned long long)loadWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)generateEmptyHintView;
- (unsigned int)maxOffsetFromResponse:(id)arg1;
- (Class)collectionViewCellClass;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

