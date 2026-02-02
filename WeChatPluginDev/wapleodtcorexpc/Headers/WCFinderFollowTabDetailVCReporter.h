//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderFollowTabDetailVCReporter : NSObject
{
    int _commentScene;
    NSString *_originExtraInfo;
    NSString *_firstFeedId;
    NSString *_firstTraceId;
}

- (void).cxx_destruct;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(copy, nonatomic) NSString *firstTraceId; // @synthesize firstTraceId=_firstTraceId;
@property(copy, nonatomic) NSString *firstFeedId; // @synthesize firstFeedId=_firstFeedId;
@property(copy, nonatomic) NSString *originExtraInfo; // @synthesize originExtraInfo=_originExtraInfo;
- (void)endReportInfo;
- (void)startupReportInfo;
- (void)setupFirstFeedID:(id)arg1;

@end

