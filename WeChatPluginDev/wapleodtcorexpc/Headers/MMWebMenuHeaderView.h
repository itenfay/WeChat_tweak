//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMWebImageView, NSString, UIButton, UIImageView, UIView;
@protocol MMWebMenuHeaderViewDelegate;

@interface MMWebMenuHeaderView
{
    id <MMWebMenuHeaderViewDelegate> _menuHeaderDelegate;
    NSString *_brandNanme;
    NSString *_headImageUrl;
    MMWebImageView *_headImageView;
    MMUILabel *_nickNameLabel;
    UIImageView *_arrowImageView;
    UIButton *_headerButton;
    UIView *_seperator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *seperator; // @synthesize seperator=_seperator;
@property(retain, nonatomic) UIButton *headerButton; // @synthesize headerButton=_headerButton;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMUILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) MMWebImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) NSString *headImageUrl; // @synthesize headImageUrl=_headImageUrl;
@property(retain, nonatomic) NSString *brandNanme; // @synthesize brandNanme=_brandNanme;
@property(nonatomic) __weak id <MMWebMenuHeaderViewDelegate> menuHeaderDelegate; // @synthesize menuHeaderDelegate=_menuHeaderDelegate;
- (void)onViewClick;
- (void)layoutSubviews;
- (void)initView;
- (double)contentViewWidth;
- (double)contentViewHeight;
- (id)initWithBrandName:(id)arg1 headImageUrl:(id)arg2;

@end

