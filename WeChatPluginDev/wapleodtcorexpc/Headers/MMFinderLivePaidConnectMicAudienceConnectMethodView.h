//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, NSString, UIImageView;

@interface MMFinderLivePaidConnectMicAudienceConnectMethodView : UIView
{
    _Bool _selected;
    _Bool _showSepLine;
    NSString *_title;
    NSString *_iconName;
    unsigned long long _type;
    CDUnknownBlockType _tapCallback;
    MMUILabel *_titleLabel;
    UIImageView *_iconImageView;
    UIImageView *_checkMarkImageView;
    UIView *_lineView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIImageView *checkMarkImageView; // @synthesize checkMarkImageView=_checkMarkImageView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType tapCallback; // @synthesize tapCallback=_tapCallback;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool showSepLine; // @synthesize showSepLine=_showSepLine;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (void)refreshUI;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)didTap;
- (void)initUI;
- (id)init;

@end

