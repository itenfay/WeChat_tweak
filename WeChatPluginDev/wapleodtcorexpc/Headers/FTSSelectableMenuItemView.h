//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIControl.h>

@class MMUILabel, NSString;

@interface FTSSelectableMenuItemView : UIControl
{
    NSString *_title;
    double _cornerRadius;
    MMUILabel *_titleLabel;
}

+ (double)estimatedHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)setSelected:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

