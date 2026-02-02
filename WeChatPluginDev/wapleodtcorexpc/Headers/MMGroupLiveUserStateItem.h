//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, NSString;

@interface MMGroupLiveUserStateItem : NSObject
{
    NSString *_identityId;
    NSString *_roomId;
    CContact *_contact;
}

@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(retain, nonatomic) NSString *identityId; // @synthesize identityId=_identityId;
- (id)headImageUrl;
- (id)displayName;
- (id)userName;
- (id)initWithRoomId:(id)arg1 identityId:(id)arg2;

@end

