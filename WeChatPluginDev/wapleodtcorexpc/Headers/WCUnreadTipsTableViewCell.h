//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSMutableArray, UILabel, WCUnreadTipsViewModel;
@protocol WCUnreadTipsTableViewCellDelegate;

@interface WCUnreadTipsTableViewCell
{
    id <WCUnreadTipsTableViewCellDelegate> _delegate;
    NSMutableArray *_headerViews;
    MMUIButton *_defaultButton;
    UILabel *_titleLabel;
    WCUnreadTipsViewModel *_vm;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) WCUnreadTipsViewModel *vm; // @synthesize vm=_vm;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *defaultButton; // @synthesize defaultButton=_defaultButton;
@property(retain, nonatomic) NSMutableArray *headerViews; // @synthesize headerViews=_headerViews;
@property(nonatomic) __weak id <WCUnreadTipsTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onJumpToUnreadItem;
- (id)genHeadImageView;
- (void)layoutSubviews;
- (void)updateViewModel:(id)arg1;

@end

