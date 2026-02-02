//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView, WCDragDeleteBarView;
@protocol WAMainFrameTaskbarOperationViewControllerDelegate;

@interface WAMainFrameTaskbarOperationViewController
{
    _Bool _showing;
    UIView *_deleteContainerView;
    id <WAMainFrameTaskbarOperationViewControllerDelegate> _delegate;
    long long _option;
    WCDragDeleteBarView *_deleteBarView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showing; // @synthesize showing=_showing;
@property(retain, nonatomic) WCDragDeleteBarView *deleteBarView; // @synthesize deleteBarView=_deleteBarView;
@property(nonatomic) long long option; // @synthesize option=_option;
@property(nonatomic) __weak id <WAMainFrameTaskbarOperationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *deleteContainerView; // @synthesize deleteContainerView=_deleteContainerView;
- (void)unhighlightDeleteArea;
- (long long)highlightDeleteArea:(struct CGPoint)arg1;
- (_Bool)isInOperationArea;
- (void)animateToHideDeleteContainerView:(CDUnknownBlockType)arg1;
- (_Bool)useBlackStatusbar;
- (void)animateToShowDeleteContainerView;
- (void)initDeleteContainerView;
- (void)initSubViews;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

@end

