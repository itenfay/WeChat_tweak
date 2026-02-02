//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UILabel;

@interface MMOrderCenterPivotTabView
{
    _Bool _selected;
    NSString *_title;
    long long _numbering;
    UILabel *_titleView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) long long numbering; // @synthesize numbering=_numbering;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)updateText;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) struct CGRect indicatorFrame;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 numbering:(long long)arg3;

@end

