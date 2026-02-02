//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ReceivePatWrap : NSObject
{
    long long _serverId;
    NSString *_chatUserName;
    unsigned long long _createTime;
}

+ (void)initialize;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_chatUserName;
+ (void)PBArrayAdd_serverId;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *chatUserName; // @synthesize chatUserName=_chatUserName;
@property(nonatomic) long long serverId; // @synthesize serverId=_serverId;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

