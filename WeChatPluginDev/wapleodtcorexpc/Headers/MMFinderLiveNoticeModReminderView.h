//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveNoticeInfo, MMFinderLiveNoticeModReminderSubView, UIView;
@protocol LiveNoticeModReminderViewDelegate;

@interface MMFinderLiveNoticeModReminderView
{
    _Bool _isDisable;
    int _selectType;
    id <LiveNoticeModReminderViewDelegate> _delegate;
    FinderLiveNoticeInfo *_noticeInfo;
    unsigned long long _fromType;
    UIView *_contentView;
    MMFinderLiveNoticeModReminderSubView *_autoReminderSubView;
    MMFinderLiveNoticeModReminderSubView *_manualReminderSubView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveNoticeModReminderSubView *manualReminderSubView; // @synthesize manualReminderSubView=_manualReminderSubView;
@property(retain, nonatomic) MMFinderLiveNoticeModReminderSubView *autoReminderSubView; // @synthesize autoReminderSubView=_autoReminderSubView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool isDisable; // @synthesize isDisable=_isDisable;
@property(nonatomic) unsigned long long fromType; // @synthesize fromType=_fromType;
@property(nonatomic) int selectType; // @synthesize selectType=_selectType;
@property(retain, nonatomic) FinderLiveNoticeInfo *noticeInfo; // @synthesize noticeInfo=_noticeInfo;
@property(nonatomic) __weak id <LiveNoticeModReminderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleRemanderSubViewSelectWithSelectType:(int)arg1 isDisable:(_Bool)arg2;
- (void)rightButtonAction;
- (void)leftButtonAction;
- (id)getCurrentRightButton;
- (id)getCurrentLeftButton:(_Bool)arg1;
- (void)setupPageSheetConfig;
- (_Bool)isFromNoticeDetail;
- (_Bool)isFromStarterVC;
- (double)contentViewHeight;
- (void)layoutUI;
- (void)createUI;
- (_Bool)isMemberLiveNotice:(id)arg1;
- (void)updateLiveNoticeInfo:(id)arg1 selectType:(int)arg2 fromType:(unsigned long long)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

