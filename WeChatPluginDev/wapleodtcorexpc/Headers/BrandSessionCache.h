//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BESessionBoxInfo, CMessageWrap, NSString;

@interface BrandSessionCache : NSObject
{
    _Bool hasNewArrival;
    NSString *latestMsgOwner;
    unsigned int unreadCount;
    _Bool showUnReadAsRedDot;
    unsigned int lastMsgTime;
    unsigned int starMsgCount;
    unsigned int massSendMsgCount;
    unsigned int notifyMsgCount;
    unsigned int notifyFlag;
    CMessageWrap *latestMsg;
    unsigned long long _lastMsgAffMsgId;
    BESessionBoxInfo *_affSessionBoxInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BESessionBoxInfo *affSessionBoxInfo; // @synthesize affSessionBoxInfo=_affSessionBoxInfo;
@property(nonatomic) unsigned long long lastMsgAffMsgId; // @synthesize lastMsgAffMsgId=_lastMsgAffMsgId;
@property(retain, nonatomic) CMessageWrap *latestMsg; // @synthesize latestMsg;
@property(nonatomic) unsigned int notifyFlag; // @synthesize notifyFlag;
@property(nonatomic) unsigned int notifyMsgCount; // @synthesize notifyMsgCount;
@property(nonatomic) unsigned int massSendMsgCount; // @synthesize massSendMsgCount;
@property(nonatomic) unsigned int starMsgCount; // @synthesize starMsgCount;
@property(nonatomic) unsigned int lastMsgTime; // @synthesize lastMsgTime;
@property(nonatomic) _Bool showUnReadAsRedDot; // @synthesize showUnReadAsRedDot;
@property(nonatomic) unsigned int unreadCount; // @synthesize unreadCount;
@property(copy, nonatomic) NSString *latestMsgOwner; // @synthesize latestMsgOwner;
@property(nonatomic) _Bool hasNewArrival; // @synthesize hasNewArrival;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

