//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate, NSNumber, NSString;

@interface WCMomentsMediaPredictedResult : NSObject
{
    NSString *_tid;
    NSString *_mid;
    NSDate *_videoSourcePredictionStartTime;
    NSDate *_videoSourcePredictionEndTime;
    NSNumber *_isUsingVideoSourceHD;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *isUsingVideoSourceHD; // @synthesize isUsingVideoSourceHD=_isUsingVideoSourceHD;
@property(retain, nonatomic) NSDate *videoSourcePredictionEndTime; // @synthesize videoSourcePredictionEndTime=_videoSourcePredictionEndTime;
@property(retain, nonatomic) NSDate *videoSourcePredictionStartTime; // @synthesize videoSourcePredictionStartTime=_videoSourcePredictionStartTime;
@property(copy, nonatomic) NSString *mid; // @synthesize mid=_mid;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;

@end

