//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, _TtC6WeChat31WCFinderSimpleProgressBarConfig;

@interface _TtC6WeChat25WCFinderSimpleProgressBar : UIView
{
    MISSING_TYPE *config;
    MISSING_TYPE *highlightBar;
    MISSING_TYPE *value;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateWithValue:(double)arg1 animation:(_Bool)arg2;
- (void)updateWithValue:(double)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfig:(id)arg1;
@property(nonatomic, retain) _TtC6WeChat31WCFinderSimpleProgressBarConfig *config; // @synthesize config;

@end

