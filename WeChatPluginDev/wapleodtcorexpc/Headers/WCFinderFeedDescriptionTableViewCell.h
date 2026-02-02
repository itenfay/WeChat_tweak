//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UILabel, UIView;
@protocol WCFinderFeedDescriptionTableViewCellDelegate;

@interface WCFinderFeedDescriptionTableViewCell : UITableViewCell
{
    _Bool _timelineNoMoreCanShowHotSwitch;
    _Bool _addActionShadow;
    _Bool _setMoreActionFloat;
    id <WCFinderFeedDescriptionTableViewCellDelegate> _delegate;
    unsigned long long _type;
    unsigned long long _curSection;
    UILabel *_descriptionLabel;
    UIButton *_actionButton;
    UIView *_actionButtonBGView;
    double _floatTopY;
}

- (void).cxx_destruct;
@property(nonatomic) double floatTopY; // @synthesize floatTopY=_floatTopY;
@property(nonatomic) _Bool setMoreActionFloat; // @synthesize setMoreActionFloat=_setMoreActionFloat;
@property(nonatomic) _Bool addActionShadow; // @synthesize addActionShadow=_addActionShadow;
@property(retain, nonatomic) UIView *actionButtonBGView; // @synthesize actionButtonBGView=_actionButtonBGView;
@property(nonatomic) __weak UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) __weak UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) unsigned long long curSection; // @synthesize curSection=_curSection;
@property(nonatomic) _Bool timelineNoMoreCanShowHotSwitch; // @synthesize timelineNoMoreCanShowHotSwitch=_timelineNoMoreCanShowHotSwitch;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) __weak id <WCFinderFeedDescriptionTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setMoreButtonFloat;
- (id)moreActionView;
- (void)clickAction:(id)arg1;
- (void)layoutSubviews;
- (double)getFloatViewBeginY;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

