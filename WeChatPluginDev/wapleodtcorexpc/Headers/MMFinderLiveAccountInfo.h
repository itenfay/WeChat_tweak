//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveAccountInfo : NSObject
{
    _Bool _isReName;
    unsigned int _roleType;
    NSString *_nickName;
    NSString *_headImgUrl;
    NSString *_roleName;
    NSString *_roleWording;
}

+ (id)getDigestLogWithLiveAccountInfoList:(id)arg1;
+ (void)reName:(id)arg1 forAccountInfos:(id)arg2;
+ (id)tranferToLiveAccountInfo:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isReName; // @synthesize isReName=_isReName;
@property(readonly, nonatomic) NSString *roleWording; // @synthesize roleWording=_roleWording;
@property(readonly, nonatomic) NSString *roleName; // @synthesize roleName=_roleName;
@property(nonatomic) unsigned int roleType; // @synthesize roleType=_roleType;
@property(retain, nonatomic) NSString *headImgUrl; // @synthesize headImgUrl=_headImgUrl;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
- (id)description;
- (void)copyFromLiveAliasInfo:(id)arg1;
- (id)initWithLiveAliasInfo:(id)arg1;

@end

