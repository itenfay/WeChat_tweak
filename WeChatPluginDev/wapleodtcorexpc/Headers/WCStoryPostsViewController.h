//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIViewController, MMUnderlineTabsView, NSString, UILabel, UISegmentedControl, WCStoryAlbumViewController, WCStoryHistoryViewController;

@interface WCStoryPostsViewController
{
    unsigned int _scene;
    UISegmentedControl *_segmentedControl;
    MMUnderlineTabsView *_underlineTabView;
    UILabel *_textStateLabel;
    MMUIViewController *_textStateViewController;
    WCStoryHistoryViewController *_storyViewController;
    WCStoryAlbumViewController *_albumViewController;
    unsigned long long _defaultSelectedTag;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long defaultSelectedTag; // @synthesize defaultSelectedTag=_defaultSelectedTag;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) WCStoryAlbumViewController *albumViewController; // @synthesize albumViewController=_albumViewController;
@property(retain, nonatomic) WCStoryHistoryViewController *storyViewController; // @synthesize storyViewController=_storyViewController;
@property(retain, nonatomic) MMUIViewController *textStateViewController; // @synthesize textStateViewController=_textStateViewController;
@property(retain, nonatomic) UILabel *textStateLabel; // @synthesize textStateLabel=_textStateLabel;
@property(retain, nonatomic) MMUnderlineTabsView *underlineTabView; // @synthesize underlineTabView=_underlineTabView;
@property(retain, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
- (void)registerYReportSdk;
- (void)onTipsShowInfoChangeWithPathKey:(id)arg1;
- (void)replaceFromViewController:(id)arg1 toViewController:(id)arg2;
- (void)onClikeTextStateMsg;
- (void)clickStoryTab;
- (void)clickTimelineTab;
- (void)onTabsViewValueChanged:(id)arg1;
- (void)initNavTitleView;
- (void)clickSegmentedControl;
- (void)configViewControllers;
- (void)setupViews;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithPostsScene:(unsigned int)arg1 AndDefaultTag:(unsigned long long)arg2;
- (id)initWithPostsScene:(unsigned int)arg1 withRequestType:(unsigned int)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

