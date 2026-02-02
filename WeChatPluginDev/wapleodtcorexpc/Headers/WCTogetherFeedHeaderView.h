//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UILabel, WCTogetherFeedViewSection;

@interface WCTogetherFeedHeaderView
{
    UILabel *_yearTextLabel;
    UILabel *_dayTextLabel;
}

+ (double)heightForViewSection:(id)arg1 inTableView:(id)arg2;
+ (id)reusableViewIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *dayTextLabel; // @synthesize dayTextLabel=_dayTextLabel;
@property(retain, nonatomic) UILabel *yearTextLabel; // @synthesize yearTextLabel=_yearTextLabel;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)updateValueForKeyPath:(id)arg1;
- (id)observingKeyPathsForViewModel;

// Remaining properties
@property(retain, nonatomic) WCTogetherFeedViewSection *viewSection; // @dynamic viewSection;

@end

