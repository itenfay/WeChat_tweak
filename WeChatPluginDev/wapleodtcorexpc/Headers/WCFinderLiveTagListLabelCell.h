//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class UILabel, WCFinderLiveTagListCollectionViewConfig;

@interface WCFinderLiveTagListLabelCell : UICollectionViewCell
{
    _Bool _isToggle;
    UILabel *_titleLabel;
    WCFinderLiveTagListCollectionViewConfig *_config;
}

+ (id)displayTitle:(id)arg1 withLimitCharCount:(long long)arg2;
+ (struct CGSize)calculateTextSize:(id)arg1 config:(id)arg2;
+ (struct CGSize)cellSizeWithTitle:(id)arg1 config:(id)arg2;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveTagListCollectionViewConfig *config; // @synthesize config=_config;
@property(nonatomic) _Bool isToggle; // @synthesize isToggle=_isToggle;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)unToggle;
- (void)toggle;
- (void)updateDarkModeUI;
- (void)updateWithConfig:(id)arg1 item:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

