//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIButton, MMUIImageView, MMUILabel, NSMutableArray, NSNumber, NSString, WCStoryEntranceVM, WCStoryReportUtil, WCStoryTimelineEntranceTableViewCell;
@protocol WCTimelineLogicControllerDelegate;

@interface WCTimelineStoryLogicController : NSObject
{
    _Bool _storyEntranceIsVisiable;
    WCStoryTimelineEntranceTableViewCell *_storyCell;
    id <WCTimelineLogicControllerDelegate> _delegate;
    MMUIButton *_storyHeaderButton;
    MMUIImageView *_arrowImageView;
    MMUILabel *_countLabel;
    MMUILabel *_unreadTotalCountLabel;
    WCStoryEntranceVM *_entranceVM;
    NSMutableArray *_storyHeadImageViewArray;
    NSNumber *_storyEntranceSwitch;
    unsigned long long _unreadRelatedCommentCount;
    WCStoryReportUtil *_storyReportUtil;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCStoryReportUtil *storyReportUtil; // @synthesize storyReportUtil=_storyReportUtil;
@property(nonatomic) unsigned long long unreadRelatedCommentCount; // @synthesize unreadRelatedCommentCount=_unreadRelatedCommentCount;
@property(retain, nonatomic) NSNumber *storyEntranceSwitch; // @synthesize storyEntranceSwitch=_storyEntranceSwitch;
@property(nonatomic) _Bool storyEntranceIsVisiable; // @synthesize storyEntranceIsVisiable=_storyEntranceIsVisiable;
@property(retain, nonatomic) NSMutableArray *storyHeadImageViewArray; // @synthesize storyHeadImageViewArray=_storyHeadImageViewArray;
@property(retain, nonatomic) WCStoryEntranceVM *entranceVM; // @synthesize entranceVM=_entranceVM;
@property(retain, nonatomic) MMUILabel *unreadTotalCountLabel; // @synthesize unreadTotalCountLabel=_unreadTotalCountLabel;
@property(retain, nonatomic) MMUILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) MMUIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMUIButton *storyHeaderButton; // @synthesize storyHeaderButton=_storyHeaderButton;
@property(nonatomic) __weak id <WCTimelineLogicControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCStoryTimelineEntranceTableViewCell *storyCell; // @synthesize storyCell=_storyCell;
- (_Bool)shouldUseBlackStatusBar:(id)arg1;
- (void)showMultiContactPreviewViewController:(id)arg1 dismissVC:(id)arg2;
- (void)onScrollViewDidScroll:(id)arg1;
- (void)scrollToTopIfNeeded:(unsigned long long)arg1;
- (void)resetContentInset;
- (void)reloadConfigAndSetupEntranceView;
- (void)resetVisiableState;
- (void)recordExposure;
- (void)reportStoryEntrance:(id)arg1 unreadCount:(unsigned int)arg2 unreadRelatedCommentCount:(unsigned int)arg3;
- (void)reportStoryVideoCleanExposeData;
- (_Bool)isStoryEntranceVisiable;
- (void)recordStoryEntranceInfo;
- (void)clearStoryFriendsVideo;
- (void)StoryTimelineEntranceTableViewCellDidClickClearButton;
- (void)StoryTimelineEntranceTableViewCellDidClickTopButton;
- (void)storyEntranceNeedReload;
- (_Bool)friendVisitSwitchOn;
- (void)bindStoryCell:(id)arg1;
- (void)reloadStoryCell;
- (void)updateUnreadStoryCountLabel:(id)arg1;
- (void)reloadStoryVMData;
- (void)reloadContactHasUnreadStory;
- (void)reloadStoryConfigure;
- (void)updateUnreadStoryHeadImageView:(id)arg1;
- (id)genHeadImageDataFromUnreadStoryData:(id)arg1;
- (void)updateUnreadTotalCommentCountLabel;
- (void)openStoryNewEntrance;
- (void)setupStoryHeaderView;
- (_Bool)shouldShowStoryCell;
- (unsigned int)headerSectionCntInMainController;
- (void)Register;
- (void)Reset;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

