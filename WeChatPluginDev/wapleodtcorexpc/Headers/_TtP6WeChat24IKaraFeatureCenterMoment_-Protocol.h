//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDate, NSString, WCMediaItem, WCMediaItemWrap;

@protocol _TtP6WeChat24IKaraFeatureCenterMoment_

@optional
- (void)thumbnailOfMomentMedia:(WCMediaItem *)arg1 downloadedAt:(NSDate *)arg2;
- (void)moment:(WCMediaItemWrap *)arg1 appearedAt:(NSDate *)arg2;
- (void)mediaOfMomentWithIdentified:(NSString *)arg1 atPosition:(long long)arg2 preparedAt:(NSDate *)arg3;
- (void)mediaOfMomentWithIdentified:(NSString *)arg1 atPosition:(long long)arg2 recalledAt:(NSDate *)arg3;
- (void)moment:(WCMediaItemWrap *)arg1 receivedAt:(NSDate *)arg2;
@end

