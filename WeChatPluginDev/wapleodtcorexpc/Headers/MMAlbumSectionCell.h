//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, MMUILabel;
@protocol MMAlbumSectionCellDelegate;

@interface MMAlbumSectionCell : UIView
{
    _Bool _active;
    id <MMAlbumSectionCellDelegate> _delegate;
    unsigned long long _section;
    MMUIButton *_button;
    MMUILabel *_titleLabel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *button; // @synthesize button=_button;
@property(nonatomic) unsigned long long section; // @synthesize section=_section;
@property(nonatomic) __weak id <MMAlbumSectionCellDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isAccessibilityElement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)onClick:(id)arg1;
- (void)laytoutTitleViews;
- (void)updateTitle:(id)arg1 animated:(_Bool)arg2;
- (void)initViews;
- (id)initWithSection:(unsigned long long)arg1;

@end

