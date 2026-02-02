//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebImageView, SightIconView;

@interface WCTogetherFinderFeedCell
{
    MMWebImageView *_previewImageView;
    SightIconView *_playIconView;
}

+ (double)heightForItemContentViewWithViewItem:(id)arg1 inTableView:(id)arg2;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) SightIconView *playIconView; // @synthesize playIconView=_playIconView;
@property(retain, nonatomic) MMWebImageView *previewImageView; // @synthesize previewImageView=_previewImageView;
- (void)contentDidTap;
- (void)layoutItemContentView;
- (void)loadItemContentView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateValueForKeyPath:(id)arg1;
- (id)observingKeyPathsForViewModel;

@end

