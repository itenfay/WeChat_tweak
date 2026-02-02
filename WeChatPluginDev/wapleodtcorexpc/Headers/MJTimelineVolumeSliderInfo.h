//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJPublisherSlider, MMUILabel;

@interface MJTimelineVolumeSliderInfo : NSObject
{
    MMUILabel *_titleLabel;
    MMUILabel *_valueLabel;
    MJPublisherSlider *_slider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MJPublisherSlider *slider; // @synthesize slider=_slider;
@property(retain, nonatomic) MMUILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)setVolume:(float)arg1;
- (id)initWithTitleLabel:(id)arg1 valueLabel:(id)arg2 slider:(id)arg3;

@end

