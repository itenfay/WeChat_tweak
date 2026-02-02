//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView, UIViewController;
@protocol MinimizeTaskContainerInfoDelegate;

@interface MinimizeTaskContainerInfo
{
    _Bool _recieveTouches;
    _Bool _isAlwaysShowInForground;
    _Bool _isBorderless;
    _Bool _isFoldDisabled;
    _Bool _useTightStickType;
    id <MinimizeTaskContainerInfoDelegate> _delegate;
    UIView *_weakContentView;
    UIViewController *_relatedVC;
    UIView *_weakCloseButton;
    double _closeButtonPaddingRight;
    CDUnknownBlockType _positionModificationBlock;
    struct CGSize _containerSizeInAbsorbView;
    struct CGSize _containerSizeInList;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType positionModificationBlock; // @synthesize positionModificationBlock=_positionModificationBlock;
@property(nonatomic) _Bool useTightStickType; // @synthesize useTightStickType=_useTightStickType;
@property(nonatomic) _Bool isFoldDisabled; // @synthesize isFoldDisabled=_isFoldDisabled;
@property(nonatomic) _Bool isBorderless; // @synthesize isBorderless=_isBorderless;
@property(nonatomic) double closeButtonPaddingRight; // @synthesize closeButtonPaddingRight=_closeButtonPaddingRight;
@property(nonatomic) __weak UIView *weakCloseButton; // @synthesize weakCloseButton=_weakCloseButton;
@property(nonatomic) _Bool isAlwaysShowInForground; // @synthesize isAlwaysShowInForground=_isAlwaysShowInForground;
@property(nonatomic) __weak UIViewController *relatedVC; // @synthesize relatedVC=_relatedVC;
@property(nonatomic) _Bool recieveTouches; // @synthesize recieveTouches=_recieveTouches;
@property(nonatomic) struct CGSize containerSizeInList; // @synthesize containerSizeInList=_containerSizeInList;
@property(nonatomic) struct CGSize containerSizeInAbsorbView; // @synthesize containerSizeInAbsorbView=_containerSizeInAbsorbView;
@property(nonatomic) __weak UIView *weakContentView; // @synthesize weakContentView=_weakContentView;
@property(nonatomic) __weak id <MinimizeTaskContainerInfoDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;

@end

