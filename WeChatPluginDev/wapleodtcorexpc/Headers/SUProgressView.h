//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIProgressView.h>

@interface SUProgressView : UIProgressView
{
    float _currentPhaseTotalLength;
    float _currentPhaseDoneLength;
    float _currentPhasePercentage;
    float _currentPhaseBaseProgress;
}

- (void)accumulateDoneLength:(float)arg1;
- (void)newPhaseWithTotalLength:(float)arg1 progressPercentage:(float)arg2;

@end

