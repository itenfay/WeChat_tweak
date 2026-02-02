//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavTagListView, MMUIScrollView, NSArray, NSDictionary, NSString, UIView, UIViewController;
@protocol MMStoreEmotionTagSelectDelegate;

@interface MMStoreEmotionTagSelectViewController
{
    UIViewController *m_blurViewController;
    UIView *m_backgroundView;
    NSArray *m_tagDescList;
    NSDictionary *m_tagDic;
    NSString *m_lastSelectedTagDesc;
    MMUIScrollView *m_scrollView;
    FavTagListView *m_tagListView;
    id <MMStoreEmotionTagSelectDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMStoreEmotionTagSelectDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTouchEndBlankView;
- (void)onTagHighLight:(id)arg1;
- (void)OnCancelClick;
- (void)configBackgrounView;
- (void)onTopBarFrameChanged;
- (void)configTagListView;
- (void)updateScrollView;
- (void)configScrollView;
- (void)configNavigationBar;
- (void)initView;
- (void)viewDidLoad;
- (void)setBlurViewFromViewController:(id)arg1;
- (id)initWithTagList:(id)arg1 AndSelectedTag:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

