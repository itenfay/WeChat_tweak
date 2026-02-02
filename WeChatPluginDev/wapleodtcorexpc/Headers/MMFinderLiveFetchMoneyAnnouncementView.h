//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class Announcement, MMUIImageView, MMUILabel;
@protocol MMFinderLiveFetchMoneyAnnouncementViewDelegate;

@interface MMFinderLiveFetchMoneyAnnouncementView
{
    Announcement *_announcement;
    id <MMFinderLiveFetchMoneyAnnouncementViewDelegate> _delegate;
    MMUIImageView *_iconView;
    MMUILabel *_titleLabel;
    MMUIImageView *_arrowImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak id <MMFinderLiveFetchMoneyAnnouncementViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) Announcement *announcement; // @synthesize announcement=_announcement;
- (void)clickNotifyView;
- (void)initConfig;
- (void)layoutCannotClick;
- (void)layoutCanClick;
- (void)layoutUI;
- (void)initSubviews;
- (id)initWithAnnouncement:(id)arg1 delegate:(id)arg2 width:(double)arg3 height:(double)arg4;

@end

