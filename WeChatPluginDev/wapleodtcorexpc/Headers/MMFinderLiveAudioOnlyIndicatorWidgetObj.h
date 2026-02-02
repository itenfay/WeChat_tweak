//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCPIPAudioOnlyIndicatorDescription;

@interface MMFinderLiveAudioOnlyIndicatorWidgetObj
{
    WCPIPAudioOnlyIndicatorDescription *_indicatorDescription;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPIPAudioOnlyIndicatorDescription *indicatorDescription; // @synthesize indicatorDescription=_indicatorDescription;
- (double)leftRightIconImageCenterPercent;
- (id)getCompositedLeftIconImage:(id)arg1 rightIconImage:(id)arg2 withMaskImage:(id)arg3;
- (struct CGSize)getMainVideoViewSize;
- (double)titleTextTop;
- (id)getSnapshotUserBackImage;
- (id)initWithIndicatorDescription:(id)arg1 businessId:(id)arg2;

@end

