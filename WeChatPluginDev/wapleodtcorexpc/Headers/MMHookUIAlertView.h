//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, UIAlertAction, UIAlertController;
@protocol UIAlertViewDelegate;

@interface MMHookUIAlertView : UIView
{
    _Bool _visible;
    id <UIAlertViewDelegate> _delegate;
    NSString *_title;
    NSString *_message;
    long long _cancelButtonIndex;
    long long _clickedButtonIndex;
    UIAlertAction *_cancelAction;
    UIAlertController *_alertController;
    NSMutableArray *_actionList;
    CDUnknownBlockType _actionHandler;
}

+ (_Bool)resolveInstanceMethod:(SEL)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(retain, nonatomic) NSMutableArray *actionList; // @synthesize actionList=_actionList;
@property(nonatomic) __weak UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) UIAlertAction *cancelAction; // @synthesize cancelAction=_cancelAction;
@property(nonatomic) long long clickedButtonIndex; // @synthesize clickedButtonIndex=_clickedButtonIndex;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) long long cancelButtonIndex; // @synthesize cancelButtonIndex=_cancelButtonIndex;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <UIAlertViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)fakeAlertView;
- (void)dismissAlertWithComplete:(CDUnknownBlockType)arg1;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)show;
@property(readonly, nonatomic) long long firstOtherButtonIndex;
@property(readonly, nonatomic) long long numberOfButtons;
- (id)buttonTitleAtIndex:(long long)arg1;
- (long long)addButtonWithTitle:(id)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;

@end

