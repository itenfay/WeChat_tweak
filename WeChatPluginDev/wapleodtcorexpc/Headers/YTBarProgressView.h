//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIColor;

@interface YTBarProgressView : UIView
{
    float _progress;
    UIColor *_lineColor;
    UIColor *_progressRemainingColor;
    UIColor *_progressColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *progressColor; // @synthesize progressColor=_progressColor;
@property(retain, nonatomic) UIColor *progressRemainingColor; // @synthesize progressRemainingColor=_progressRemainingColor;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(nonatomic) float progress; // @synthesize progress=_progress;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)observableKeypaths;
- (void)unregisterFromKVO;
- (void)registerForKVO;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

