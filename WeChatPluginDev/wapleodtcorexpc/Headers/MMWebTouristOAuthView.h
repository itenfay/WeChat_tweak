//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface MMWebTouristOAuthView : UIView
{
    CDUnknownBlockType _authBlock;
    UILabel *_titleTextLabel;
    UIImageView *_errorView;
    UILabel *_subTitleTextLabel;
    UIImageView *_imageArrowView;
    NSString *_titleWording;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *titleWording; // @synthesize titleWording=_titleWording;
@property(retain, nonatomic) UIImageView *imageArrowView; // @synthesize imageArrowView=_imageArrowView;
@property(retain, nonatomic) UILabel *subTitleTextLabel; // @synthesize subTitleTextLabel=_subTitleTextLabel;
@property(retain, nonatomic) UIImageView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) UILabel *titleTextLabel; // @synthesize titleTextLabel=_titleTextLabel;
@property(copy, nonatomic) CDUnknownBlockType authBlock; // @synthesize authBlock=_authBlock;
- (void)onClickAuth;
- (void)resetTitleColor;
- (void)transferToWarningStatus;
- (void)layoutSubviews;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

