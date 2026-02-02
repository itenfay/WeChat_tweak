//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMWebImageView, NSString, UITapGestureRecognizer, UIView;

@interface VoipRecentStatusTextStatePublishSourceView
{
    _Bool _preferCustomView;
    NSString *_sourceId;
    NSString *_iconName;
    NSString *_iconImageURL;
    UIView *_customView;
    CDUnknownBlockType _refreshHandler;
    CDUnknownBlockType _tapHandler;
    MMWebImageView *_iconImageView;
    MMUILabel *_nameLabel;
    UITapGestureRecognizer *_tapGesture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) MMUILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) _Bool preferCustomView; // @synthesize preferCustomView=_preferCustomView;
@property(copy, nonatomic) CDUnknownBlockType tapHandler; // @synthesize tapHandler=_tapHandler;
@property(copy, nonatomic) CDUnknownBlockType refreshHandler; // @synthesize refreshHandler=_refreshHandler;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(retain, nonatomic) NSString *iconImageURL; // @synthesize iconImageURL=_iconImageURL;
@property(retain, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(retain, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
- (void)onTapView:(id)arg1;
- (void)updateIcon;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)initGesture;
- (void)initSubviews;
- (void)updateWithTextState:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

