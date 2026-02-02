//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderCreateLiveSpamCheckReportSession : NSObject
{
    int _scene;
    unsigned long long _enterTimestamp;
    NSString *_pageId;
    NSString *_finderUserName;
}

- (void).cxx_destruct;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *finderUserName; // @synthesize finderUserName=_finderUserName;
@property(retain, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
@property(nonatomic) unsigned long long enterTimestamp; // @synthesize enterTimestamp=_enterTimestamp;
- (void)reportClickEid:(id)arg1;
- (void)reportExposeEid:(id)arg1;
- (void)reportLeaving;
- (void)reportEntering;
- (id)initWithScene:(int)arg1 pageId:(id)arg2;

@end

