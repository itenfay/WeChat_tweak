//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;

@interface FavMultiSelectToolView
{
    NSMutableArray *m_btnArray;
}

- (void).cxx_destruct;
- (void)setBtnsEnabled:(_Bool)arg1;
- (void)layoutView;
- (id)createBtnWithImg:(id)arg1 accessibilityStr:(id)arg2 Sel:(SEL)arg3 Target:(id)arg4;
- (void)clearAllBtn;
- (void)addButtonType:(unsigned long long)arg1 selector:(SEL)arg2 target:(id)arg3;

@end

