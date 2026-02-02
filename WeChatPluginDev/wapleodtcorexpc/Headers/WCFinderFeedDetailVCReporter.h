//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderFeedDetailVCReporter : NSObject
{
    int _commentScene;
    NSString *_originExtraInfo;
    NSString *_feedID;
    NSString *_traceID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *traceID; // @synthesize traceID=_traceID;
@property(copy, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(copy, nonatomic) NSString *originExtraInfo; // @synthesize originExtraInfo=_originExtraInfo;
- (void)endReportInfo;
- (void)startupReportInfo;
- (void)setupWithFeedID:(id)arg1 commentScene:(int)arg2;

@end

