//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface WXGRoamBackupPackageDetailCell : UIView
{
    UILabel *_titleLabel;
    UILabel *_subTitleLable;
    UILabel *_prefix;
    UIImageView *_arrowImg;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowImg; // @synthesize arrowImg=_arrowImg;
@property(retain, nonatomic) UILabel *prefix; // @synthesize prefix=_prefix;
@property(retain, nonatomic) UILabel *subTitleLable; // @synthesize subTitleLable=_subTitleLable;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)setEnabled;
- (void)setSubTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2 seperateType:(unsigned long long)arg3 width:(double)arg4 showArrow:(_Bool)arg5 showPrefix:(_Bool)arg6 subTitleColor:(id)arg7;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2 seperateType:(unsigned long long)arg3 width:(double)arg4 showArrow:(_Bool)arg5;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2 seperateType:(unsigned long long)arg3 width:(double)arg4;

@end

