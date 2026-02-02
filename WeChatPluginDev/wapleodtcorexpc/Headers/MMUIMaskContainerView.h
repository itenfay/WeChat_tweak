//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer;

@interface MMUIMaskContainerView : UIView
{
    _Bool _paramChanged;
    unsigned long long _maskPosition;
    double _maskLength;
    CAGradientLayer *_maskLayer;
    struct CGSize _lastLayoutSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize lastLayoutSize; // @synthesize lastLayoutSize=_lastLayoutSize;
@property(nonatomic) _Bool paramChanged; // @synthesize paramChanged=_paramChanged;
@property(retain, nonatomic) CAGradientLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(nonatomic) double maskLength; // @synthesize maskLength=_maskLength;
@property(nonatomic) unsigned long long maskPosition; // @synthesize maskPosition=_maskPosition;
- (void)rebuildMaskLayer;
- (void)layoutSubviews;

@end

