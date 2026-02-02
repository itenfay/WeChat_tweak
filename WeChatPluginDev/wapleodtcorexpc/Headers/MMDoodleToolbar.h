//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMDoodleToolbarItem, NSMutableArray, UIView;

@interface MMDoodleToolbar
{
    id _delegate;
    UIView *_itemBar;
    MMDoodleToolbarItem *_penItem;
    NSMutableArray *_items;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) MMDoodleToolbarItem *penItem; // @synthesize penItem=_penItem;
@property(retain, nonatomic) UIView *itemBar; // @synthesize itemBar=_itemBar;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void)removeToolbarItem:(id)arg1;
- (void)addToolbarItem:(id)arg1;
- (void)penItemDidClick:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

