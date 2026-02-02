//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class RhombusView;

@interface MovingRhombusView : UIView
{
    RhombusView *_rmbView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RhombusView *rmbView; // @synthesize rmbView=_rmbView;
- (void)beginLoadingAnimation;
- (id)initWithFrame:(struct CGRect)arg1 progressBarColor:(id)arg2;

@end

