//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIActivityIndicatorView, MMUILabel, UIImageView, UIView, WCTogetherMoreViewItem;

@interface WCTogetherMoreCell
{
    UIView *_tipsContainerView;
    MMUIActivityIndicatorView *_activityIndicatorView;
    MMUILabel *_tipsLabel;
    UIView *_endLineContainerView;
    UIView *_leftLine;
    UIImageView *_endPointView;
    UIView *_rightLine;
}

+ (double)heightForViewItem:(id)arg1 inTableView:(id)arg2;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *rightLine; // @synthesize rightLine=_rightLine;
@property(retain, nonatomic) UIImageView *endPointView; // @synthesize endPointView=_endPointView;
@property(retain, nonatomic) UIView *leftLine; // @synthesize leftLine=_leftLine;
@property(retain, nonatomic) UIView *endLineContainerView; // @synthesize endLineContainerView=_endLineContainerView;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) UIView *tipsContainerView; // @synthesize tipsContainerView=_tipsContainerView;
- (void)updateActivityIndicatorViewLoadingState;
- (void)layoutEndContainerView;
- (void)layoutTipsContainerView;
- (void)layoutSubviews;
- (void)loadEndContainerView;
- (void)loadTipsContainerView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateValueForKeyPath:(id)arg1;
- (id)observingKeyPathsForViewModel;

// Remaining properties
@property(retain, nonatomic) WCTogetherMoreViewItem *viewItem; // @dynamic viewItem;

@end

