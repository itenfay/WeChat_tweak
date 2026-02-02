//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap;

@interface BSTLMainSessionExposeItem
{
    unsigned int _position;
    unsigned int _uNewNotifyMsgCount;
    unsigned int _unReadCount;
    unsigned int _liveNotifyType;
    unsigned int _brandNotifyType;
    CMessageWrap *_msgWrap;
    unsigned long long _sessionId;
    unsigned long long _startTimeMs;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int brandNotifyType; // @synthesize brandNotifyType=_brandNotifyType;
@property(nonatomic) unsigned int liveNotifyType; // @synthesize liveNotifyType=_liveNotifyType;
@property(nonatomic) unsigned int unReadCount; // @synthesize unReadCount=_unReadCount;
@property(nonatomic) unsigned int uNewNotifyMsgCount; // @synthesize uNewNotifyMsgCount=_uNewNotifyMsgCount;
@property(nonatomic) unsigned int position; // @synthesize position=_position;
@property(nonatomic) unsigned long long startTimeMs; // @synthesize startTimeMs=_startTimeMs;
@property(nonatomic) unsigned long long sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
- (_Bool)isLiveNotifyMsgExposedItem;

@end

