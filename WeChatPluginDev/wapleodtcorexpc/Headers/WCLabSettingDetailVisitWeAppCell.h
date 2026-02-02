//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class UIButton, WCLabsAppItem;
@protocol WCLabSettingDetailVisitWeAppCellDelegate;

@interface WCLabSettingDetailVisitWeAppCell : UITableViewCell
{
    UIButton *_button;
    WCLabsAppItem *_labItem;
    id <WCLabSettingDetailVisitWeAppCellDelegate> _delegate;
}

+ (double)height;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WCLabSettingDetailVisitWeAppCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)initButton;
- (void)onClickVisitWeApp:(id)arg1;
- (void)configureWithLabItem:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

