//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, WCFinderLiveTagListCollectionView, WCFinderLiveTagListCollectionViewConfig;
@protocol WCFinderMoreLiveTagListHeaderViewDelegate;

@interface WCFinderMoreLiveTagListHeaderView : UICollectionViewCell
{
    _Bool _forceDarkMode;
    id <WCFinderMoreLiveTagListHeaderViewDelegate> _delegate;
    unsigned long long _commentScene;
    WCFinderLiveTagListCollectionView *_tagListView;
    WCFinderLiveTagListCollectionViewConfig *_config;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveTagListCollectionViewConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) WCFinderLiveTagListCollectionView *tagListView; // @synthesize tagListView=_tagListView;
@property(nonatomic) unsigned long long commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) _Bool forceDarkMode; // @synthesize forceDarkMode=_forceDarkMode;
@property(nonatomic) __weak id <WCFinderMoreLiveTagListHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)canTagListViewUnToggle:(id)arg1 unToggleItem:(id)arg2 toggleItem:(id)arg3;
- (void)onTagListView:(id)arg1 didSelectedItem:(id)arg2 isToggle:(_Bool)arg3;
- (void)updateWithSubTabList:(id)arg1 wholeTabInfo:(id)arg2 selectTabInfo:(id)arg3;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

