//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;
@protocol GCMyGroupCellExpandBtnViewDelegate;

@interface GCMyGroupCellExpandBtnView : UIView
{
    _Bool _isExpanded;
    _Bool _hasRedDot;
    id <GCMyGroupCellExpandBtnViewDelegate> _delegate;
    UILabel *_textLabel;
    UIImageView *_arrowIcon;
    UIView *_redDotView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *redDotView; // @synthesize redDotView=_redDotView;
@property(retain, nonatomic) UIImageView *arrowIcon; // @synthesize arrowIcon=_arrowIcon;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) _Bool hasRedDot; // @synthesize hasRedDot=_hasRedDot;
@property(nonatomic) _Bool isExpanded; // @synthesize isExpanded=_isExpanded;
@property(nonatomic) __weak id <GCMyGroupCellExpandBtnViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

