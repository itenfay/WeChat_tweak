//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@protocol WCFinderMoreHotContentTableViewCellDelegate;

@interface WCFinderFullMoreHotContentTableViewCell : UITableViewCell
{
    id <WCFinderMoreHotContentTableViewCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCFinderMoreHotContentTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)transferToRecommond;
- (void)setupUI;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

