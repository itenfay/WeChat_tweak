//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TRTCSwitchRoomConfig : NSObject
{
    unsigned int _roomId;
    NSString *_strRoomId;
    NSString *_userSig;
    NSString *_privateMapKey;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *privateMapKey; // @synthesize privateMapKey=_privateMapKey;
@property(copy, nonatomic) NSString *userSig; // @synthesize userSig=_userSig;
@property(copy, nonatomic) NSString *strRoomId; // @synthesize strRoomId=_strRoomId;
@property(nonatomic) unsigned int roomId; // @synthesize roomId=_roomId;

@end

