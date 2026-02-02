//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveVotingInfo, UIScrollView;

@interface MMFinderLiveVoteHistoryDetailViewController
{
    FinderLiveVotingInfo *_votingInfo;
    UIScrollView *_scrollView;
    struct CGRect _lastLayoutRect;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect lastLayoutRect; // @synthesize lastLayoutRect=_lastLayoutRect;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) FinderLiveVotingInfo *votingInfo; // @synthesize votingInfo=_votingInfo;
- (void)rebuildContentViews;
- (id)navigationBarBackgroundColor;
- (void)onBackButtonClicked;
- (void)initNavBar;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithVotingInfo:(id)arg1;

@end

