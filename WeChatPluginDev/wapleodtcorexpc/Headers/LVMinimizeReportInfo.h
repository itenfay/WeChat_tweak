//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface LVMinimizeReportInfo : NSObject
{
    NSString *_sourceContextId;
    NSString *_sourceTabContextId;
    long long _sourceCommentScene;
    NSDictionary *_sourceExtraParams;
    NSDate *_startTime;
    NSString *_playSessionId;
    double _skipRealPlayTime;
}

- (void).cxx_destruct;
@property(nonatomic) double skipRealPlayTime; // @synthesize skipRealPlayTime=_skipRealPlayTime;
@property(retain, nonatomic) NSString *playSessionId; // @synthesize playSessionId=_playSessionId;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSDictionary *sourceExtraParams; // @synthesize sourceExtraParams=_sourceExtraParams;
@property(nonatomic) long long sourceCommentScene; // @synthesize sourceCommentScene=_sourceCommentScene;
@property(copy, nonatomic) NSString *sourceTabContextId; // @synthesize sourceTabContextId=_sourceTabContextId;
@property(copy, nonatomic) NSString *sourceContextId; // @synthesize sourceContextId=_sourceContextId;

@end

