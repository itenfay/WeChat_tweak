//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class CAGradientLayer, MMUILabel, NSString, UICollectionView, UIView, WCFinderDataItem, WCFinderFoldFeedReportInfo;
@protocol WCFinderTLFriendLikeFeedFoldTableViewCellDelegate;

@interface WCFinderTLFriendLikeFeedFoldTableViewCell : UITableViewCell
{
    _Bool _showUIDetail;
    id <WCFinderTLFriendLikeFeedFoldTableViewCellDelegate> _delegate;
    UICollectionView *_collectionView;
    MMUILabel *_titleLabel;
    UIView *_sectionSeparator;
    UIView *_lineSeparator;
    CAGradientLayer *_gradientLayer;
    WCFinderDataItem *_dataItem;
    WCFinderFoldFeedReportInfo *_foldFeedReportInfo;
}

+ (id)cellID;
+ (double)cellHByShowLargeSeparatorLine:(_Bool)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFoldFeedReportInfo *foldFeedReportInfo; // @synthesize foldFeedReportInfo=_foldFeedReportInfo;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(nonatomic) _Bool showUIDetail; // @synthesize showUIDetail=_showUIDetail;
@property(retain, nonatomic) UIView *lineSeparator; // @synthesize lineSeparator=_lineSeparator;
@property(retain, nonatomic) UIView *sectionSeparator; // @synthesize sectionSeparator=_sectionSeparator;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <WCFinderTLFriendLikeFeedFoldTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)onClickLabelBtn;
- (unsigned long long)indexRowForMoreBtn;
- (_Bool)shouldShowMoreBtn;
- (void)selfWillEndDisPlayWithScene:(int)arg1;
- (double)collectionViewOffsetX;
- (void)updateWithDataItem:(id)arg1 showLargeSeparatorLine:(_Bool)arg2 collectionViewOffsetX:(double)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

