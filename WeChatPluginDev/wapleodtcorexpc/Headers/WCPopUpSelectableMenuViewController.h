//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAShapeLayer, UIView, WCSelectableMenuView;

@interface WCPopUpSelectableMenuViewController
{
    WCSelectableMenuView *_menuView;
    UIView *_menuContainerView;
    CAShapeLayer *_bubbleLayer;
    CDUnknownBlockType _willHideCallback;
    CDUnknownBlockType _didHideCallback;
    CDUnknownBlockType _selection;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType selection; // @synthesize selection=_selection;
@property(copy, nonatomic) CDUnknownBlockType didHideCallback; // @synthesize didHideCallback=_didHideCallback;
@property(copy, nonatomic) CDUnknownBlockType willHideCallback; // @synthesize willHideCallback=_willHideCallback;
@property(retain, nonatomic) CAShapeLayer *bubbleLayer; // @synthesize bubbleLayer=_bubbleLayer;
@property(retain, nonatomic) UIView *menuContainerView; // @synthesize menuContainerView=_menuContainerView;
@property(retain, nonatomic) WCSelectableMenuView *menuView; // @synthesize menuView=_menuView;
- (void)hideMenuAnimated;
- (void)makeViewAtPoint:(struct CGPoint)arg1;
- (void)showAtPoint:(struct CGPoint)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (id)initWithItems:(id)arg1 selectedIndex:(unsigned long long)arg2;

@end

