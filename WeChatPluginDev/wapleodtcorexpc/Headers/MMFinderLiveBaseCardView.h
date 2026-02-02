//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface MMFinderLiveBaseCardView : UIView
{
    UIView *_shadowView;
    UIView *_closeButton;
    UIView *_cardView;
    UIView *_contentView;
    CDUnknownBlockType _closeBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) UIView *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
- (void)hide:(CDUnknownBlockType)arg1;
- (void)showIn:(id)arg1;
- (void)createConstraints;
- (void)initSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

