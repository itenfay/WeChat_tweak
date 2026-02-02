//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class WCFinderLiveFeedCollectionView;
@protocol WCFinderFriendLiveSectionTableViewCellDelegate;

@interface WCFinderFriendLiveSectionTableViewCell : UITableViewCell
{
    id <WCFinderFriendLiveSectionTableViewCellDelegate> _delegate;
    unsigned long long _displayType;
    WCFinderLiveFeedCollectionView *_liveCollectionView;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveFeedCollectionView *liveCollectionView; // @synthesize liveCollectionView=_liveCollectionView;
@property(nonatomic) unsigned long long displayType; // @synthesize displayType=_displayType;
@property(nonatomic) __weak id <WCFinderFriendLiveSectionTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stopPlayWhenDisappear;
- (void)startPlayWhenDisplay;
- (void)scrollToTop;
- (void)liveSectionNoMoreData;
- (void)liveDataFetchFinish:(_Bool)arg1;
- (void)updateWithDataSource:(id)arg1;
- (id)getVisibleFeedVM;
- (void)updateTitle:(id)arg1;
- (void)updateLiveView:(id)arg1 isInDarkMode:(_Bool)arg2;
- (void)updateLiveView:(id)arg1;
- (void)setupLiveCollectionView:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

