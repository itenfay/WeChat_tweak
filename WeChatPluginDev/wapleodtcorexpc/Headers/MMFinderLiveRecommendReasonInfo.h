//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveRecommendReasonInfo : NSObject
{
    _Bool _isRecommendReasonShowInLiveComment;
    NSString *_recommendReason;
}

+ (id)createRecommendReasonInfo:(id)arg1 showInLiveComment:(_Bool)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool isRecommendReasonShowInLiveComment; // @synthesize isRecommendReasonShowInLiveComment=_isRecommendReasonShowInLiveComment;
@property(retain, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(readonly, nonatomic) _Bool needShowInLiveComment;

@end

