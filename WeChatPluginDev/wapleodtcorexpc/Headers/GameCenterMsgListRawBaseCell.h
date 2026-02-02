//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIView, UIView;

@interface GameCenterMsgListRawBaseCell
{
    _Bool _highLightBackground;
    MMUIView *_dividerView;
    CDUnknownBlockType _clickBlock;
    UIView *_hightLightBgView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *hightLightBgView; // @synthesize hightLightBgView=_hightLightBgView;
@property(nonatomic) _Bool highLightBackground; // @synthesize highLightBackground=_highLightBackground;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(retain, nonatomic) MMUIView *dividerView; // @synthesize dividerView=_dividerView;
- (void)updateWithCellData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

