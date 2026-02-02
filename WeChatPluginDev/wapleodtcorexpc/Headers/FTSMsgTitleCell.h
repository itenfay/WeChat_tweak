//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AttributeLabel, MMHeadImageView, UIView;

@interface FTSMsgTitleCell
{
    AttributeLabel *_titleLabel;
    AttributeLabel *_subTitleLabel;
    MMHeadImageView *_headImageView;
    MMHeadImageView *_secdHeadImageView;
    UIView *_topLine;
}

- (void).cxx_destruct;
- (id)convertCompressString:(id)arg1 font:(id)arg2 markLocation:(unsigned long long)arg3;
- (id)titleWithArrow:(id)arg1 contentRange:(struct _NSRange *)arg2 arrowRange:(struct _NSRange *)arg3;
- (id)titleWithSuffix:(id)arg1 contentRange:(struct _NSRange *)arg2;
- (void)updateTitle:(id)arg1 andContact:(id)arg2 andMatchTip:(id)arg3 andSubContact:(id)arg4 andSubMatchTip:(id)arg5;
- (void)updateTitle:(id)arg1;
- (void)initView:(double)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

