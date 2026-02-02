//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTagTextField, MMUIButton, NSString, UIImageView;

@interface WCFinderSearchTitleView
{
    long long _style;
    UIImageView *_searchIconView;
    MMTagTextField *_searchField;
    MMUIButton *_rightClearButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *rightClearButton; // @synthesize rightClearButton=_rightClearButton;
@property(retain, nonatomic) MMTagTextField *searchField; // @synthesize searchField=_searchField;
@property(retain, nonatomic) UIImageView *searchIconView; // @synthesize searchIconView=_searchIconView;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void)onClickCleanButton;
- (id)tintColor;
- (_Bool)resignFirstResponder;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
@property(retain, nonatomic) NSString *content;
@property(nonatomic) _Bool enableSearch;
- (void)prepareCancelButton;
- (void)prepareBottomLine;
- (void)prepareTextView;
- (id)dynamicDelegate;
- (id)initWithFrame:(struct CGRect)arg1;

@end

