//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIImageView.h>

@class FinderJumpInfo, UILabel;

@interface WCFinderProfileWinterOlympicsView : UIImageView
{
    _Bool _displayCoveredMode;
    id _target;
    SEL _action;
    FinderJumpInfo *_jumpInfo;
    UIImageView *_leftIconView;
    UIImageView *_arrowIconView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *arrowIconView; // @synthesize arrowIconView=_arrowIconView;
@property(retain, nonatomic) UIImageView *leftIconView; // @synthesize leftIconView=_leftIconView;
@property(retain, nonatomic) FinderJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(nonatomic) _Bool displayCoveredMode; // @synthesize displayCoveredMode=_displayCoveredMode;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
- (void)onClick;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateBG;
- (_Bool)showDarkStyle;
- (id)initWithFrame:(struct CGRect)arg1;

@end

