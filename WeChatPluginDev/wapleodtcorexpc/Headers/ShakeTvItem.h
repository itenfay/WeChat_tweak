//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface ShakeTvItem : NSObject
{
    _Bool _isAutoplay;
    NSString *_tvId;
    NSString *_title;
    NSString *_topic;
    NSString *_thumbUrl;
    NSString *_playUrl;
    NSString *_playStatid;
    NSString *_actionUrl;
    NSString *_actionStatid;
    NSString *_shareUrl;
    NSMutableArray *_actionLists;
    NSString *_subTitle;
}

+ (void)initialize;
+ (void)PBArrayAdd_subTitle;
+ (void)PBArrayAdd_isAutoplay;
+ (void)PBArrayAdd_actionLists;
+ (void)PBArrayAdd_topic;
+ (void)PBArrayAdd_shareUrl;
+ (void)PBArrayAdd_actionStatid;
+ (void)PBArrayAdd_actionUrl;
+ (void)PBArrayAdd_playStatid;
+ (void)PBArrayAdd_playUrl;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_tvId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(nonatomic) _Bool isAutoplay; // @synthesize isAutoplay=_isAutoplay;
@property(retain, nonatomic) NSMutableArray *actionLists; // @synthesize actionLists=_actionLists;
@property(retain, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
@property(retain, nonatomic) NSString *actionStatid; // @synthesize actionStatid=_actionStatid;
@property(retain, nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
@property(retain, nonatomic) NSString *playStatid; // @synthesize playStatid=_playStatid;
@property(retain, nonatomic) NSString *playUrl; // @synthesize playUrl=_playUrl;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *tvId; // @synthesize tvId=_tvId;
- (id)toXml;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

