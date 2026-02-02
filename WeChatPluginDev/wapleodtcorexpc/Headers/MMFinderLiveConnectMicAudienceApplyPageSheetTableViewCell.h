//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIImage, UIImageView, UILabel, UIView;

@interface MMFinderLiveConnectMicAudienceApplyPageSheetTableViewCell : UITableViewCell
{
    UIImageView *_iconView;
    UILabel *_label;
    UIView *_separatorBar;
}

+ (id)reuseId;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separatorBar; // @synthesize separatorBar=_separatorBar;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void)layoutSubviews;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) UIImage *icon;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

