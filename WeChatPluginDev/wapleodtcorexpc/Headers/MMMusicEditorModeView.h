//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UILabel;
@protocol MMMusicEditorModeViewDelegate;

@interface MMMusicEditorModeView
{
    id <MMMusicEditorModeViewDelegate> _delegate;
    UILabel *_dotLabel;
    UILabel *_noDotLabel;
    unsigned long long _mode;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) UILabel *noDotLabel; // @synthesize noDotLabel=_noDotLabel;
@property(retain, nonatomic) UILabel *dotLabel; // @synthesize dotLabel=_dotLabel;
@property(nonatomic) __weak id <MMMusicEditorModeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTap:(id)arg1;
- (void)layoutSubviews;
- (void)initWithMode:(unsigned long long)arg1;
- (void)internalInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

