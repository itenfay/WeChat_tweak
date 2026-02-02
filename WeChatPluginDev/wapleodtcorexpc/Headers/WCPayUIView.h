//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, UIView;

@interface WCPayUIView
{
    _Bool _enableHighlight;
    NSMutableArray *_bizAccessElems;
    double _cornerRadius;
    CDUnknownBlockType _tapAction;
    UIView *_hightLightMask;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *hightLightMask; // @synthesize hightLightMask=_hightLightMask;
@property(copy, nonatomic) CDUnknownBlockType tapAction; // @synthesize tapAction=_tapAction;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) _Bool enableHighlight; // @synthesize enableHighlight=_enableHighlight;
@property(retain, nonatomic) NSMutableArray *bizAccessElems; // @synthesize bizAccessElems=_bizAccessElems;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)accessibilityElements;
- (id)initWithFrame:(struct CGRect)arg1;

@end

