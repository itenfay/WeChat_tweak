//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMGradientView, RichTextView, UILabel;

@interface MMFinderLiveHotSaleInfoView : UIView
{
    _Bool _isDuringUpdate;
    unsigned long long _value;
    RichTextView *_richTextView;
    MMGradientView *_gradientView;
    UILabel *_valueLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) MMGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) RichTextView *richTextView; // @synthesize richTextView=_richTextView;
@property(nonatomic) unsigned long long value; // @synthesize value=_value;
@property(nonatomic) _Bool isDuringUpdate; // @synthesize isDuringUpdate=_isDuringUpdate;
- (void)updateValue:(unsigned long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)valueTextForValue:(unsigned long long)arg1;
- (id)initWithWording:(id)arg1 value:(unsigned long long)arg2;

@end

