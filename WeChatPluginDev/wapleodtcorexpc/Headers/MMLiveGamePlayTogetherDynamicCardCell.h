//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveGamePlayTogetherDynamicCardItem, MagicSclFrameSetView, NSString, UIView;

@interface MMLiveGamePlayTogetherDynamicCardCell
{
    MMLiveGamePlayTogetherDynamicCardItem *_item;
    NSString *_rootId;
    UIView *_containerView;
    MagicSclFrameSetView *_frameSetView;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MagicSclFrameSetView *frameSetView; // @synthesize frameSetView=_frameSetView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSString *rootId; // @synthesize rootId=_rootId;
@property(retain, nonatomic) MMLiveGamePlayTogetherDynamicCardItem *item; // @synthesize item=_item;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)setupViews;
- (void)updatePlayTogetherData:(id)arg1;
- (void)setItem:(id)arg1 rootId:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;

@end

