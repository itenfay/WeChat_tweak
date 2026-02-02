//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMUIButton, NSArray, NSString, UIButton, UICollectionView, UILabel, WCFinderFeedLayoutContentVM;
@protocol WCFinderPopularGuideTableViewCellDelegate;

@interface WCFinderPopularGuideTableViewCell : UITableViewCell
{
    id <WCFinderPopularGuideTableViewCellDelegate> _delegate;
    UILabel *_popularLabel;
    MMUIButton *_morePopularAction;
    UICollectionView *_collectionView;
    NSArray *_contentArray;
    UIButton *_backgroundBtn;
    WCFinderFeedLayoutContentVM *_contentVM;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedLayoutContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(nonatomic) __weak UIButton *backgroundBtn; // @synthesize backgroundBtn=_backgroundBtn;
@property(copy, nonatomic) NSArray *contentArray; // @synthesize contentArray=_contentArray;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak MMUIButton *morePopularAction; // @synthesize morePopularAction=_morePopularAction;
@property(nonatomic) __weak UILabel *popularLabel; // @synthesize popularLabel=_popularLabel;
@property(nonatomic) __weak id <WCFinderPopularGuideTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickTipsAction;
- (void)onClickAction;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)updateWithContentVM:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)configureCollection;
- (void)setUpUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

