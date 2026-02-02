//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, MMWebImageView, NSString, UIColor;

@interface WCFinderSDKFinderBindTopView : UIView
{
    double _bottomPadding;
    UIColor *_imageViewBgColor;
    NSString *_iconUrl;
    NSString *_appName;
    NSString *_actionWording;
    NSString *_scopeDesc;
    NSString *_appendDetailStr;
    MMWebImageView *_appIconImageView;
    MMUILabel *_titleLabel;
    MMUILabel *_scopeLabel;
    MMUILabel *_detailLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) MMUILabel *scopeLabel; // @synthesize scopeLabel=_scopeLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *appIconImageView; // @synthesize appIconImageView=_appIconImageView;
@property(copy, nonatomic) NSString *appendDetailStr; // @synthesize appendDetailStr=_appendDetailStr;
@property(copy, nonatomic) NSString *scopeDesc; // @synthesize scopeDesc=_scopeDesc;
@property(copy, nonatomic) NSString *actionWording; // @synthesize actionWording=_actionWording;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) UIColor *imageViewBgColor; // @synthesize imageViewBgColor=_imageViewBgColor;
@property(nonatomic) double bottomPadding; // @synthesize bottomPadding=_bottomPadding;
- (double)layoutSubviewsAndCalculateHeight;
- (void)layoutSubviews;
- (void)initSubviews;
- (void)reloadWithIconUrl:(id)arg1 appName:(id)arg2;
- (id)initWithIconUrl:(id)arg1 appName:(id)arg2 actionWording:(id)arg3 scopeDesc:(id)arg4 appendDetailStr:(id)arg5;

@end

