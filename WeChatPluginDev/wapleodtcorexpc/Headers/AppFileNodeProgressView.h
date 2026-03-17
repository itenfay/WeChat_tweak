//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface AppFileNodeProgressView : UIView
{
    double _fProgress;
}

@property double fProgress; // @synthesize fProgress=_fProgress;
- (void)setProgressValue:(double)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

