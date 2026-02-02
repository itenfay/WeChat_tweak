//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel;

@interface LotteryWinnerListFooterView : UIView
{
    MMUILabel *_noMemAttendTipLabel;
}

+ (double)defaultFooterHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *noMemAttendTipLabel; // @synthesize noMemAttendTipLabel=_noMemAttendTipLabel;
- (void)layoutNoMemAttendTipLabel;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

