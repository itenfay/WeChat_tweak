//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class CALayer, MMUILabel, NSString, UIImageView;

@interface MMAuthorizeAddAvatarTableViewCell : UITableViewCell
{
    NSString *_wording;
    UIImageView *_addIconView;
    MMUILabel *_titleLabel;
    CALayer *_separateLine;
}

+ (double)cellHeightForWidth:(double)arg1 wording:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) CALayer *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *addIconView; // @synthesize addIconView=_addIconView;
@property(copy, nonatomic) NSString *wording; // @synthesize wording=_wording;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithWording:(id)arg1;

@end

