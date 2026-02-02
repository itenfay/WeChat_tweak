//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderEventWordingInfo, NSString;

@interface WCFinderFeedBindEventInfo : NSObject
{
    unsigned long long _eventTopicId;
    NSString *_eventID;
    NSString *_eventName;
    NSString *_eventCreatorNickName;
    unsigned long long _cacheTime;
    unsigned long long _eventAttendCount;
    unsigned long long _hiddenMark;
    FinderEventWordingInfo *_wordingInfo;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_hiddenMark;
+ (void)PBArrayAdd_wordingInfo;
+ (void)PBArrayAdd_eventAttendCount;
+ (void)PBArrayAdd_eventCreatorNickName;
+ (void)PBArrayAdd_eventName;
+ (void)PBArrayAdd_eventID;
+ (void)__wcdb_index_8:(void *)arg1;
+ (void)__wcdb_column_constraint_7:(void *)arg1;
+ (id)swift_hiddenMark;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)hiddenMark;
+ (id)swift_wordingInfo;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)wordingInfo;
+ (id)swift_eventAttendCount;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)eventAttendCount;
+ (id)swift_cacheTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)cacheTime;
+ (id)swift_eventCreatorNickName;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)eventCreatorNickName;
+ (id)swift_eventName;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)eventName;
+ (id)swift_eventID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)eventID;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderEventWordingInfo *wordingInfo; // @synthesize wordingInfo=_wordingInfo;
@property(nonatomic) unsigned long long hiddenMark; // @synthesize hiddenMark=_hiddenMark;
@property(nonatomic) unsigned long long eventAttendCount; // @synthesize eventAttendCount=_eventAttendCount;
@property(nonatomic) unsigned long long cacheTime; // @synthesize cacheTime=_cacheTime;
@property(copy, nonatomic) NSString *eventCreatorNickName; // @synthesize eventCreatorNickName=_eventCreatorNickName;
@property(copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(copy, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;
@property(readonly, copy) NSString *description;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)shownEventCount;
- (id)shortShownEventName;
- (id)shownEventName;
- (id)genEventDescObject;
@property(nonatomic) unsigned long long eventTopicId; // @synthesize eventTopicId=_eventTopicId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithFinderEventInfo:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;

@end

