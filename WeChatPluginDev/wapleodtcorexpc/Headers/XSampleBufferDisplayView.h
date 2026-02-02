//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class AVSampleBufferDisplayLayer;

@interface XSampleBufferDisplayView : UIView
{
    AVSampleBufferDisplayLayer *_displayLayer;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(retain, nonatomic) AVSampleBufferDisplayLayer *displayLayer; // @synthesize displayLayer=_displayLayer;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (_Bool)enqueueImage:(id)arg1;
- (void)setVideoContentMode:(unsigned long long)arg1;

@end

