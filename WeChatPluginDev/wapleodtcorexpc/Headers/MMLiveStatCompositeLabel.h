//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel;

@interface MMLiveStatCompositeLabel : UIView
{
    MMUILabel *_titleLabel;
    MMUILabel *_subtitleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)updateWithTitle:(id)arg1 subtitle:(id)arg2;
- (void)initView;
- (void)layoutSubviews;
- (id)init;

@end

