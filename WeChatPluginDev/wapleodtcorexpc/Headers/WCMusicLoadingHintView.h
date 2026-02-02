//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIActivityIndicatorView, MMUILabel, NSString;

@interface WCMusicLoadingHintView : UIView
{
    NSString *_loadingText;
    MMUIActivityIndicatorView *_indicatorView;
    MMUILabel *_textLabel;
    double _indicatorAndLabelSpacing;
    struct UIEdgeInsets _contentEdgeInsets;
}

- (void).cxx_destruct;
@property(nonatomic) double indicatorAndLabelSpacing; // @synthesize indicatorAndLabelSpacing=_indicatorAndLabelSpacing;
@property(retain, nonatomic) MMUILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) MMUIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(copy, nonatomic) NSString *loadingText; // @synthesize loadingText=_loadingText;
- (void)layoutSubviews;
- (void)setTextFont:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

