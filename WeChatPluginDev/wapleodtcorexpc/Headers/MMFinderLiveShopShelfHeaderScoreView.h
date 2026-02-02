//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UILabel;

@interface MMFinderLiveShopShelfHeaderScoreView : UIView
{
    UILabel *_titleLabel;
    UILabel *_levelLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *levelLabel; // @synthesize levelLabel=_levelLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateWithScoreInfo:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

