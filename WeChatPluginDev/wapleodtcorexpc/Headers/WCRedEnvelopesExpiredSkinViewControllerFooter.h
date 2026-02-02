//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class MMUIActivityIndicatorView, MMUILabel, NSString, UILabel, UIView;

@interface WCRedEnvelopesExpiredSkinViewControllerFooter : UICollectionReusableView
{
    int _loadingHintTextSize;
    int _indicatorViewSize;
    int _loadingHintLabelMarginLeft;
    NSString *_limitedWording;
    UIView *_lineViewLeft;
    UIView *_lineViewRight;
    UILabel *_limitedWordingLabel;
    UIView *_limitedWordingView;
    MMUILabel *_loadingHintLabel;
    UIView *_loadingView;
    MMUIActivityIndicatorView *_indicatorView;
}

- (void).cxx_destruct;
@property(nonatomic) int loadingHintLabelMarginLeft; // @synthesize loadingHintLabelMarginLeft=_loadingHintLabelMarginLeft;
@property(nonatomic) int indicatorViewSize; // @synthesize indicatorViewSize=_indicatorViewSize;
@property(nonatomic) int loadingHintTextSize; // @synthesize loadingHintTextSize=_loadingHintTextSize;
@property(retain, nonatomic) MMUIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) MMUILabel *loadingHintLabel; // @synthesize loadingHintLabel=_loadingHintLabel;
@property(retain, nonatomic) UIView *limitedWordingView; // @synthesize limitedWordingView=_limitedWordingView;
@property(retain, nonatomic) UILabel *limitedWordingLabel; // @synthesize limitedWordingLabel=_limitedWordingLabel;
@property(retain, nonatomic) UIView *lineViewRight; // @synthesize lineViewRight=_lineViewRight;
@property(retain, nonatomic) UIView *lineViewLeft; // @synthesize lineViewLeft=_lineViewLeft;
@property(copy, nonatomic) NSString *limitedWording; // @synthesize limitedWording=_limitedWording;
- (void)updateLimitedWordingView;
- (void)updateLoadingView;
- (void)setupLimitedWording:(id)arg1;
- (void)layoutSubviews;
- (void)initValue;

@end

