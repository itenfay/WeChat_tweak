//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSData, NSString;

@class WXPBGeneratedMessage;

@interface FinderObjectUidUnit : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int adFlag; // @dynamic adFlag;
@property(retain, nonatomic) NSString *encryptedObjectId; // @dynamic encryptedObjectId;
@property(nonatomic) unsigned long long liveId; // @dynamic liveId;
@property(retain, nonatomic) NSData *objectCookie; // @dynamic objectCookie;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(retain, nonatomic) NSString *objectNonceId; // @dynamic objectNonceId;
@property(nonatomic) unsigned long long objectProductId; // @dynamic objectProductId;

@end

