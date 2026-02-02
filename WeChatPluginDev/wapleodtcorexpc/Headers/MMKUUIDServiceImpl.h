//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMKUUIDServiceImpl : NSObject
{
}

- (id)getExtendInfo;
- (_Bool)isWechatClient;
- (id)getOaid;
- (_Bool)developmentSettingEnable;
- (_Bool)adbEnable;
- (id)getUuid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

