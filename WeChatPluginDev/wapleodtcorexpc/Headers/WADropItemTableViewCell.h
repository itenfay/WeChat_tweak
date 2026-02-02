//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIButton, UILabel, UIView;
@protocol WADropItemTableViewCellDelegate;

@interface WADropItemTableViewCell : UITableViewCell
{
    UIButton *_closeBtn;
    UIButton *_backBtn;
    UILabel *_titleView;
    UILabel *_contentView;
    UIView *_splitLine;
    _Bool _showSplit;
    id <WADropItemTableViewCellDelegate> _delegate;
    NSString *_userData;
    NSString *_value;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showSplit; // @synthesize showSplit=_showSplit;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *userData; // @synthesize userData=_userData;
@property(nonatomic) __weak id <WADropItemTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onSelect:(id)arg1;
- (void)onClose:(id)arg1;
- (void)layoutSubviews;
- (void)setContent:(id)arg1 withTitle:(id)arg2;

@end

