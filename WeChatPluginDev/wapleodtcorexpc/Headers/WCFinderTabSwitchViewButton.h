//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSNumber, UIFont, UILabel, UIView, WCFinderTabSwitchCustomViewInfo;

@interface WCFinderTabSwitchViewButton
{
    long long _index;
    NSNumber *_uniqueId;
    UIFont *_selectedFont;
    UIFont *_normalFont;
    double _titleFontSize;
    UIView *_customView;
    WCFinderTabSwitchCustomViewInfo *_customViewInfo;
    CDUnknownBlockType _customLayout;
    UILabel *_redDotLabel;
    struct CGSize _expandSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *redDotLabel; // @synthesize redDotLabel=_redDotLabel;
@property(nonatomic) struct CGSize expandSize; // @synthesize expandSize=_expandSize;
@property(copy, nonatomic) CDUnknownBlockType customLayout; // @synthesize customLayout=_customLayout;
@property(retain, nonatomic) WCFinderTabSwitchCustomViewInfo *customViewInfo; // @synthesize customViewInfo=_customViewInfo;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(nonatomic) double titleFontSize; // @synthesize titleFontSize=_titleFontSize;
@property(retain, nonatomic) UIFont *normalFont; // @synthesize normalFont=_normalFont;
@property(retain, nonatomic) UIFont *selectedFont; // @synthesize selectedFont=_selectedFont;
@property(retain, nonatomic) NSNumber *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(nonatomic) long long index; // @synthesize index=_index;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)updateRedDotUnreadCount:(unsigned long long)arg1;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateFont;
- (void)setSelected:(_Bool)arg1;

@end

