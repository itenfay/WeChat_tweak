//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TRTCParams : NSObject
{
    unsigned int _sdkAppId;
    unsigned int _roomId;
    NSString *_userId;
    NSString *_userSig;
    NSString *_strRoomId;
    long long _role;
    NSString *_streamId;
    NSString *_userDefineRecordId;
    NSString *_privateMapKey;
    NSString *_bussInfo;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *bussInfo; // @synthesize bussInfo=_bussInfo;
@property(copy, nonatomic) NSString *privateMapKey; // @synthesize privateMapKey=_privateMapKey;
@property(copy, nonatomic) NSString *userDefineRecordId; // @synthesize userDefineRecordId=_userDefineRecordId;
@property(copy, nonatomic) NSString *streamId; // @synthesize streamId=_streamId;
@property(nonatomic) long long role; // @synthesize role=_role;
@property(copy, nonatomic) NSString *strRoomId; // @synthesize strRoomId=_strRoomId;
@property(nonatomic) unsigned int roomId; // @synthesize roomId=_roomId;
@property(copy, nonatomic) NSString *userSig; // @synthesize userSig=_userSig;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) unsigned int sdkAppId; // @synthesize sdkAppId=_sdkAppId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

