//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MJSlantedLinesView, UILabel;

@interface MJVideoSafeAreaTipsView : UIView
{
    MJSlantedLinesView *_slantedLinesView;
    UILabel *_tipsLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) MJSlantedLinesView *slantedLinesView; // @synthesize slantedLinesView=_slantedLinesView;
- (void)layoutViews;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

