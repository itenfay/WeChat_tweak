//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, UILabel, UIView, WCFinderAuthInfoIconView, WCFinderContact, WCFinderHeadImageView;
@protocol WCFinderContactListCellDelegate;

@interface WCFinderContactListCell
{
    id <WCFinderContactListCellDelegate> _delegate;
    WCFinderHeadImageView *_headImageView;
    UIImageView *_liveCircle;
    UILabel *_liveTipsLabel;
    UILabel *_nickName;
    WCFinderAuthInfoIconView *_authIconView;
    UILabel *_brandTipsLabel;
    UILabel *_descLabel;
    UIView *_separator;
    WCFinderContact *_contact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *brandTipsLabel; // @synthesize brandTipsLabel=_brandTipsLabel;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authIconView; // @synthesize authIconView=_authIconView;
@property(retain, nonatomic) UILabel *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) UILabel *liveTipsLabel; // @synthesize liveTipsLabel=_liveTipsLabel;
@property(retain, nonatomic) UIImageView *liveCircle; // @synthesize liveCircle=_liveCircle;
@property(retain, nonatomic) WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) __weak id <WCFinderContactListCellDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)onLiveCircleDidClick;
- (void)removeSeparator;
- (void)drawNormalSeparator;
- (void)updateWithContact:(id)arg1;
- (void)setupMenu;
- (void)onRemoveAllMenu;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

