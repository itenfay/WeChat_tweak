//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WxaUseUserInfoItem, WxaUseUserInfoItem_ScopeItem;

@interface WAAuthManagerDeleteInfoModel : NSObject
{
    _Bool _isFormPlugin;
    NSString *_appId;
    WxaUseUserInfoItem *_userInfoItem;
    WxaUseUserInfoItem_ScopeItem *_scopeItem;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFormPlugin; // @synthesize isFormPlugin=_isFormPlugin;
@property(retain, nonatomic) WxaUseUserInfoItem_ScopeItem *scopeItem; // @synthesize scopeItem=_scopeItem;
@property(retain, nonatomic) WxaUseUserInfoItem *userInfoItem; // @synthesize userInfoItem=_userInfoItem;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)toModUseUserInfoItem;
- (id)initWithAppId:(id)arg1 isFormPlugin:(_Bool)arg2 userInfoItem:(id)arg3 scopeItem:(id)arg4;

@end

