//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, MMMusicLiveCommentCommonNoticeView, MMMusicLiveCommentModel, MMMusicLiveCommentStatusView, MMMusicLiveCommentUnreadMentionView, MMTableView, NSString;
@protocol MMMusicLiveCommentViewDelegate;

@interface MMMusicLiveCommentView : UIView
{
    _Bool _notJustShowPeopleCount;
    _Bool _isScrollingToBottom;
    id <MMMusicLiveCommentViewDelegate> _delegate;
    MMMusicLiveCommentModel *_model;
    MMMusicLiveCommentStatusView *_statusView;
    MMTableView *_tableView;
    UIView *_backgroundView;
    CAGradientLayer *_fadeOutLayer;
    MMMusicLiveCommentCommonNoticeView *_noticeView;
    MMMusicLiveCommentUnreadMentionView *_unreadMentionView;
    long long _maxDisplayIndex;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isScrollingToBottom; // @synthesize isScrollingToBottom=_isScrollingToBottom;
@property(nonatomic) long long maxDisplayIndex; // @synthesize maxDisplayIndex=_maxDisplayIndex;
@property(retain, nonatomic) MMMusicLiveCommentUnreadMentionView *unreadMentionView; // @synthesize unreadMentionView=_unreadMentionView;
@property(retain, nonatomic) MMMusicLiveCommentCommonNoticeView *noticeView; // @synthesize noticeView=_noticeView;
@property(retain, nonatomic) CAGradientLayer *fadeOutLayer; // @synthesize fadeOutLayer=_fadeOutLayer;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool notJustShowPeopleCount; // @synthesize notJustShowPeopleCount=_notJustShowPeopleCount;
@property(retain, nonatomic) MMMusicLiveCommentStatusView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) MMMusicLiveCommentModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <MMMusicLiveCommentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTapUnreadMention;
- (void)onCommentDetailViewClicked:(id)arg1;
- (void)onCommentClicked:(id)arg1;
- (void)onCommentLongPressed:(id)arg1;
- (void)liveCommentModel:(id)arg1 didModifiedDataAt:(unsigned long long)arg2;
- (void)liveCommentModelDidAddNotice:(id)arg1;
- (void)liveCommentModelDidAppendData:(id)arg1;
- (void)showNextNotice;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)isTableViewAtBottom;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)notifyCommentViewContentChanged;
- (void)adjustContentHeight:(_Bool)arg1;
- (void)layoutUnreadView;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1 model:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

