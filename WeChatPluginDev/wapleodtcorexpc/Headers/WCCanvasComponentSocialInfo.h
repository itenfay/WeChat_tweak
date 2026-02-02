//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface WCCanvasComponentSocialInfo
{
    NSString *_titlePrefix;
    NSString *_titleInfix;
    NSString *_titleSuffix;
    NSString *_desc;
    NSString *_backgroundImgWithFriends;
    NSString *_backgroundImgCommon;
    NSString *_avatarBackgroundImg;
    NSString *_avatarDesc;
    NSString *_adAvatarImg;
    NSArray *_friendAvatarImgs;
    NSArray *_commonAvatarImgs;
    NSString *_friendAvatarDescWithFriends;
    NSString *_friendAvatarDescCommon;
    NSString *_cardDynamicInfo;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *cardDynamicInfo; // @synthesize cardDynamicInfo=_cardDynamicInfo;
@property(retain, nonatomic) NSString *friendAvatarDescCommon; // @synthesize friendAvatarDescCommon=_friendAvatarDescCommon;
@property(retain, nonatomic) NSString *friendAvatarDescWithFriends; // @synthesize friendAvatarDescWithFriends=_friendAvatarDescWithFriends;
@property(retain, nonatomic) NSArray *commonAvatarImgs; // @synthesize commonAvatarImgs=_commonAvatarImgs;
@property(retain, nonatomic) NSArray *friendAvatarImgs; // @synthesize friendAvatarImgs=_friendAvatarImgs;
@property(retain, nonatomic) NSString *adAvatarImg; // @synthesize adAvatarImg=_adAvatarImg;
@property(retain, nonatomic) NSString *avatarDesc; // @synthesize avatarDesc=_avatarDesc;
@property(retain, nonatomic) NSString *avatarBackgroundImg; // @synthesize avatarBackgroundImg=_avatarBackgroundImg;
@property(retain, nonatomic) NSString *backgroundImgCommon; // @synthesize backgroundImgCommon=_backgroundImgCommon;
@property(retain, nonatomic) NSString *backgroundImgWithFriends; // @synthesize backgroundImgWithFriends=_backgroundImgWithFriends;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *titleSuffix; // @synthesize titleSuffix=_titleSuffix;
@property(retain, nonatomic) NSString *titleInfix; // @synthesize titleInfix=_titleInfix;
@property(retain, nonatomic) NSString *titlePrefix; // @synthesize titlePrefix=_titlePrefix;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

