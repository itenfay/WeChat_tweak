//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, TPRichMediaExtraRequestInfo;
@protocol ITPRichMediaSynchronizerDelegate;

@protocol ITPRichMediaSynchronizer <NSObject>
@property(nonatomic) __weak id <ITPRichMediaSynchronizerDelegate> delegate;
- (void)releaseRichMedia;
- (long long)reset;
- (long long)deselectFeatureAsync:(int)arg1;
- (long long)selectFeatureAsync:(int)arg1 extraRequestInfo:(TPRichMediaExtraRequestInfo *)arg2;
- (NSArray *)features;
- (long long)prepareAsync;
- (long long)setRichMediaSource:(NSString *)arg1;
@end

