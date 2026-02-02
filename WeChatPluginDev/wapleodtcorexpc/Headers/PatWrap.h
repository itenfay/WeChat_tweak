//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface PatWrap : NSObject
{
    _Bool _isRead;
    _Bool _showChangeSuffixRemind;
    NSString *_templete;
    NSString *_fromUserName;
    NSString *_pattedUserName;
    unsigned long long _createTime;
    long long _serverId;
}

+ (id)getContactFromUserName:(id)arg1;
+ (id)generateContentWithTemplate:(id)arg1 chatContact:(id)arg2 showLink:(_Bool)arg3 showTextStateIcon:(_Bool)arg4 showHighlightPat:(_Bool)arg5 showChangeSuffixRemind:(_Bool)arg6;
+ (id)templateFromTemplate:(id)arg1 fromUserName:(id)arg2 pattedUserName:(id)arg3;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool showChangeSuffixRemind; // @synthesize showChangeSuffixRemind=_showChangeSuffixRemind;
@property(nonatomic) _Bool isRead; // @synthesize isRead=_isRead;
@property(nonatomic) long long serverId; // @synthesize serverId=_serverId;
@property(nonatomic) unsigned long long createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *pattedUserName; // @synthesize pattedUserName=_pattedUserName;
@property(retain, nonatomic) NSString *fromUserName; // @synthesize fromUserName=_fromUserName;
@property(retain, nonatomic) NSString *templete; // @synthesize templete=_templete;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToPatWrap:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)contentId;
- (id)clientMessageId;
- (_Bool)isSender;
- (_Bool)canRevoke;
@property(readonly, nonatomic, getter=isEmphasize) _Bool emphasize;
- (id)getAttributedDisplayContentWithChatUserName:(id)arg1 configuration:(id)arg2;
- (id)getDisplayContentWithChatUserName:(id)arg1 configuration:(id)arg2;

@end

