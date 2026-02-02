//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class UIImageView;

@interface MultiSelectTableViewCell : UITableViewCell
{
    UIImageView *m_selectedImageView;
    _Bool m_bAnimated;
    unsigned int m_iAnimatedCount;
    _Bool m_bSelected;
    _Bool m_bNeedOffset;
    _Bool m_bIsEditting;
    _Bool m_bShowSelectedFlag;
    _Bool _m_bCanSelected;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_bCanSelected; // @synthesize m_bCanSelected=_m_bCanSelected;
@property(nonatomic) _Bool m_bShowSelectedFlag; // @synthesize m_bShowSelectedFlag;
@property(nonatomic) _Bool m_bIsEditting; // @synthesize m_bIsEditting;
@property(nonatomic) _Bool m_bNeedOffset; // @synthesize m_bNeedOffset;
@property(readonly, nonatomic) _Bool m_bSelected; // @synthesize m_bSelected;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)changeSelectdStatus:(_Bool)arg1;
- (void)adjustSelectFlagFrameInternal;

@end

