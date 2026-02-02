//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface JSApiScopeAuthorizeInfo
{
    _Bool _isBanModifyAvatar;
    unsigned int _avatarLimit;
    unsigned int _defaultAvatarId;
    NSMutableArray *_avatarInfoList;
    NSString *_appId;
    NSString *_defaultHeadimgUrl;
    NSString *_defaultHeadimgFileid;
    NSString *_addAvatarBtnNormalWording;
    NSString *_addAvatarBtnLimitWording;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *addAvatarBtnLimitWording; // @synthesize addAvatarBtnLimitWording=_addAvatarBtnLimitWording;
@property(retain, nonatomic) NSString *addAvatarBtnNormalWording; // @synthesize addAvatarBtnNormalWording=_addAvatarBtnNormalWording;
@property(retain, nonatomic) NSString *defaultHeadimgFileid; // @synthesize defaultHeadimgFileid=_defaultHeadimgFileid;
@property(retain, nonatomic) NSString *defaultHeadimgUrl; // @synthesize defaultHeadimgUrl=_defaultHeadimgUrl;
@property(nonatomic) unsigned int defaultAvatarId; // @synthesize defaultAvatarId=_defaultAvatarId;
@property(nonatomic) unsigned int avatarLimit; // @synthesize avatarLimit=_avatarLimit;
@property(nonatomic) _Bool isBanModifyAvatar; // @synthesize isBanModifyAvatar=_isBanModifyAvatar;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSMutableArray *avatarInfoList; // @synthesize avatarInfoList=_avatarInfoList;

@end

