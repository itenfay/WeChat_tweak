//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCMusicSmartBoxWorker;
@protocol WCMusicSmartBoxViewControllerDelegate;

@interface WCMusicSmartBoxViewController
{
    id <WCMusicSmartBoxViewControllerDelegate> _delegate;
    WCMusicSmartBoxWorker *_smartboxWorker;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCMusicSmartBoxWorker *smartboxWorker; // @synthesize smartboxWorker=_smartboxWorker;
@property(nonatomic) __weak id <WCMusicSmartBoxViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)collectionVeiwCellForDataItem:(id)arg1 reuseCell:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (unsigned long long)loadWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (Class)collectionViewCellClass;
- (id)generateCollectionViewFlowLayout;
- (void)cancelSearchWithLastReqeustId:(unsigned long long)arg1;

@end

