//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WCOutPhoneContact : NSObject
{
    _Bool isWeChatFriend;
    NSString *nickname;
    NSString *nicknamePinYin;
    NSString *nicknamePinYinShort;
    NSDictionary *phoneWithLabels;
    NSDictionary *phoneToMd5Dic;
    NSString *mmNickname;
    NSString *mmUsername;
    NSString *bigHeadImgUrl;
    NSString *smallHeadImgUrl;
    NSString *mainCountryCode;
    NSString *mainPurePhoneNum;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isWeChatFriend; // @synthesize isWeChatFriend;
@property(retain, nonatomic) NSString *mainPurePhoneNum; // @synthesize mainPurePhoneNum;
@property(retain, nonatomic) NSString *mainCountryCode; // @synthesize mainCountryCode;
@property(retain, nonatomic) NSString *smallHeadImgUrl; // @synthesize smallHeadImgUrl;
@property(retain, nonatomic) NSString *bigHeadImgUrl; // @synthesize bigHeadImgUrl;
@property(retain, nonatomic) NSString *mmUsername; // @synthesize mmUsername;
@property(retain, nonatomic) NSString *mmNickname; // @synthesize mmNickname;
@property(retain, nonatomic) NSDictionary *phoneToMd5Dic; // @synthesize phoneToMd5Dic;
@property(retain, nonatomic) NSDictionary *phoneWithLabels; // @synthesize phoneWithLabels;
@property(retain, nonatomic) NSString *nicknamePinYinShort; // @synthesize nicknamePinYinShort;
@property(retain, nonatomic) NSString *nicknamePinYin; // @synthesize nicknamePinYin;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname;
@property(readonly, nonatomic) _Bool isAdressBookContact;
@property(readonly, nonatomic) _Bool isWeChatUser;
- (id)initWithWCOutPhoneContact:(id)arg1;
- (id)initWithWCOutRecentCallItem:(id)arg1;
- (id)initWithMMPhoneContact:(id)arg1;

@end

