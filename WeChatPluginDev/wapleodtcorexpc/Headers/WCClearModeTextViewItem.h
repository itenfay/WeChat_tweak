//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIButton;

@interface WCClearModeTextViewItem : NSObject
{
    UIButton *m_clearButton;
}

- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)setClearButtonHidden:(_Bool)arg1;
- (void)OnClear:(id)arg1;
- (void)initView:(struct CGRect)arg1;
- (id)scaleImage:(id)arg1 toSize:(struct CGSize)arg2;

@end

