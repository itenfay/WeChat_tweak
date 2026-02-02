//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIActivityIndicatorView, MMUILabel;

@interface MMLiveBizArticleMoreView : UIView
{
    long long _loadStatus;
    MMUILabel *_tipsLabel;
    MMUIActivityIndicatorView *_activityIndicatorView;
}

+ (double)defaultHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(nonatomic) long long loadStatus; // @synthesize loadStatus=_loadStatus;
- (void)updateActivityIndicatorViewWithLoadStatus:(long long)arg1;
- (void)updateTipsLabelWithLoadStatus:(long long)arg1;
- (void)layoutSubviews;
- (void)loadActivityIndicatorView;
- (void)loadTipsLabel;
- (id)initWithFrame:(struct CGRect)arg1;

@end

