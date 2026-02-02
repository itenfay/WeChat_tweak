//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ChatRoomDetail : NSObject
{
    _Bool _m_bChatRoomDescReaded;
    _Bool _m_bChatRoomDescBannerNotShow;
    unsigned int _m_uiChatRoomInfoVersion;
    unsigned int _m_uiChatRoomInfoSvrVersion;
    unsigned int _m_uiChatRoomStatus;
    unsigned int _m_uiLocalInfoVersion;
    unsigned int _m_uiChatRoomSpamStatus;
    NSString *_m_nsChatRoomDesc;
    NSString *_m_nsChatRoomDescModer;
    unsigned long long _m_uiChatRoomDescTime;
    NSString *_m_nsAssociateOpenIMRoomName;
    NSString *_richChatRoomDesc;
}

+ (void)initialize;
+ (void)PBArrayAdd_richChatRoomDesc;
+ (void)PBArrayAdd_m_uiChatRoomSpamStatus;
+ (void)PBArrayAdd_m_bChatRoomDescBannerNotShow;
+ (void)PBArrayAdd_m_nsAssociateOpenIMRoomName;
+ (void)PBArrayAdd_m_uiLocalInfoVersion;
+ (void)PBArrayAdd_m_uiChatRoomStatus;
+ (void)PBArrayAdd_m_bChatRoomDescReaded;
+ (void)PBArrayAdd_m_uiChatRoomDescTime;
+ (void)PBArrayAdd_m_nsChatRoomDescModer;
+ (void)PBArrayAdd_m_nsChatRoomDesc;
+ (void)PBArrayAdd_m_uiChatRoomInfoSvrVersion;
+ (void)PBArrayAdd_m_uiChatRoomInfoVersion;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *richChatRoomDesc; // @synthesize richChatRoomDesc=_richChatRoomDesc;
@property(nonatomic) unsigned int m_uiChatRoomSpamStatus; // @synthesize m_uiChatRoomSpamStatus=_m_uiChatRoomSpamStatus;
@property(retain, nonatomic) NSString *m_nsAssociateOpenIMRoomName; // @synthesize m_nsAssociateOpenIMRoomName=_m_nsAssociateOpenIMRoomName;
@property(nonatomic) unsigned int m_uiLocalInfoVersion; // @synthesize m_uiLocalInfoVersion=_m_uiLocalInfoVersion;
@property(nonatomic) unsigned int m_uiChatRoomStatus; // @synthesize m_uiChatRoomStatus=_m_uiChatRoomStatus;
@property(nonatomic) _Bool m_bChatRoomDescBannerNotShow; // @synthesize m_bChatRoomDescBannerNotShow=_m_bChatRoomDescBannerNotShow;
@property(nonatomic) _Bool m_bChatRoomDescReaded; // @synthesize m_bChatRoomDescReaded=_m_bChatRoomDescReaded;
@property(nonatomic) unsigned long long m_uiChatRoomDescTime; // @synthesize m_uiChatRoomDescTime=_m_uiChatRoomDescTime;
@property(retain, nonatomic) NSString *m_nsChatRoomDescModer; // @synthesize m_nsChatRoomDescModer=_m_nsChatRoomDescModer;
@property(retain, nonatomic) NSString *m_nsChatRoomDesc; // @synthesize m_nsChatRoomDesc=_m_nsChatRoomDesc;
@property(nonatomic) unsigned int m_uiChatRoomInfoSvrVersion; // @synthesize m_uiChatRoomInfoSvrVersion=_m_uiChatRoomInfoSvrVersion;
@property(nonatomic) unsigned int m_uiChatRoomInfoVersion; // @synthesize m_uiChatRoomInfoVersion=_m_uiChatRoomInfoVersion;
- (_Bool)isEmptyDesc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
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

