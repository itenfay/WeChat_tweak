//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@protocol SolitaireToolViewDelegate;

@interface SolitaireToolView : UIView
{
    id <SolitaireToolViewDelegate> _delegate;
    UIView *_buttonContainerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *buttonContainerView; // @synthesize buttonContainerView=_buttonContainerView;
@property(nonatomic) __weak id <SolitaireToolViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getButtonHLImage:(int)arg1;
- (id)getButtonImage:(int)arg1;
- (void)onClickItem:(id)arg1;
- (id)getButtonTitle:(int)arg1;
- (void)initView;
- (id)init;

@end

