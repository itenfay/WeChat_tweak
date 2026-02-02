//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveNoticeInfo, MMUILabel, MMWebImageView, NSString, UIScrollView, UIView, WCFinderContact, WCFinderHeadImageView;

@interface MMFinderLiveQuitLiveNoticeGuideView
{
    FinderLiveNoticeInfo *_noticeInfo;
    WCFinderContact *_contact;
    CDUnknownBlockType _onReserve;
    CDUnknownBlockType _onQuit;
    UIScrollView *_scrollView;
    UIView *_titleAreaBGView;
    MMUILabel *_titleLabel;
    WCFinderHeadImageView *_anchorAvatarView;
    MMWebImageView *_anchorVerificationStatusView;
    MMUILabel *_nickLabel;
    MMUILabel *_contentLabel;
    MMUILabel *_timeLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) MMUILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) MMUILabel *nickLabel; // @synthesize nickLabel=_nickLabel;
@property(retain, nonatomic) MMWebImageView *anchorVerificationStatusView; // @synthesize anchorVerificationStatusView=_anchorVerificationStatusView;
@property(retain, nonatomic) WCFinderHeadImageView *anchorAvatarView; // @synthesize anchorAvatarView=_anchorAvatarView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *titleAreaBGView; // @synthesize titleAreaBGView=_titleAreaBGView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(copy, nonatomic) CDUnknownBlockType onQuit; // @synthesize onQuit=_onQuit;
@property(copy, nonatomic) CDUnknownBlockType onReserve; // @synthesize onReserve=_onReserve;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) FinderLiveNoticeInfo *noticeInfo; // @synthesize noticeInfo=_noticeInfo;
- (id)titleForPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (void)onConfirmButtonClick;
- (void)onCancelButtonClick;
- (void)layoutSubviews;
- (void)fillUIWithData;
- (void)initViews;
- (void)setupPageSheetConfig;
- (id)initWithNoticeInfo:(id)arg1 anchorContact:(id)arg2 onReserve:(CDUnknownBlockType)arg3 onQuit:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

