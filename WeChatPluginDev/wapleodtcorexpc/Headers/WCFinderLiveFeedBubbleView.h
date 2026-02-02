//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveNoticeInfo, NSString, UITapGestureRecognizer, WCFinderFeedContentVM, WCFinderJumpInfo, WCFinderLiveNoticeCellViewModel;
@protocol WCFinderJumpInfoViewBaseDelegate;

@interface WCFinderLiveFeedBubbleView
{
    int _showPosition;
    id <WCFinderJumpInfoViewBaseDelegate> _delegate;
    WCFinderJumpInfo *_hotSpotJumpInfo;
    FinderLiveNoticeInfo *_noticeInfo;
    WCFinderLiveNoticeCellViewModel *_liveNoticeVM;
    WCFinderFeedContentVM *_contentVM;
    NSString *_username;
    unsigned long long _operatingType;
    CDUnknownBlockType _onClickNoticeBlock;
    CDUnknownBlockType _onClickNoticeDetailBlock;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) int showPosition; // @synthesize showPosition=_showPosition;
@property(copy, nonatomic) CDUnknownBlockType onClickNoticeDetailBlock; // @synthesize onClickNoticeDetailBlock=_onClickNoticeDetailBlock;
@property(copy, nonatomic) CDUnknownBlockType onClickNoticeBlock; // @synthesize onClickNoticeBlock=_onClickNoticeBlock;
@property(nonatomic) unsigned long long operatingType; // @synthesize operatingType=_operatingType;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) WCFinderLiveNoticeCellViewModel *liveNoticeVM; // @synthesize liveNoticeVM=_liveNoticeVM;
@property(retain, nonatomic) FinderLiveNoticeInfo *noticeInfo; // @synthesize noticeInfo=_noticeInfo;
@property(retain, nonatomic) WCFinderJumpInfo *hotSpotJumpInfo; // @synthesize hotSpotJumpInfo=_hotSpotJumpInfo;
@property(nonatomic) __weak id <WCFinderJumpInfoViewBaseDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setMaxWidth:(double)arg1 maxTextAreaWidth:(double)arg2;
- (id)jumpInfo;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)updateActionButtonWhenNeedPay;
- (void)updateLabelsWith:(id)arg1;
- (void)updateActionButtonWhenFree;
- (void)feedBubbleViewShowDetail:(id)arg1;
- (void)startExposeAction;
- (void)doLayout;
- (void)updateLiveFeedBubbleViewWithUsername:(id)arg1 noticeInfo:(id)arg2;
- (void)onClickActionButton;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

