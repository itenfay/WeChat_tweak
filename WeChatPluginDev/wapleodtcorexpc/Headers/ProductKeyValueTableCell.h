//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, UILabel, UIView;
@protocol ProductKeyValueTableCellDelegate;

@interface ProductKeyValueTableCell
{
    NSString *_key;
    NSString *_value;
    _Bool _isExpanded;
    id <ProductKeyValueTableCellDelegate> _delegate;
    UILabel *_keyLabel;
    UILabel *_valueLabel;
    UIButton *_expandButton;
    UIView *_marginView;
    _Bool _shouldExpand;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ProductKeyValueTableCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isExpanded; // @synthesize isExpanded=_isExpanded;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)onViewMore;
- (struct CGSize)updateSizeForCell;
- (void)sizeToFit;
- (id)init;

@end

