//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIImageView, UILabel, UIView;

@interface StorageHardlinkCell : UITableViewCell
{
    NSString *_userName;
    UIImageView *_resourceIcon;
    UILabel *_sourceLabel;
    UILabel *_detailLabel;
    UILabel *_timeLabel;
    UIView *_seperateLine;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *seperateLine; // @synthesize seperateLine=_seperateLine;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
@property(retain, nonatomic) UIImageView *resourceIcon; // @synthesize resourceIcon=_resourceIcon;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (void)updateCellWithUserName:(id)arg1 sessionName:(id)arg2 detail:(id)arg3 time:(id)arg4 finalCell:(_Bool)arg5;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

