//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMBadgeView, NSMutableArray, UIImageView, UILabel;

@interface TextStateFriendTopicButton
{
    _Bool _hasSmallReddot;
    unsigned int _notifiesCount;
    long long _buttonStyle;
    NSMutableArray *_headImageViews;
    UIImageView *_textStateIconView;
    UILabel *_textLabel;
    MMBadgeView *_reddotView;
}

+ (id)defaultButton;
- (void).cxx_destruct;
@property(retain, nonatomic) MMBadgeView *reddotView; // @synthesize reddotView=_reddotView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *textStateIconView; // @synthesize textStateIconView=_textStateIconView;
@property(retain, nonatomic) NSMutableArray *headImageViews; // @synthesize headImageViews=_headImageViews;
@property(nonatomic) long long buttonStyle; // @synthesize buttonStyle=_buttonStyle;
@property(nonatomic) _Bool hasSmallReddot; // @synthesize hasSmallReddot=_hasSmallReddot;
@property(nonatomic) unsigned int notifiesCount; // @synthesize notifiesCount=_notifiesCount;
- (id)generateHeadImageView;
- (void)generateHeadImageViewsWith:(id)arg1;
- (void)layoutSubviews;
- (double)widthToFit:(double)arg1;
- (id)firstHeadImageUsername;
- (id)accessibilityLabel;
- (void)updateContent;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1;

@end

