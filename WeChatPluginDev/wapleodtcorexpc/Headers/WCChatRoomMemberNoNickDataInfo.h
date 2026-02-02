//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WCChatRoomMemberNoNickDataInfo : NSObject
{
    NSMutableDictionary *_dicUserNameTime;
    NSMutableArray *_arrUserNameTime;
}

+ (void)initialize;
+ (void)PBArrayAdd_arrUserNameTime;
+ (void)PBArrayAdd_dicUserNameTime;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrUserNameTime; // @synthesize arrUserNameTime=_arrUserNameTime;
@property(retain, nonatomic) NSMutableDictionary *dicUserNameTime; // @synthesize dicUserNameTime=_dicUserNameTime;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

