//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface WCLanDeviceStateItemProgressView : UIView
{
    CAShapeLayer *m_shapeLayer;
    double _progress;
}

+ (id)progressView;
- (void).cxx_destruct;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void)completeAnimate:(_Bool)arg1;
- (void)initShapeLayer;
- (id)initWithFrame:(struct CGRect)arg1;

@end

