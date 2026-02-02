//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveCreateNoticeReporter : NSObject
{
    unsigned long long _sourceScene;
    NSString *_sessionId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned long long sourceScene; // @synthesize sourceScene=_sourceScene;
- (void)reportProfileNoticeOk:(unsigned long long)arg1 withNoticeInfo:(id)arg2;
- (void)reportProfileLiveNotice:(unsigned long long)arg1 withNoticeInfo:(id)arg2 actionJsonDictionary:(id)arg3;
- (id)initWithSourceScene:(unsigned long long)arg1 sessionId:(id)arg2;

@end

