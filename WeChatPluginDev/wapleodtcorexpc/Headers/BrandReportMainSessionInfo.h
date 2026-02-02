//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap;

@interface BrandReportMainSessionInfo : NSObject
{
    _Bool _isShowRedDot;
    unsigned int _msgNotifyType;
    unsigned int _unreadCount;
    unsigned long long _rowIndexMainFrame;
    CMessageWrap *_sessionMsg;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CMessageWrap *sessionMsg; // @synthesize sessionMsg=_sessionMsg;
@property(nonatomic) unsigned int unreadCount; // @synthesize unreadCount=_unreadCount;
@property(nonatomic) unsigned int msgNotifyType; // @synthesize msgNotifyType=_msgNotifyType;
@property(nonatomic) _Bool isShowRedDot; // @synthesize isShowRedDot=_isShowRedDot;
@property(nonatomic) unsigned long long rowIndexMainFrame; // @synthesize rowIndexMainFrame=_rowIndexMainFrame;
- (unsigned int)getEnterRedDotMsgType;

@end

