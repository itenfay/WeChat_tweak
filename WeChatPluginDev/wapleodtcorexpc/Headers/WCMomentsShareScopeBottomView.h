//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>
typedef void (^CDUnknownBlockType)(void);

@class MMUIButton;

@interface WCMomentsShareScopeBottomView : UIView
{
    CDUnknownBlockType _modifyShareScopeBlock;
    MMUIButton *_modifyButton;
}

+ (double)heightForShareScopeBottomViewWithWidth:(double)arg1;
@property(retain, nonatomic) MMUIButton *modifyButton; // @synthesize modifyButton=_modifyButton;
@property(copy, nonatomic) CDUnknownBlockType modifyShareScopeBlock; // @synthesize modifyShareScopeBlock=_modifyShareScopeBlock;
- (void)onClickModifyShareScopeButton;
- (void)layoutSubviews;
- (void)initModifyButton;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
