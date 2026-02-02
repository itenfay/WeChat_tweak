//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString, SightDraft, WCLocationInfo, WCTimelineExtBean;

@interface WCTempSaveModel : NSObject
{
    _Bool _isDynamicTagEnabled;
    NSString *_content;
    NSArray *_imageArray;
    SightDraft *_sightDraft;
    NSDate *_lastSaveDate;
    long long _lastPrivacy;
    WCLocationInfo *_poiInfo;
    NSArray *_tempSelectContacts;
    NSArray *_remindContactUsernames;
    NSArray *_lastPostVisibleLabelNames;
    NSArray *_lastPostInVisibleLabelNames;
    NSString *_sessionID;
    unsigned long long _pasteLength;
    WCTimelineExtBean *_extBean;
    NSString *_postCycleId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *postCycleId; // @synthesize postCycleId=_postCycleId;
@property(retain, nonatomic) WCTimelineExtBean *extBean; // @synthesize extBean=_extBean;
@property(nonatomic) unsigned long long pasteLength; // @synthesize pasteLength=_pasteLength;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) NSArray *lastPostInVisibleLabelNames; // @synthesize lastPostInVisibleLabelNames=_lastPostInVisibleLabelNames;
@property(retain, nonatomic) NSArray *lastPostVisibleLabelNames; // @synthesize lastPostVisibleLabelNames=_lastPostVisibleLabelNames;
@property(retain, nonatomic) NSArray *remindContactUsernames; // @synthesize remindContactUsernames=_remindContactUsernames;
@property(retain, nonatomic) NSArray *tempSelectContacts; // @synthesize tempSelectContacts=_tempSelectContacts;
@property(nonatomic) _Bool isDynamicTagEnabled; // @synthesize isDynamicTagEnabled=_isDynamicTagEnabled;
@property(retain, nonatomic) WCLocationInfo *poiInfo; // @synthesize poiInfo=_poiInfo;
@property(nonatomic) long long lastPrivacy; // @synthesize lastPrivacy=_lastPrivacy;
@property(retain, nonatomic) NSDate *lastSaveDate; // @synthesize lastSaveDate=_lastSaveDate;
@property(retain, nonatomic) SightDraft *sightDraft; // @synthesize sightDraft=_sightDraft;
@property(retain, nonatomic) NSArray *imageArray; // @synthesize imageArray=_imageArray;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

