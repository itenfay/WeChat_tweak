//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface WCCanvasRandomCardDynamicInfo
{
    int _cardType;
    int _subCardType;
    NSString *_titlePrefix;
    NSString *_titleInfix;
    NSString *_titleSuffix;
    NSString *_avatarDesc;
    NSArray *_friendAvatarImgs;
    NSArray *_commonAvatarImgs;
    NSString *_friendAvatarDescWithFriends;
    NSString *_friendAvatarDescCommon;
    NSString *_giveCardId;
    NSString *_receiveUrl;
}

+ (id)generateCardDynamicInfoFromGiveHBCardInfo:(id)arg1;
+ (id)mergeRedEnvelopInfo:(id)arg1 withCardDynamicInfo:(id)arg2;
+ (id)mergeSocialInfo:(id)arg1 withCardDynamicInfo:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *receiveUrl; // @synthesize receiveUrl=_receiveUrl;
@property(nonatomic) int subCardType; // @synthesize subCardType=_subCardType;
@property(retain, nonatomic) NSString *giveCardId; // @synthesize giveCardId=_giveCardId;
@property(retain, nonatomic) NSString *friendAvatarDescCommon; // @synthesize friendAvatarDescCommon=_friendAvatarDescCommon;
@property(retain, nonatomic) NSString *friendAvatarDescWithFriends; // @synthesize friendAvatarDescWithFriends=_friendAvatarDescWithFriends;
@property(retain, nonatomic) NSArray *commonAvatarImgs; // @synthesize commonAvatarImgs=_commonAvatarImgs;
@property(retain, nonatomic) NSArray *friendAvatarImgs; // @synthesize friendAvatarImgs=_friendAvatarImgs;
@property(retain, nonatomic) NSString *avatarDesc; // @synthesize avatarDesc=_avatarDesc;
@property(retain, nonatomic) NSString *titleSuffix; // @synthesize titleSuffix=_titleSuffix;
@property(retain, nonatomic) NSString *titleInfix; // @synthesize titleInfix=_titleInfix;
@property(retain, nonatomic) NSString *titlePrefix; // @synthesize titlePrefix=_titlePrefix;
@property(nonatomic) int cardType; // @synthesize cardType=_cardType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

