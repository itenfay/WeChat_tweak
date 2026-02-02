//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveNoticeInfo, MMFinderLiveNoticeShowReminderBottomView, MMUILabel, NSString, UIView, WCFinderLiveNoticeView;

@interface MMFinderLiveNoticeShowReminderView
{
    int _selectType;
    CDUnknownBlockType _selectBlock;
    FinderLiveNoticeInfo *_noticeInfo;
    UIView *_contentView;
    MMUILabel *_titleLabel;
    WCFinderLiveNoticeView *_liveNoticeView;
    double _noticeViewHeight;
    MMFinderLiveNoticeShowReminderBottomView *_bottomView;
    NSString *_title;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) MMFinderLiveNoticeShowReminderBottomView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) double noticeViewHeight; // @synthesize noticeViewHeight=_noticeViewHeight;
@property(retain, nonatomic) WCFinderLiveNoticeView *liveNoticeView; // @synthesize liveNoticeView=_liveNoticeView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) int selectType; // @synthesize selectType=_selectType;
@property(retain, nonatomic) FinderLiveNoticeInfo *noticeInfo; // @synthesize noticeInfo=_noticeInfo;
@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
- (void)bottomViewClick;
- (double)contentViewHeight;
- (void)leftButtonAction;
- (void)setupPageSheetConfig;
- (_Bool)isMemberLiveNotice:(id)arg1;
- (void)layoutUI;
- (void)createUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateLiveNoticeInfo:(id)arg1 selectType:(int)arg2;

@end

