//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, WCFinderHorizontalSlideView;
@protocol WCFinderMultiMusicianInfoViewDelegate;

@interface WCFinderMultiMusicianInfoView
{
    id <WCFinderMultiMusicianInfoViewDelegate> _delegate;
    WCFinderHorizontalSlideView *_collectionView;
    NSArray *_singerInfoArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *singerInfoArray; // @synthesize singerInfoArray=_singerInfoArray;
@property(retain, nonatomic) WCFinderHorizontalSlideView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <WCFinderMultiMusicianInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onHorizontalSlideDidSelectItemAtIndexPath:(id)arg1;
- (id)onHorizontalSlideCollectionView:(id)arg1 indexPath:(id)arg2;
- (long long)onHorizontalSlideNumberOfItems;
- (void)updateWithSingerInfoArray:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

