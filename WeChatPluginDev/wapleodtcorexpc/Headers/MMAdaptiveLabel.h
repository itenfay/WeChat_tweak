//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMAdaptiveLabel
{
    int m_adaptiveType;
}

+ (struct CGSize)getIdealSize:(id)arg1 initSize:(struct CGSize)arg2 forAdaptiveType:(int)arg3;
- (void)setLineBreakMode:(long long)arg1;
- (void)setFont:(id)arg1;
- (void)setText:(id)arg1;
- (void)setSize:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setAdaptiveType:(int)arg1;
- (void)adjustSize;
- (void)internalAdjustFrame:(struct CGRect *)arg1;

@end

