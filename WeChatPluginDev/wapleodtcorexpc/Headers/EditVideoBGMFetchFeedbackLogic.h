//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, RecommendedMusicFeedback, WCStatTimerHelper;
@protocol EditVideoBGMFetchFeedbackLogicDelegate;

@interface EditVideoBGMFetchFeedbackLogic : NSObject
{
    id <EditVideoBGMFetchFeedbackLogicDelegate> _delegate;
    NSMutableArray *_recommendedMusicFeedbacks;
    RecommendedMusicFeedback *_currentRecommendedMusicFeedback;
    WCStatTimerHelper *_statTimeHelper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCStatTimerHelper *statTimeHelper; // @synthesize statTimeHelper=_statTimeHelper;
@property(retain, nonatomic) RecommendedMusicFeedback *currentRecommendedMusicFeedback; // @synthesize currentRecommendedMusicFeedback=_currentRecommendedMusicFeedback;
@property(retain, nonatomic) NSMutableArray *recommendedMusicFeedbacks; // @synthesize recommendedMusicFeedbacks=_recommendedMusicFeedbacks;
@property(nonatomic) __weak id <EditVideoBGMFetchFeedbackLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)bussId;
- (void)addNewFeedbackInfo:(id)arg1 musicIndex:(unsigned long long)arg2 behaviorType:(unsigned char)arg3 searchID:(unsigned long long)arg4 searchKeyWork:(id)arg5;
- (void)addNewFeedbackInfo:(id)arg1 musicIndex:(unsigned long long)arg2 behaviorType:(unsigned char)arg3;
- (void)endLastFeedbackInfo;
- (void)reportFetchBgmFeedback:(_Bool)arg1 withSelected:(id)arg2 andRequestId:(unsigned long long)arg3 andIsmusicOn:(_Bool)arg4 isSearchMusic:(_Bool)arg5;
- (void)reportForSearch:(unsigned long long)arg1 recommentId:(unsigned long long)arg2 queryStr:(id)arg3 reportType:(unsigned long long)arg4 maxIndex:(unsigned long long)arg5;
- (id)init;

@end

