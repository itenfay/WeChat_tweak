//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, UIColor;

@interface MMMultiSelectToolView
{
    NSMutableArray *_buttonArray;
    UIColor *_itemColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *itemColor; // @synthesize itemColor=_itemColor;
@property(retain, nonatomic) NSMutableArray *buttonArray; // @synthesize buttonArray=_buttonArray;
- (void)addDownloadButtonWithTarget:(id)arg1 action:(SEL)arg2;
- (void)addMoreButtonWithTarget:(id)arg1 action:(SEL)arg2;
- (void)addDeleteButtonWithTarget:(id)arg1 action:(SEL)arg2;
- (void)addFavoriteButtonWithTarget:(id)arg1 action:(SEL)arg2;
- (void)addForwardButtonWithTarget:(id)arg1 action:(SEL)arg2;
- (void)addButtonWithImageName:(id)arg1 target:(id)arg2 action:(SEL)arg3 accessibility:(id)arg4;
- (void)setEnable:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

