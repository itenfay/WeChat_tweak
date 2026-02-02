//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIImageView, UILabel, UIView, WCFinderStaticCoverInfoItem;

@interface WCFinderStaticCoverInfoItemView : NSObject
{
    WCFinderStaticCoverInfoItem *_item;
    UILabel *_labelView;
    UIImageView *_iconView;
    UIView *_seperateView;
    UIView *_customView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(retain, nonatomic) UIView *seperateView; // @synthesize seperateView=_seperateView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *labelView; // @synthesize labelView=_labelView;
@property(retain, nonatomic) WCFinderStaticCoverInfoItem *item; // @synthesize item=_item;
@property(nonatomic) _Bool showSeperate;
- (void)setShowSeperate:(_Bool)arg1 padding:(double)arg2;
- (void)updateSeperatorPositionWithContainer:(id)arg1;
- (void)updateIconPosition:(long long)arg1 container:(id)arg2;
- (void)ensureIconView;
- (void)ensureTextLabel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

