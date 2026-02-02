//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, NSString;

@interface AnimationStatusView : UIView
{
    MMUILabel *_statusView;
    NSString *_nsWording;
    NSString *_nsAppending;
}

- (void).cxx_destruct;
- (id)getText;
- (void)stopAnimation;
- (void)startAnimation;
- (void)updateWithWord:(id)arg1 Font:(double)arg2;
- (void)updateWithWord:(id)arg1 Append:(id)arg2 Font:(double)arg3;
- (void)updateColor:(id)arg1;
- (void)playAppending;
- (id)initWithFrame:(struct CGRect)arg1;

@end

