//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface MMFinderLiveConnectMicSeatNameLabel : UIView
{
    UILabel *_label;
    NSString *_seatName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *seatName; // @synthesize seatName=_seatName;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)updateSeatName:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

