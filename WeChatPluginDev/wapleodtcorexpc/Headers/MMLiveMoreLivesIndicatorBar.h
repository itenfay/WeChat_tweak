//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMWebImageView, UIImageView;

@interface MMLiveMoreLivesIndicatorBar
{
    CDUnknownBlockType _moreLiveClickedCallBlock;
    MMUILabel *_moreLiveLabel;
    UIImageView *_arrowIconView;
    MMWebImageView *_moreLiveIconView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMWebImageView *moreLiveIconView; // @synthesize moreLiveIconView=_moreLiveIconView;
@property(retain, nonatomic) UIImageView *arrowIconView; // @synthesize arrowIconView=_arrowIconView;
@property(retain, nonatomic) MMUILabel *moreLiveLabel; // @synthesize moreLiveLabel=_moreLiveLabel;
@property(copy, nonatomic) CDUnknownBlockType moreLiveClickedCallBlock; // @synthesize moreLiveClickedCallBlock=_moreLiveClickedCallBlock;
- (void)onMoreLiveClicked:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)sizeToFits;
- (void)updateMoreLiveBarTitle:(id)arg1 iconUrl:(id)arg2;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 andTaskId:(id)arg2 componentKey:(id)arg3;

@end

