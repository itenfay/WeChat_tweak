//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MPPageSlovMetaData : NSObject
{
    unsigned int _referMsgSendTime;
    unsigned int _firstMsgSendTime;
    unsigned int _lastMsgSendTime;
}

+ (void)initialize;
+ (void)PBArrayAdd_lastMsgSendTime;
+ (void)PBArrayAdd_firstMsgSendTime;
+ (void)PBArrayAdd_referMsgSendTime;
@property(nonatomic) unsigned int lastMsgSendTime; // @synthesize lastMsgSendTime=_lastMsgSendTime;
@property(nonatomic) unsigned int firstMsgSendTime; // @synthesize firstMsgSendTime=_firstMsgSendTime;
@property(nonatomic) unsigned int referMsgSendTime; // @synthesize referMsgSendTime=_referMsgSendTime;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

