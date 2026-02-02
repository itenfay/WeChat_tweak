//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class DeviceRankInfo;

@interface BraceletRankLikeButton : NSObject
{
    DeviceRankInfo *m_rankInfo;
}

@property(retain) DeviceRankInfo *m_rankInfo; // @synthesize m_rankInfo;
- (void)animatChangeToLikeState:(_Bool)arg1;
- (void)initView;
- (id)initWithDeviceRankInfo:(id)arg1;

@end

