//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveNoticeInfo;

@interface MMFinderReserveLiveNoticeTipsBubbleView
{
    CDUnknownBlockType _closeAction;
    CDUnknownBlockType _confirmAction;
    FinderLiveNoticeInfo *_noticeInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveNoticeInfo *noticeInfo; // @synthesize noticeInfo=_noticeInfo;
@property(copy, nonatomic) CDUnknownBlockType confirmAction; // @synthesize confirmAction=_confirmAction;
@property(copy, nonatomic) CDUnknownBlockType closeAction; // @synthesize closeAction=_closeAction;
- (void)onFinderLiveNoticeWithNoticeId:(id)arg1 reserveStateChanged:(unsigned long long)arg2;
- (void)updateTitleLabel;
- (void)onActionTapped;
- (void)updateActionButton;
- (void)onCloseTapped;
- (id)initWithTaskId:(id)arg1 noticeInfo:(id)arg2 closeAction:(CDUnknownBlockType)arg3 confirmAction:(CDUnknownBlockType)arg4;

@end

