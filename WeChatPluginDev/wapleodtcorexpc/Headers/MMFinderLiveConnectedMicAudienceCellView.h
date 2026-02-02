//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveGroupedBadgeView, MMFinderLiveTrailingButtonTextView, NSString, UIImageView, UILabel;

@interface MMFinderLiveConnectedMicAudienceCellView
{
    _Bool _shouldExpandDesc;
    CDUnknownBlockType _expandStateShouldChange;
    NSString *_subTitle;
    MMFinderLiveGroupedBadgeView *_badgeView;
    UILabel *_descLabel;
    UILabel *_warningLabel;
    UIImageView *_wecoinImageView;
    unsigned long long _price;
    NSString *_descText;
    MMFinderLiveTrailingButtonTextView *_trailingButtonTextView;
}

+ (id)getStyleWithExpand:(_Bool)arg1;
+ (id)genDescLabel;
+ (double)cellHeightWithDescText:(id)arg1 expandDescIfNeeded:(_Bool)arg2 cellWidth:(double)arg3;
+ (id)ReuseIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveTrailingButtonTextView *trailingButtonTextView; // @synthesize trailingButtonTextView=_trailingButtonTextView;
@property(nonatomic) _Bool shouldExpandDesc; // @synthesize shouldExpandDesc=_shouldExpandDesc;
@property(retain, nonatomic) NSString *descText; // @synthesize descText=_descText;
@property(nonatomic) unsigned long long price; // @synthesize price=_price;
@property(retain, nonatomic) UIImageView *wecoinImageView; // @synthesize wecoinImageView=_wecoinImageView;
@property(retain, nonatomic) UILabel *warningLabel; // @synthesize warningLabel=_warningLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMFinderLiveGroupedBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) CDUnknownBlockType expandStateShouldChange; // @synthesize expandStateShouldChange=_expandStateShouldChange;
- (_Bool)showWecoinIconBeforeSubtitle;
- (void)layoutUI;
- (void)configWecoinImageView;
- (void)configWarningLabelWithText:(id)arg1;
- (void)configDescLabel;
- (void)configSubTitleLabel;
- (void)updateWithPaidPrice:(unsigned long long)arg1 descText:(id)arg2 warningText:(id)arg3 expandDescIfNeeded:(_Bool)arg4;
- (void)updateWithConnectMicUser:(id)arg1 searchText:(id)arg2 subTitle:(id)arg3;
- (void)updateRightButton;
- (void)configNickNameLabelWithSearchText:(id)arg1;
- (void)configBadgeView;
- (void)layoutSubviews;
- (void)prepareForReuse;

@end

