//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class LOTAnimationView;

@interface MMPageSheetProgressiveAnimationView : UIView
{
    LOTAnimationView *_closeIcon;
}

- (void).cxx_destruct;
@property(retain, nonatomic) LOTAnimationView *closeIcon; // @synthesize closeIcon=_closeIcon;
- (void)onPageSheetDragToDismissOffset:(double)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

