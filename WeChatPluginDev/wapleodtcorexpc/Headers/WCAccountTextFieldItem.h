//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UILabel;

@interface WCAccountTextFieldItem
{
    _Bool m_bUseGrayColor;
    UILabel *m_labelTip;
}

- (void).cxx_destruct;
- (void)setTextContentType:(id)arg1;
- (void)setFont:(id)arg1;
- (void)adjustFieldItemWidth:(double)arg1;
- (void)setLeftTitleColor:(id)arg1;
- (void)initView:(struct CGRect)arg1;
- (void)initView:(struct CGRect)arg1 leftMargin:(double)arg2;
- (void)initView:(struct CGRect)arg1 leftMargin:(double)arg2 rightMargin:(double)arg3;
- (void)initView:(struct CGRect)arg1 leftMargin:(double)arg2 rightMargin:(double)arg3 useGrayBackgroundColor:(_Bool)arg4;

@end

