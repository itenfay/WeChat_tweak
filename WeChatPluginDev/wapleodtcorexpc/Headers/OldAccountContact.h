//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OldAccountContact : NSObject
{
    unsigned int _sequence;
    unsigned int _status;
    NSString *_username;
    NSString *_ticket;
    NSString *_nickname;
    NSString *_encryptedUsername;
    NSString *_friendRequest;
}

+ (void)initialize;
+ (void)PBArrayAdd_friendRequest;
+ (void)PBArrayAdd_status;
+ (void)PBArrayAdd_encryptedUsername;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_sequence;
+ (void)PBArrayAdd_ticket;
+ (void)PBArrayAdd_username;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *friendRequest; // @synthesize friendRequest=_friendRequest;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *encryptedUsername; // @synthesize encryptedUsername=_encryptedUsername;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(nonatomic) unsigned int sequence; // @synthesize sequence=_sequence;
@property(retain, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (long long)compareOldAccountFriendAscending:(id)arg1;
- (void)mergeOldAccountContact:(id)arg1;
- (id)availableUsername;
@property(readonly, copy) NSString *description;
- (id)initWithOldAcctFriend:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

