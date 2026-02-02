//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCTimelineMissReadRecord : NSObject
{
    _Bool _isRealCreatTime;
    unsigned int _firstFeedCreatTime;
    unsigned long long _missReadRecordId;
    NSMutableArray *_missReadFeeds;
    NSMutableArray *_weishangFeeds;
    NSMutableArray *_invisibleFeeds;
}

+ (void)initialize;
+ (void)PBArrayAdd_invisibleFeeds;
+ (void)PBArrayAdd_isRealCreatTime;
+ (void)PBArrayAdd_firstFeedCreatTime;
+ (void)PBArrayAdd_weishangFeeds;
+ (void)PBArrayAdd_missReadFeeds;
+ (void)PBArrayAdd_missReadRecordId;
- (void).cxx_destruct;
@property(nonatomic) _Bool isRealCreatTime; // @synthesize isRealCreatTime=_isRealCreatTime;
@property(nonatomic) unsigned int firstFeedCreatTime; // @synthesize firstFeedCreatTime=_firstFeedCreatTime;
@property(retain, nonatomic) NSMutableArray *invisibleFeeds; // @synthesize invisibleFeeds=_invisibleFeeds;
@property(retain, nonatomic) NSMutableArray *weishangFeeds; // @synthesize weishangFeeds=_weishangFeeds;
@property(retain, nonatomic) NSMutableArray *missReadFeeds; // @synthesize missReadFeeds=_missReadFeeds;
@property(nonatomic) unsigned long long missReadRecordId; // @synthesize missReadRecordId=_missReadRecordId;
@property(readonly, copy) NSString *description;
- (id)getFirstMissReadId;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

