//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, NSArray, UIImageView, UITapGestureRecognizer;
@protocol WCFinderTabFilterViewDelegate;

@interface WCFinderTabFilterView : UIView
{
    _Bool _expand;
    id <WCFinderTabFilterViewDelegate> _delegate;
    NSArray *_nameList;
    unsigned long long _selectedIndex;
    MMUILabel *_titleLabel;
    UIImageView *_arrowImageView;
    UITapGestureRecognizer *_tapGesture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic, getter=isExpanded) _Bool expand; // @synthesize expand=_expand;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSArray *nameList; // @synthesize nameList=_nameList;
@property(nonatomic) __weak id <WCFinderTabFilterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)showMenu;
- (id)generateMenuItems;
- (void)onTap:(id)arg1;
- (void)switchExpand:(_Bool)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)initGestures;
- (void)initLayout;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

