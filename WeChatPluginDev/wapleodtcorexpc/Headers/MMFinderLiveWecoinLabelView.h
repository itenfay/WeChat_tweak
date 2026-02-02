//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveWecoinLabelViewConfig, UIImageView, UILabel;

@interface MMFinderLiveWecoinLabelView : UIView
{
    UILabel *_coinLabel;
    UIImageView *_coinImageView;
    MMFinderLiveWecoinLabelViewConfig *_config;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveWecoinLabelViewConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) UIImageView *coinImageView; // @synthesize coinImageView=_coinImageView;
@property(retain, nonatomic) UILabel *coinLabel; // @synthesize coinLabel=_coinLabel;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)setWecoinAmount:(unsigned long long)arg1;
- (void)updateWithConfig:(id)arg1;
- (void)setupViews;
- (void)initViews;
- (id)init;

@end

