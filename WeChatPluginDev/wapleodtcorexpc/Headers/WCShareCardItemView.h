//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, UIView, WCShareCardData;

@interface WCShareCardItemView
{
    _Bool _bForCard;
    NSArray *_shareCardList;
    WCShareCardData *_curDisplayShareCard;
    UIView *_cardBgView;
    UIView *_coverView;
    UIView *_cardBgContainerView;
    NSString *_shareUsernameText;
}

+ (double)LocalCityShareCardEmptyTipsHeight;
+ (double)ShareCardGatherViewHeight;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (id)genTagItemViewWithTagItem:(id)arg1;
- (id)genNewItemView;
- (id)genTagListView;
- (id)genLogoView;
- (id)genCardBgView;
- (_Bool)genShareUserNameAndDetectIfMoreThan2ShareUsr;
- (void)initViewForShareCard;
- (void)layoutSubviews;

@end

