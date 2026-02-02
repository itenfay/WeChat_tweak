//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITextField.h>

@class UIResponder;

@interface FavTagTextField : UITextField
{
    UIResponder *_overrideNextResponder;
    _Bool _isMarking;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isMarking; // @synthesize isMarking=_isMarking;
@property(nonatomic) __weak UIResponder *overrideNextResponder; // @synthesize overrideNextResponder=_overrideNextResponder;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)nextResponder;

@end

