//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class MMUIButton, NSMutableArray, WCFinderProfileCollectionListLayout, WCFinderProfileCollectionListStyle;
@protocol WCFinderProfileCollectionListViewDelegate;

@interface WCFinderProfileCollectionListView : UICollectionReusableView
{
    id <WCFinderProfileCollectionListViewDelegate> _delegate;
    WCFinderProfileCollectionListLayout *_layout;
    WCFinderProfileCollectionListStyle *_style;
    NSMutableArray *_listItemButtons;
    MMUIButton *_nextEpisodeButton;
    MMUIButton *_allEpisodeButton;
    MMUIButton *_moreButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) MMUIButton *allEpisodeButton; // @synthesize allEpisodeButton=_allEpisodeButton;
@property(retain, nonatomic) MMUIButton *nextEpisodeButton; // @synthesize nextEpisodeButton=_nextEpisodeButton;
@property(retain, nonatomic) NSMutableArray *listItemButtons; // @synthesize listItemButtons=_listItemButtons;
@property(retain, nonatomic) WCFinderProfileCollectionListStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) WCFinderProfileCollectionListLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) __weak id <WCFinderProfileCollectionListViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)moreButtonClicked:(id)arg1;
- (void)collectionItemButtonClicked:(id)arg1;
- (void)allEpisodeButtonClicked:(id)arg1;
- (void)nextEpisodeButtonClicked:(id)arg1;
- (id)createCollectionListItemButton;
- (void)setupCollectionListItemButtonsWith:(id)arg1;
- (void)updateWithLayout:(id)arg1;
- (void)prepareForReuse;
- (void)configureExtraButtons;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

