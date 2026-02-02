//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIStackView.h>

@class GeneralHStack;

@interface MMCustomTitleView : UIStackView
{
    GeneralHStack *_firstStack;
    GeneralHStack *_secondStack;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GeneralHStack *secondStack; // @synthesize secondStack=_secondStack;
@property(retain, nonatomic) GeneralHStack *firstStack; // @synthesize firstStack=_firstStack;
- (void)setSubTitle:(id)arg1;
- (void)setMainTitle:(id)arg1;
- (id)init;

@end

