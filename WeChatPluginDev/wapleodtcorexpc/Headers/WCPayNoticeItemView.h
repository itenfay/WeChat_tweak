//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NoticeItem, UIButton, UIImageView, UILabel, WCPayWebImageView;

@interface WCPayNoticeItemView : UIView
{
    NoticeItem *_noticeItem;
    UIView *_backgroundView;
    UILabel *_titleLabel;
    WCPayWebImageView *_leftIconImageView;
    UIImageView *_rightArrowImageView;
    UIButton *_jumpButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *jumpButton; // @synthesize jumpButton=_jumpButton;
@property(retain, nonatomic) UIImageView *rightArrowImageView; // @synthesize rightArrowImageView=_rightArrowImageView;
@property(retain, nonatomic) WCPayWebImageView *leftIconImageView; // @synthesize leftIconImageView=_leftIconImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NoticeItem *noticeItem; // @synthesize noticeItem=_noticeItem;
- (void)updateView;
- (void)jumpToNoticeUrl;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)updateViewWithItem:(id)arg1;

@end

