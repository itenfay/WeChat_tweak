//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderLiveNoticeInfo, MMUILabel, MMUIView, UIImageView;

@interface WCFinderLiveBindingNoticeMainView : UIView
{
    FinderLiveNoticeInfo *_noticeInfo;
    MMUIView *_topLineView;
    MMUIView *_bottomLineView;
    UIImageView *_arrowImageView;
    MMUILabel *_timeLabel;
    MMUILabel *_titleLabel;
    MMUILabel *_reserveLabel;
}

+ (id)getReserveString:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *reserveLabel; // @synthesize reserveLabel=_reserveLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMUIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) MMUIView *topLineView; // @synthesize topLineView=_topLineView;
@property(retain, nonatomic) FinderLiveNoticeInfo *noticeInfo; // @synthesize noticeInfo=_noticeInfo;
- (void)layoutUI;
- (void)createUI;
- (void)layoutSubviews;
- (void)updateData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

