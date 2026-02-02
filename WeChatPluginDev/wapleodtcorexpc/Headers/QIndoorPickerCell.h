//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class NSString, QIndoorLevel, UILabel;

@interface QIndoorPickerCell : UITableViewCell
{
    _Bool _isDarkStyle;
    QIndoorLevel *_indoorLevel;
    UILabel *_label;
    NSString *_customFont;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *customFont; // @synthesize customFont=_customFont;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) QIndoorLevel *indoorLevel; // @synthesize indoorLevel=_indoorLevel;
@property(nonatomic) _Bool isDarkStyle; // @synthesize isDarkStyle=_isDarkStyle;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 isDarkStyle:(_Bool)arg3;
- (void)setupLabel;
- (void)setupBackground;
- (void)layoutSubviews;
- (void)fillLabel;

@end

