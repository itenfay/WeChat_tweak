//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderEventInfo, NSData, NSString;

@interface WCFinderSearchHotWord : NSObject
{
    NSString *_hotwordText;
    unsigned long long _actionType;
    NSString *_link;
    NSString *_appid;
    NSData *_sessionBuffer;
    NSString *_reasonWording;
    FinderEventInfo *_eventInfo;
    unsigned long long _hotwordId;
    NSString *_requestId;
}

+ (id)genRequestId;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)genWithDict:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_requestId;
+ (void)PBArrayAdd_hotwordId;
+ (void)PBArrayAdd_eventInfo;
+ (void)PBArrayAdd_reasonWording;
+ (void)PBArrayAdd_sessionBuffer;
+ (void)PBArrayAdd_appid;
+ (void)PBArrayAdd_link;
+ (void)PBArrayAdd_actionType;
+ (void)PBArrayAdd_hotwordText;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(nonatomic) unsigned long long hotwordId; // @synthesize hotwordId=_hotwordId;
@property(retain, nonatomic) FinderEventInfo *eventInfo; // @synthesize eventInfo=_eventInfo;
@property(copy, nonatomic) NSString *reasonWording; // @synthesize reasonWording=_reasonWording;
@property(retain, nonatomic) NSData *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
@property(copy, nonatomic) NSString *hotwordText; // @synthesize hotwordText=_hotwordText;
@property(readonly, copy) NSString *description;
- (id)initWithNativeSearchParams:(id)arg1 requestId:(id)arg2;
- (id)initWithFinderSearchHotWord:(id)arg1 requestId:(id)arg2;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

