//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIFont, UILabel;

@interface MMLiveScrollDigitView : UIView
{
    double _oneDigitHeight;
    UIView *backgroundView;
    UILabel *label;
    unsigned long long digit;
    UIFont *digitFont;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIFont *digitFont; // @synthesize digitFont;
@property(readonly, nonatomic) unsigned long long digit; // @synthesize digit;
@property(retain, nonatomic) UILabel *label; // @synthesize label;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView;
- (void)didConfigFinish;
- (void)commitChange;
- (void)setRandomScrollDigit:(unsigned long long)arg1 length:(unsigned long long)arg2;
- (void)setDigitFast:(unsigned long long)arg1;
- (void)setDigitFromLast:(unsigned long long)arg1;
- (id)attrStringFromStr:(id)arg1;
- (void)setDigit:(unsigned long long)arg1 from:(unsigned long long)arg2;
- (void)setDigitAndCommit:(unsigned long long)arg1;

@end

