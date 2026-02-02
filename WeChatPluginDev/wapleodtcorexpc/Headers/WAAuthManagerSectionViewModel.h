//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WxaUseUserInfoItem;

@interface WAAuthManagerSectionViewModel : NSObject
{
    _Bool _isPlugin;
    _Bool _isEdit;
    NSString *_appId;
    WxaUseUserInfoItem *_userInfoItem;
    CDUnknownBlockType _deleteAction;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType deleteAction; // @synthesize deleteAction=_deleteAction;
@property(nonatomic) _Bool isEdit; // @synthesize isEdit=_isEdit;
@property(nonatomic) _Bool isPlugin; // @synthesize isPlugin=_isPlugin;
@property(retain, nonatomic) WxaUseUserInfoItem *userInfoItem; // @synthesize userInfoItem=_userInfoItem;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)initWithAppId:(id)arg1 isPlugin:(_Bool)arg2 userInfoItem:(id)arg3 isEdit:(_Bool)arg4;

@end

