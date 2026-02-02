//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ChatRoomTopMsgInfo : NSObject
{
    _Bool _isRevoke;
    unsigned int _topId;
    unsigned int _msgType;
    unsigned int _status;
    unsigned int _exposureTime;
    NSString *_userName;
    NSString *_opUserName;
    unsigned long long _msgSvrID;
    NSString *_msgSummary;
    NSString *_msgUserName;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int exposureTime; // @synthesize exposureTime=_exposureTime;
@property(nonatomic) _Bool isRevoke; // @synthesize isRevoke=_isRevoke;
@property(retain, nonatomic) NSString *msgUserName; // @synthesize msgUserName=_msgUserName;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *msgSummary; // @synthesize msgSummary=_msgSummary;
@property(nonatomic) unsigned int msgType; // @synthesize msgType=_msgType;
@property(nonatomic) unsigned long long msgSvrID; // @synthesize msgSvrID=_msgSvrID;
@property(retain, nonatomic) NSString *opUserName; // @synthesize opUserName=_opUserName;
@property(nonatomic) unsigned int topId; // @synthesize topId=_topId;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (void)copyFromNetworkTopMsgInfo:(id)arg1;
- (void)copyFromDBTopMsgInfo:(id)arg1;
- (id)genDBContactChatRoomTopMsg;

@end

