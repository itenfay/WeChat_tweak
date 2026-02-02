//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveScrollActionSheetItem;
@protocol MMLiveScrollActionSheetItemViewDelegate;

@interface MMLiveScrollActionSheetItemView
{
    id <MMLiveScrollActionSheetItemViewDelegate> _delegate;
    MMLiveScrollActionSheetItem *_item;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveScrollActionSheetItem *item; // @synthesize item=_item;
@property(nonatomic) __weak id <MMLiveScrollActionSheetItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reloadData;
- (void)onTapd;
- (id)initWithFrame:(struct CGRect)arg1;

@end

