//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class UIButton;

@interface WCFinderNearByDescriptionTableViewCell : UITableViewCell
{
    UIButton *_descriptionLabel;
}

+ (double)descriptionCellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
- (void)updateWith:(id)arg1;
- (void)prepareForReuse;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)hideDescriptionLabel:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

