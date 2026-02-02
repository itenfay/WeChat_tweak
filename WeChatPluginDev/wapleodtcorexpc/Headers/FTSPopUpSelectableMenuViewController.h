//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAShapeLayer, FTSSelectableMenuView, UIColor, UIView;

@interface FTSPopUpSelectableMenuViewController
{
    UIView *_maskView;
    FTSSelectableMenuView *_menuView;
    UIView *_menuContainerView;
    CAShapeLayer *_bubbleLayer;
    CDUnknownBlockType _willHideCallback;
    CDUnknownBlockType _didHideCallback;
    CDUnknownBlockType _selection;
    UIColor *_backgroundColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) CDUnknownBlockType selection; // @synthesize selection=_selection;
@property(copy, nonatomic) CDUnknownBlockType didHideCallback; // @synthesize didHideCallback=_didHideCallback;
@property(copy, nonatomic) CDUnknownBlockType willHideCallback; // @synthesize willHideCallback=_willHideCallback;
@property(retain, nonatomic) CAShapeLayer *bubbleLayer; // @synthesize bubbleLayer=_bubbleLayer;
@property(retain, nonatomic) UIView *menuContainerView; // @synthesize menuContainerView=_menuContainerView;
@property(retain, nonatomic) FTSSelectableMenuView *menuView; // @synthesize menuView=_menuView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
- (void)hideMenuAnimated;
- (void)makeViewAtPoint:(struct CGPoint)arg1;
- (void)showAtPoint:(struct CGPoint)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (id)initWithItems:(id)arg1 selectedIndex:(unsigned long long)arg2;

@end

