//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIActivityIndicatorView, NSString, UILabel;

@interface WCMomentScrollActionSheetHeaderView : UIView
{
    MMUIActivityIndicatorView *_loadingView;
    UILabel *_titleLabel;
    NSString *_title;
    UIView *_seperator;
}

+ (double)heightForTitle:(id)arg1 width:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *seperator; // @synthesize seperator=_seperator;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
- (void)layoutSubviews;
- (void)initSeperator;
- (void)initTitleLabel;
- (void)initLoadingView;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2;

@end

