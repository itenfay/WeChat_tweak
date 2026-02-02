//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableArray, NSString, WCFinderFeedContentVM, WCFinderScrollActionGridView, WCFinderScrollActionSheetDelegate;
@protocol WCFinderScrollActionSheetDelegate;

@interface WCFinderScrollActionSheet
{
    _Bool _fromMoreButton;
    _Bool _isAutoPlayNextFeedSwitchOn;
    _Bool _displayGridStyle;
    NSArray *_itemArrayConfig;
    NSMutableArray *_recentContactArray;
    WCFinderFeedContentVM *_contentVM;
    double _expTime;
    long long _actionType;
    id <WCFinderScrollActionSheetDelegate> _finderDelegate;
    WCFinderScrollActionSheetDelegate *_delegateReplace;
    unsigned long long _feedViewerScene;
    WCFinderScrollActionGridView *_bodyGridView;
}

+ (id)viewerSortedFlags;
+ (id)authorSortedFlags;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderScrollActionGridView *bodyGridView; // @synthesize bodyGridView=_bodyGridView;
@property(nonatomic) unsigned long long feedViewerScene; // @synthesize feedViewerScene=_feedViewerScene;
@property(retain, nonatomic) WCFinderScrollActionSheetDelegate *delegateReplace; // @synthesize delegateReplace=_delegateReplace;
@property(nonatomic) __weak id <WCFinderScrollActionSheetDelegate> finderDelegate; // @synthesize finderDelegate=_finderDelegate;
@property(nonatomic) _Bool displayGridStyle; // @synthesize displayGridStyle=_displayGridStyle;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
@property(nonatomic) double expTime; // @synthesize expTime=_expTime;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(nonatomic) _Bool isAutoPlayNextFeedSwitchOn; // @synthesize isAutoPlayNextFeedSwitchOn=_isAutoPlayNextFeedSwitchOn;
@property(nonatomic) _Bool fromMoreButton; // @synthesize fromMoreButton=_fromMoreButton;
@property(retain, nonatomic) NSMutableArray *recentContactArray; // @synthesize recentContactArray=_recentContactArray;
@property(retain, nonatomic) NSArray *itemArrayConfig; // @synthesize itemArrayConfig=_itemArrayConfig;
- (long long)liveShareScene;
- (void)onGridViewWillDisplayItem:(id)arg1 forView:(id)arg2;
- (double)dragBarViewExpandMinHeight:(id)arg1;
- (double)dragBarViewExpandMaxHeight:(id)arg1;
- (void)dragBarViewDidEnd:(id)arg1 slideToClose:(_Bool)arg2;
- (void)showInView:(id)arg1;
- (_Bool)hasItem:(unsigned long long)arg1;
- (void)configScrollActionSheet:(id)arg1 rowIndex:(unsigned long long)arg2;
- (_Bool)_itemEnable:(unsigned long long)arg1 contentVM:(id)arg2;
- (id)createMinimizeItemWithContentVM:(id)arg1;
- (id)getRowItems:(unsigned long long)arg1 contentVM:(id)arg2;
- (void)addBackgroundColorMaskForRowItem:(id)arg1 maskColor:(id)arg2 resumeInterval:(float)arg3;
- (void)sortRowItems:(id)arg1 isAuthor:(_Bool)arg2;
- (_Bool)isAuthorSceneForContentVM:(id)arg1;
- (_Bool)haveConfigOfItem:(unsigned long long)arg1;
- (id)genMenuIconArray:(id)arg1 contentVM:(id)arg2;
- (id)displaySectionName:(long long)arg1;
- (_Bool)shouldShowHeaderSpamTips:(id)arg1;
- (void)setUpCustomRecentForwardScrollViewWithMenuActionDelegate:(id)arg1 screenWid:(double)arg2 scene:(unsigned long long)arg3 msgType:(unsigned int)arg4 innerAppMsgType:(unsigned int)arg5;
- (void)_setUpStandardHeaderViewWithContentVM:(id)arg1;
- (id)init;
- (id)_getFinderDisableColor;
- (void)setupGridStyle;
- (id)containerViewBlurBackgroundColor;
- (id)initWithContentVM:(id)arg1 feedViewerScene:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

