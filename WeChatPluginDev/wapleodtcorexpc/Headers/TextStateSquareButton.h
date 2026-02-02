//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMHeadImageView, MMUILabel, MMWebImageView, NSString, TextStateIcon, UIView;
@protocol TextStateBaseNotifyInfo;

@interface TextStateSquareButton
{
    _Bool _needsUpdateView;
    unsigned int _notifyCount;
    unsigned int _contactCount;
    TextStateIcon *_passthroughIcon;
    id <TextStateBaseNotifyInfo> _latestNotifyInfo;
    NSString *_topUnreadContactUsername;
    MMWebImageView *_iconImageView;
    MMUILabel *_mainLabel;
    UIView *_separatorView;
    MMHeadImageView *_headImageView;
    MMUILabel *_subLabel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needsUpdateView; // @synthesize needsUpdateView=_needsUpdateView;
@property(retain, nonatomic) MMUILabel *subLabel; // @synthesize subLabel=_subLabel;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) MMUILabel *mainLabel; // @synthesize mainLabel=_mainLabel;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) NSString *topUnreadContactUsername; // @synthesize topUnreadContactUsername=_topUnreadContactUsername;
@property(nonatomic) unsigned int contactCount; // @synthesize contactCount=_contactCount;
@property(retain, nonatomic) id <TextStateBaseNotifyInfo> latestNotifyInfo; // @synthesize latestNotifyInfo=_latestNotifyInfo;
@property(nonatomic) unsigned int notifyCount; // @synthesize notifyCount=_notifyCount;
@property(retain, nonatomic) TextStateIcon *passthroughIcon; // @synthesize passthroughIcon=_passthroughIcon;
- (void)updateLayout;
- (void)updateAppendView;
- (void)updateViewIfNeeded;
- (void)setNeedsUpdateView;
- (void)updateIcon;
- (id)icon;
- (id)accessibilityLabel;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (void)initCommonStyles;
- (id)initWithFrame:(struct CGRect)arg1;

@end

