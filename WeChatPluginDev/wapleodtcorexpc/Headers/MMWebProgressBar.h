//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface MMWebProgressBar : UIView
{
    _Bool _isProcessing;
    struct CGRect _oriFrame;
}

@property struct CGRect oriFrame; // @synthesize oriFrame=_oriFrame;
@property _Bool isProcessing; // @synthesize isProcessing=_isProcessing;
- (void)reset;
- (_Bool)isWifiOr4G;
- (float)durationOfPhase4;
- (float)durationOfPhase3;
- (float)durationOfPhase2;
- (float)durationOfPhase1;
- (void)end;
- (void)progressing;
- (void)start:(_Bool)arg1;
- (void)start;
- (id)initWithFrame:(struct CGRect)arg1;

@end

