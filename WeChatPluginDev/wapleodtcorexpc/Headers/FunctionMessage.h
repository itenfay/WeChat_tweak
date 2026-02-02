//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FunctionMessage : NSObject
{
    unsigned int _opType;
    NSString *_functionMsgId;
    unsigned long long _version;
    NSString *_chatName;
    long long _msgSvrId;
}

+ (void)initialize;
+ (void)PBArrayAdd_opType;
+ (void)PBArrayAdd_chatName;
+ (void)PBArrayAdd_functionMsgId;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_msgSvrId;
- (void).cxx_destruct;
@property(nonatomic) unsigned int opType; // @synthesize opType=_opType;
@property(nonatomic) long long msgSvrId; // @synthesize msgSvrId=_msgSvrId;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *functionMsgId; // @synthesize functionMsgId=_functionMsgId;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

