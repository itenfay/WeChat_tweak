//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView;

@interface WCOutPadButton
{
    UIView *m_iconView;
    UIView *m_coverView;
}

- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)performLayout;
- (void)layoutSubviews;
- (void)InternalInitWithIconImage:(id)arg1 coverImage:(id)arg2 selectedBackgroundColor:(id)arg3;
- (void)InternalInitWithIconView:(id)arg1 coverView:(id)arg2;
- (id)initWithIconImage:(id)arg1 coverImage:(id)arg2 selectedBackgroundColor:(id)arg3;
- (id)initWithMainLabel:(id)arg1 subLabel:(id)arg2 colorMode:(unsigned long long)arg3;

@end

