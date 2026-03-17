//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderDiscoveryNearbyLiveCollectionViewCellConfig : NSObject
{
    _Bool _canShowVolumeEduView;
    _Bool _canShowDescription;
    _Bool _enableBottomExtraInfo;
    double _avatorImageDiameter;
    double _authInfoIconLeftMargin;
    double _authInfoIconHeight;
    double _activityImageViewMargin;
    double _nickNameMargin;
    double _avatarImageDescLabelMargin;
    double _descLabelRecommendReasonMargin;
    double _recommendReasonAvatarMargin;
}

+ (id)bannerLiveConfig:(id)arg1;
+ (id)defaultConfig:(id)arg1;
@property(nonatomic) double recommendReasonAvatarMargin; // @synthesize recommendReasonAvatarMargin=_recommendReasonAvatarMargin;
@property(nonatomic) double descLabelRecommendReasonMargin; // @synthesize descLabelRecommendReasonMargin=_descLabelRecommendReasonMargin;
@property(nonatomic) double avatarImageDescLabelMargin; // @synthesize avatarImageDescLabelMargin=_avatarImageDescLabelMargin;
@property(nonatomic) double nickNameMargin; // @synthesize nickNameMargin=_nickNameMargin;
@property(nonatomic) double activityImageViewMargin; // @synthesize activityImageViewMargin=_activityImageViewMargin;
@property(nonatomic) double authInfoIconHeight; // @synthesize authInfoIconHeight=_authInfoIconHeight;
@property(nonatomic) double authInfoIconLeftMargin; // @synthesize authInfoIconLeftMargin=_authInfoIconLeftMargin;
@property(nonatomic) double avatorImageDiameter; // @synthesize avatorImageDiameter=_avatorImageDiameter;
@property(nonatomic) _Bool enableBottomExtraInfo; // @synthesize enableBottomExtraInfo=_enableBottomExtraInfo;
@property(nonatomic) _Bool canShowDescription; // @synthesize canShowDescription=_canShowDescription;
@property(nonatomic) _Bool canShowVolumeEduView; // @synthesize canShowVolumeEduView=_canShowVolumeEduView;
- (void)reset:(id)arg1;

@end

