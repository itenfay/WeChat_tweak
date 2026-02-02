//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCPayPluginTopMsgRecord : NSObject
{
    NSString *_username;
    NSArray *_msgList;
}

+ (void)initialize;
+ (void)PBArrayAdd_msgList;
+ (void)PBArrayAdd_username;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *msgList; // @synthesize msgList=_msgList;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

