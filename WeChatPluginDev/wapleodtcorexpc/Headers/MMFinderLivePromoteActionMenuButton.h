//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIButton;

@interface MMFinderLivePromoteActionMenuButton
{
    UIButton *_deleteButton;
}

+ (double)preferWidth;
- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
- (void)setTag:(long long)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)layoutDeleteButton;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

