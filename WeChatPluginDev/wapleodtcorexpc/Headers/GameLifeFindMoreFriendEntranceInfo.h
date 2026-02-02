//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface GameLifeFindMoreFriendEntranceInfo : NSObject
{
    _Bool _showIcon;
    unsigned int _unReadCount;
    unsigned int _lastUpdateMsgTime;
    unsigned int _msgType;
    NSString *_iconUrl;
    NSString *_wording;
    NSDictionary *_externInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *externInfo; // @synthesize externInfo=_externInfo;
@property(nonatomic) unsigned int msgType; // @synthesize msgType=_msgType;
@property(nonatomic) unsigned int lastUpdateMsgTime; // @synthesize lastUpdateMsgTime=_lastUpdateMsgTime;
@property(nonatomic) unsigned int unReadCount; // @synthesize unReadCount=_unReadCount;
@property(nonatomic) _Bool showIcon; // @synthesize showIcon=_showIcon;
@property(retain, nonatomic) NSString *wording; // @synthesize wording=_wording;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;

@end

