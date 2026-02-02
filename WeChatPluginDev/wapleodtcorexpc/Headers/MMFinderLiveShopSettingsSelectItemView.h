//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@class UIImageView;

@interface MMFinderLiveShopSettingsSelectItemView : NSObject
{
    UIImageView *_iconView;
    UIImageView *_leftIconView;
    CDUnknownBlockType _onSelected;
}

+ (struct CGSize)leftIconDefaultSize;
@property(copy, nonatomic) CDUnknownBlockType onSelected; // @synthesize onSelected=_onSelected;
@property(retain, nonatomic) UIImageView *leftIconView; // @synthesize leftIconView=_leftIconView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)onTapped;
- (id)initWithFrame:(struct CGRect)arg1;

@end
