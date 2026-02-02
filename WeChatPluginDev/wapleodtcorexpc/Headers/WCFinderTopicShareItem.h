//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderFeedBindEventInfo, WCFinderTopicShareLocationItem, WCFinderTopicShareTemplateItem;

@interface WCFinderTopicShareItem : NSObject
{
    unsigned int _topicType;
    NSString *_topic;
    NSString *_iconUrl;
    NSString *_desc;
    WCFinderTopicShareLocationItem *_location;
    NSString *_patMusicId;
    NSString *_fromFeedId;
    WCFinderTopicShareTemplateItem *_templateItem;
    unsigned long long _musicType;
    unsigned long long _topicCount;
    WCFinderFeedBindEventInfo *_event;
}

+ (void)initialize;
+ (void)PBArrayAdd_templateItem;
+ (void)PBArrayAdd_fromFeedId;
+ (void)PBArrayAdd_event;
+ (void)PBArrayAdd_topicCount;
+ (void)PBArrayAdd_musicType;
+ (void)PBArrayAdd_patMusicId;
+ (void)PBArrayAdd_location;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_iconUrl;
+ (void)PBArrayAdd_topicType;
+ (void)PBArrayAdd_topic;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedBindEventInfo *event; // @synthesize event=_event;
@property(nonatomic) unsigned long long topicCount; // @synthesize topicCount=_topicCount;
@property(nonatomic) unsigned long long musicType; // @synthesize musicType=_musicType;
@property(retain, nonatomic) WCFinderTopicShareTemplateItem *templateItem; // @synthesize templateItem=_templateItem;
@property(copy, nonatomic) NSString *fromFeedId; // @synthesize fromFeedId=_fromFeedId;
@property(copy, nonatomic) NSString *patMusicId; // @synthesize patMusicId=_patMusicId;
@property(retain, nonatomic) WCFinderTopicShareLocationItem *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(nonatomic) unsigned int topicType; // @synthesize topicType=_topicType;
@property(copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(readonly, copy) NSString *description;
- (id)titleDisplayWithType:(unsigned long long)arg1;
- (double)momentsHeightForMedia:(id)arg1;
- (id)momentsDesc;
- (id)momentsViewWithWCDataItem:(id)arg1;
- (id)momentsSourceText;
- (id)summayText:(id)arg1 sender:(id)arg2 isChatRoom:(_Bool)arg3;
- (id)chatDesc;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

