//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, SolitaireObj, UIButton, UIImageView, UILabel;
@protocol SolitaireTipsViewDelegate;

@interface SolitaireTipsView : UIView
{
    NSString *_nsHadShowKey;
    SolitaireObj *_solitaireObj;
    id <SolitaireTipsViewDelegate> _delegate;
    UIButton *_bgContentBtn;
    UILabel *_tipsInfoLabel;
    UIButton *_tipActionBtn;
    UIView *_separateLine;
    UIImageView *_iconImageView;
    UIImageView *_arrowImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) UIButton *tipActionBtn; // @synthesize tipActionBtn=_tipActionBtn;
@property(retain, nonatomic) UILabel *tipsInfoLabel; // @synthesize tipsInfoLabel=_tipsInfoLabel;
@property(retain, nonatomic) UIButton *bgContentBtn; // @synthesize bgContentBtn=_bgContentBtn;
@property(nonatomic) __weak id <SolitaireTipsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SolitaireObj *solitaireObj; // @synthesize solitaireObj=_solitaireObj;
@property(retain, nonatomic) NSString *nsHadShowKey; // @synthesize nsHadShowKey=_nsHadShowKey;
- (void)onTapActionButton:(id)arg1;
- (void)autoHiddenSelf;
- (void)show;
- (void)changeDisplayWording;
- (id)accessibilityLabel;
- (id)init;

@end

