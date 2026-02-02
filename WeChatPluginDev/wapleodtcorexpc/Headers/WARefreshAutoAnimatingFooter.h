//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class DotLoadingView, MMUILabel, NSString, UIColor, UIView;

@interface WARefreshAutoAnimatingFooter
{
    NSString *_noMoreTips;
    DotLoadingView *_loadingView;
    UIColor *_noMoreTipsBackgroundColor;
    UIView *_noMoreDataView;
    UIView *_lineView;
    MMUILabel *_noMoreTipsLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *noMoreTipsLabel; // @synthesize noMoreTipsLabel=_noMoreTipsLabel;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIView *noMoreDataView; // @synthesize noMoreDataView=_noMoreDataView;
@property(retain, nonatomic) UIColor *noMoreTipsBackgroundColor; // @synthesize noMoreTipsBackgroundColor=_noMoreTipsBackgroundColor;
@property(nonatomic) __weak DotLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(copy, nonatomic) NSString *noMoreTips; // @synthesize noMoreTips=_noMoreTips;
- (void)setState:(long long)arg1;
- (void)placeSubviews;
- (void)onTapNoMore:(id)arg1;
- (id)createLoadingView;

@end

