//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMUIView, UISwitch, WCTableViewCellManager;

@interface MMTableViewCell : UITableViewCell
{
    UISwitch *m_switchAccessoryView;
    _Bool _keepTouchInView;
    MMUIView *m_subContentView;
    WCTableViewCellManager *_cellInfo;
    double _deselectDuration;
    struct UIEdgeInsets _selectedBackgroundViewInsets;
}

+ (id)getCellAttributeDetailTextHightlightedColor;
+ (id)getCellAttributeTextHightlightedColor;
+ (id)getCellTextHightlightedColor;
- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets selectedBackgroundViewInsets; // @synthesize selectedBackgroundViewInsets=_selectedBackgroundViewInsets;
@property(nonatomic) _Bool keepTouchInView; // @synthesize keepTouchInView=_keepTouchInView;
@property(nonatomic) double deselectDuration; // @synthesize deselectDuration=_deselectDuration;
@property(nonatomic) __weak WCTableViewCellManager *cellInfo; // @synthesize cellInfo=_cellInfo;
@property(retain, nonatomic) MMUIView *m_subContentView; // @synthesize m_subContentView;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)addBackgroundView;
- (id)accessoryView;
- (void)setAccessoryView:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)setAccessoryType:(long long)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

