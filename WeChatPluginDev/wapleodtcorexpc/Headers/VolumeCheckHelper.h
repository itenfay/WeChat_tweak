//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WeToast;

@interface VolumeCheckHelper
{
    _Bool m_bHasShowVolumeTip;
    WeToast *_toast;
}

+ (void)freeVolumeCheckHelper;
+ (id)getVolumeCheckHelper;
- (void).cxx_destruct;
@property(retain, nonatomic) WeToast *toast; // @synthesize toast=_toast;
- (void)volumeChanged:(id)arg1;
- (void)showVolumeTip;
- (void)stopShowVolumeTip;
- (void)checkVolume;
- (void)dealloc;
- (id)init;

@end

