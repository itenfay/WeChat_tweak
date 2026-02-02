//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, MMWebTopBarStyleConfig, NSMutableArray, SightIconView;
@protocol MMWebTopBarDelegate;

@interface MMWebTopBar : UIView
{
    _Bool _canShow;
    id <MMWebTopBarDelegate> _delegate;
    NSMutableArray *_applyingStyles;
    MMWebTopBarStyleConfig *_currentStyle;
    MMUILabel *_label;
    SightIconView *_loadView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SightIconView *loadView; // @synthesize loadView=_loadView;
@property(retain, nonatomic) MMUILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) MMWebTopBarStyleConfig *currentStyle; // @synthesize currentStyle=_currentStyle;
@property(retain, nonatomic) NSMutableArray *applyingStyles; // @synthesize applyingStyles=_applyingStyles;
@property(nonatomic) __weak id <MMWebTopBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool canShow; // @synthesize canShow=_canShow;
- (_Bool)isLoadingShowing;
- (_Bool)haveStyleToShow;
- (void)updateWithCurrentStyle;
- (void)setText:(id)arg1 withHideLoad:(_Bool)arg2;
- (void)updateCurrentShowStyle;
- (void)endShowStyle:(id)arg1;
- (void)startShowStyle:(id)arg1;
- (void)layoutSubviews;
- (void)initSubView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

