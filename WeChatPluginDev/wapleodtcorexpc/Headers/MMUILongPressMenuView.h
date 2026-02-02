//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@protocol LongPressMenuViewDelegate;

@interface MMUILongPressMenuView : UIView
{
    id <LongPressMenuViewDelegate> menu_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <LongPressMenuViewDelegate> menu_delegate; // @synthesize menu_delegate;
- (void)copy:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)LongPressEvents;
- (id)initWithFrame:(struct CGRect)arg1;

@end

