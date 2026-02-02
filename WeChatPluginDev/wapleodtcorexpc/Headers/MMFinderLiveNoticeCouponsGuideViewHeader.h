//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface MMFinderLiveNoticeCouponsGuideViewHeader : UIView
{
    UIImageView *_doneView;
    UILabel *_reservedLabel;
    UILabel *_willNoticeLabel;
    UILabel *_canReceiveLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *canReceiveLabel; // @synthesize canReceiveLabel=_canReceiveLabel;
@property(retain, nonatomic) UILabel *willNoticeLabel; // @synthesize willNoticeLabel=_willNoticeLabel;
@property(retain, nonatomic) UILabel *reservedLabel; // @synthesize reservedLabel=_reservedLabel;
@property(retain, nonatomic) UIImageView *doneView; // @synthesize doneView=_doneView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithNotices:(id)arg1;

@end

