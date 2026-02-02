//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderClubInfo, FinderContact, FinderNicknameVerifyInfo, MasterWxAcctInfo, NSString;

@interface BindFinderClubInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (id)archivedWCTValue;

// Remaining properties
@property(retain, nonatomic) FinderClubInfo *clubInfo; // @dynamic clubInfo;
@property(nonatomic) unsigned long long extFlag; // @dynamic extFlag;
@property(nonatomic) unsigned int logoutLock; // @dynamic logoutLock;
@property(retain, nonatomic) NSString *logoutUrl; // @dynamic logoutUrl;
@property(retain, nonatomic) MasterWxAcctInfo *masterWxAcct; // @dynamic masterWxAcct;
@property(retain, nonatomic) FinderContact *selfContact; // @dynamic selfContact;
@property(nonatomic) unsigned int userFlag; // @dynamic userFlag;
@property(retain, nonatomic) FinderNicknameVerifyInfo *verifyInfo; // @dynamic verifyInfo;

@end

