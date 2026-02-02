//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCRedEnvelopesRewardItem : NSObject
{
    unsigned int _createTime;
    NSString *_userName;
    unsigned long long _receiveAmount;
    NSString *_sendId;
    NSString *_ticket;
}

+ (id)fromServerObj:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_ticket;
+ (void)PBArrayAdd_sendId;
+ (void)PBArrayAdd_receiveAmount;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_userName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
@property(retain, nonatomic) NSString *sendId; // @synthesize sendId=_sendId;
@property(nonatomic) unsigned long long receiveAmount; // @synthesize receiveAmount=_receiveAmount;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(readonly, copy) NSString *description;
- (_Bool)isFreeItem;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

