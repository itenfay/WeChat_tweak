//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderLiveNoticeInfo, MMFinderLiveCreateNoticeReporter, MMUIButton, UIImageView, UILabel, UITapGestureRecognizer;
@protocol MMFinderLiveCompleteNoticeViewDelegate;

@interface MMFinderLiveCompleteNoticeView : UIView
{
    FinderLiveNoticeInfo *_notice;
    MMFinderLiveCreateNoticeReporter *_noticeCreationReporter;
    id <MMFinderLiveCompleteNoticeViewDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    MMUIButton *_createNoticeButton;
    UIImageView *_rightChevronView;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UIImageView *rightChevronView; // @synthesize rightChevronView=_rightChevronView;
@property(retain, nonatomic) MMUIButton *createNoticeButton; // @synthesize createNoticeButton=_createNoticeButton;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <MMFinderLiveCompleteNoticeViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMFinderLiveCreateNoticeReporter *noticeCreationReporter; // @synthesize noticeCreationReporter=_noticeCreationReporter;
@property(retain, nonatomic) FinderLiveNoticeInfo *notice; // @synthesize notice=_notice;
- (void)updateNotice;
- (void)onQuickNoticeButtonTapped;
- (void)onTapped;
- (void)onNewAnchorTaskGuideWithTaskId:(id)arg1 targetItem:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

