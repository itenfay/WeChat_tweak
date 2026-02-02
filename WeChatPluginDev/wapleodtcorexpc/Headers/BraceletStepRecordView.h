//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMWebImageView, SportRecord, UIButton, UIImageView, UILabel;

@interface BraceletStepRecordView : UIView
{
    UIView *_lineView;
    MMWebImageView *_iconView;
    UILabel *_titleLabel;
    UIImageView *_arrowView;
    UIButton *_buttonView;
    SportRecord *_record;
}

+ (double)calculateHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) SportRecord *record; // @synthesize record=_record;
@property(retain, nonatomic) UIButton *buttonView; // @synthesize buttonView=_buttonView;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
- (void)initViews;
- (void)layoutSubviews;
- (void)sizeToFitWidth:(double)arg1;
- (id)initWithRecord:(id)arg1;

@end

