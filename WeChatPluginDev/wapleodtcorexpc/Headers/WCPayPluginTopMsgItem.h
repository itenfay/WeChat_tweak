//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayPluginTopMsgItem : NSObject
{
    unsigned int _msgCreateTime;
    long long _msgSvrId;
    NSString *_msgContent;
    NSString *_username;
}

+ (void)initialize;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_msgCreateTime;
+ (void)PBArrayAdd_msgContent;
+ (void)PBArrayAdd_msgSvrId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) unsigned int msgCreateTime; // @synthesize msgCreateTime=_msgCreateTime;
@property(retain, nonatomic) NSString *msgContent; // @synthesize msgContent=_msgContent;
@property(nonatomic) long long msgSvrId; // @synthesize msgSvrId=_msgSvrId;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

