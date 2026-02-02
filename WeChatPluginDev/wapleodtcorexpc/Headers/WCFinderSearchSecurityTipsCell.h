//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIImageView, UILabel, UIView;

@interface WCFinderSearchSecurityTipsCell : UICollectionViewCell
{
    UIImageView *_securityTipsIcon;
    UILabel *_securityTipsLabel;
    UIView *_separatorLine;
}

+ (double)displayHeightWithSecurityTips:(id)arg1 withWidth:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) UILabel *securityTipsLabel; // @synthesize securityTipsLabel=_securityTipsLabel;
@property(retain, nonatomic) UIImageView *securityTipsIcon; // @synthesize securityTipsIcon=_securityTipsIcon;
- (void)layoutSubviews;
@property(retain, nonatomic) NSString *securityTips;
- (id)initWithFrame:(struct CGRect)arg1;

@end

