//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface DBContactChatRoomDetail : NSObject
{
    _Bool _chatRoomDescBannerNotShow;
    unsigned int _chatRoomInfoVersion;
    unsigned int _chatRoomInfoSvrVersion;
    unsigned int _chatRoomStatus;
    unsigned int _chatRoomLocalInfoVersion;
    unsigned int _chatRoomSpamStatus;
    NSString *_chatRoomDesc;
    NSString *_chatRoomDescModer;
    unsigned long long _chatRoomDescTime;
    NSString *_chatRoomAssociateOpenIMRoomName;
    NSString *_richChatRoomDesc;
}

+ (void)initialize;
+ (void)PBArrayAdd_richChatRoomDesc;
+ (void)PBArrayAdd_chatRoomSpamStatus;
+ (void)PBArrayAdd_chatRoomDescBannerNotShow;
+ (void)PBArrayAdd_chatRoomAssociateOpenIMRoomName;
+ (void)PBArrayAdd_chatRoomLocalInfoVersion;
+ (void)PBArrayAdd_chatRoomStatus;
+ (void)PBArrayAdd_chatRoomDescTime;
+ (void)PBArrayAdd_chatRoomDescModer;
+ (void)PBArrayAdd_chatRoomDesc;
+ (void)PBArrayAdd_chatRoomInfoSvrVersion;
+ (void)PBArrayAdd_chatRoomInfoVersion;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *richChatRoomDesc; // @synthesize richChatRoomDesc=_richChatRoomDesc;
@property(nonatomic) unsigned int chatRoomSpamStatus; // @synthesize chatRoomSpamStatus=_chatRoomSpamStatus;
@property(nonatomic) _Bool chatRoomDescBannerNotShow; // @synthesize chatRoomDescBannerNotShow=_chatRoomDescBannerNotShow;
@property(retain, nonatomic) NSString *chatRoomAssociateOpenIMRoomName; // @synthesize chatRoomAssociateOpenIMRoomName=_chatRoomAssociateOpenIMRoomName;
@property(nonatomic) unsigned int chatRoomLocalInfoVersion; // @synthesize chatRoomLocalInfoVersion=_chatRoomLocalInfoVersion;
@property(nonatomic) unsigned int chatRoomStatus; // @synthesize chatRoomStatus=_chatRoomStatus;
@property(nonatomic) unsigned long long chatRoomDescTime; // @synthesize chatRoomDescTime=_chatRoomDescTime;
@property(retain, nonatomic) NSString *chatRoomDescModer; // @synthesize chatRoomDescModer=_chatRoomDescModer;
@property(retain, nonatomic) NSString *chatRoomDesc; // @synthesize chatRoomDesc=_chatRoomDesc;
@property(nonatomic) unsigned int chatRoomInfoSvrVersion; // @synthesize chatRoomInfoSvrVersion=_chatRoomInfoSvrVersion;
@property(nonatomic) unsigned int chatRoomInfoVersion; // @synthesize chatRoomInfoVersion=_chatRoomInfoVersion;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

