//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIButton, UIImageView, UILabel, UIView;
@protocol MMOrderCenterOrderSearchHistoryTableViewItemCellDelegate;

@interface MMOrderCenterOrderSearchHistoryTableViewItemCell : UITableViewCell
{
    NSString *_keyword;
    id <MMOrderCenterOrderSearchHistoryTableViewItemCellDelegate> _delegate;
    UIImageView *_historyIconView;
    UILabel *_keywordView;
    UIButton *_removeView;
    UIView *_separatorBarView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separatorBarView; // @synthesize separatorBarView=_separatorBarView;
@property(retain, nonatomic) UIButton *removeView; // @synthesize removeView=_removeView;
@property(retain, nonatomic) UILabel *keywordView; // @synthesize keywordView=_keywordView;
@property(retain, nonatomic) UIImageView *historyIconView; // @synthesize historyIconView=_historyIconView;
@property(nonatomic) __weak id <MMOrderCenterOrderSearchHistoryTableViewItemCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (void)onRemoveTapped;
- (void)layoutSubviews;
- (void)updateWithKeyword:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

