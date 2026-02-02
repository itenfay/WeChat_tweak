//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIButton;

@interface CSCHoleMaskViewMgr : NSObject
{
    UIButton *_leftMaskView;
    UIButton *_topMaskView;
    UIButton *_rightMaskView;
    UIButton *_bottomMaskView;
    CDUnknownBlockType _clickBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(retain, nonatomic) UIButton *bottomMaskView; // @synthesize bottomMaskView=_bottomMaskView;
@property(retain, nonatomic) UIButton *rightMaskView; // @synthesize rightMaskView=_rightMaskView;
@property(retain, nonatomic) UIButton *topMaskView; // @synthesize topMaskView=_topMaskView;
@property(retain, nonatomic) UIButton *leftMaskView; // @synthesize leftMaskView=_leftMaskView;
- (void)dealloc;
- (void)onClickMaskView;
- (void)setupMaskViewsWithSuperview:(id)arg1 andHoleFrame:(struct CGRect)arg2;
- (void)setMaskViewHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithSuperview:(id)arg1 andHoleFrame:(struct CGRect)arg2 andClickBlock:(CDUnknownBlockType)arg3;

@end

