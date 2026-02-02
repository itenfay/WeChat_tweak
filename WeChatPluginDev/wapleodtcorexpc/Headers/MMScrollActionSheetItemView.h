//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMScrollActionSheetItem;
@protocol MMScrollActionSheetItemViewDelegate;

@interface MMScrollActionSheetItemView
{
    id <MMScrollActionSheetItemViewDelegate> _delegate;
    MMScrollActionSheetItem *_item;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMScrollActionSheetItem *item; // @synthesize item=_item;
@property(nonatomic) __weak id <MMScrollActionSheetItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)highLight;
- (void)reloadData;
- (void)onTapd;
- (id)initWithFrame:(struct CGRect)arg1;

@end

