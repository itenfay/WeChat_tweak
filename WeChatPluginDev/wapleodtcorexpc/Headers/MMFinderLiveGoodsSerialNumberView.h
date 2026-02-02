//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIFont, UILabel;

@interface MMFinderLiveGoodsSerialNumberView : UIView
{
    UIFont *_font;
    unsigned long long _serialNumber;
    UILabel *_label;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) unsigned long long serialNumber; // @synthesize serialNumber=_serialNumber;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

