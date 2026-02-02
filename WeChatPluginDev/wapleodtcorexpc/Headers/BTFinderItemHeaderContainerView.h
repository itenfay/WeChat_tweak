//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView;

@interface BTFinderItemHeaderContainerView
{
    _Bool _forceSetHighlight;
    UIView *_opaqueBgView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *opaqueBgView; // @synthesize opaqueBgView=_opaqueBgView;
@property(nonatomic) _Bool forceSetHighlight; // @synthesize forceSetHighlight=_forceSetHighlight;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

