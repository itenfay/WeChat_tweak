//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface PBCMessageWrap : NSObject
{
    unsigned int _mesSvrId;
    unsigned int _mesLocalId;
    unsigned int _messageType;
    unsigned int _status;
    unsigned int _imgStatus;
    unsigned int _downloadStatus;
    unsigned int _createTime;
    unsigned int _isSenderStatus;
    NSString *_fromUser;
    NSString *_toUser;
    NSString *_realChatUser;
    NSString *_content;
    long long _n64MesSvrId;
    NSString *_msgSource;
    NSString *_specifiedChatName;
}

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_isSenderStatus;
+ (void)PBArrayAdd_specifiedChatName;
+ (void)PBArrayAdd_msgSource;
+ (void)PBArrayAdd_n64MesSvrId;
+ (void)PBArrayAdd_content;
+ (void)PBArrayAdd_realChatUser;
+ (void)PBArrayAdd_toUser;
+ (void)PBArrayAdd_fromUser;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_downloadStatus;
+ (void)PBArrayAdd_imgStatus;
+ (void)PBArrayAdd_status;
+ (void)PBArrayAdd_messageType;
+ (void)PBArrayAdd_mesLocalId;
+ (void)PBArrayAdd_mesSvrId;
- (void).cxx_destruct;
@property(nonatomic) unsigned int isSenderStatus; // @synthesize isSenderStatus=_isSenderStatus;
@property(retain, nonatomic) NSString *specifiedChatName; // @synthesize specifiedChatName=_specifiedChatName;
@property(retain, nonatomic) NSString *msgSource; // @synthesize msgSource=_msgSource;
@property(nonatomic) long long n64MesSvrId; // @synthesize n64MesSvrId=_n64MesSvrId;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *realChatUser; // @synthesize realChatUser=_realChatUser;
@property(retain, nonatomic) NSString *toUser; // @synthesize toUser=_toUser;
@property(retain, nonatomic) NSString *fromUser; // @synthesize fromUser=_fromUser;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned int downloadStatus; // @synthesize downloadStatus=_downloadStatus;
@property(nonatomic) unsigned int imgStatus; // @synthesize imgStatus=_imgStatus;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(nonatomic) unsigned int messageType; // @synthesize messageType=_messageType;
@property(nonatomic) unsigned int mesLocalId; // @synthesize mesLocalId=_mesLocalId;
@property(nonatomic) unsigned int mesSvrId; // @synthesize mesSvrId=_mesSvrId;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;
- (void)setFromCMessageWrap:(id)arg1;
- (id)toCMessageWrap;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

