//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface SREReportData : NSObject
{
    unsigned int _siriSessionId;
    unsigned int _success;
    unsigned int _siriOpCode;
    unsigned int _receiverType;
    unsigned int _matchStatus;
    unsigned int _multiReceiverOpCode;
}

+ (void)initialize;
+ (void)PBArrayAdd_multiReceiverOpCode;
+ (void)PBArrayAdd_matchStatus;
+ (void)PBArrayAdd_receiverType;
+ (void)PBArrayAdd_siriOpCode;
+ (void)PBArrayAdd_success;
+ (void)PBArrayAdd_siriSessionId;
@property(nonatomic) unsigned int multiReceiverOpCode; // @synthesize multiReceiverOpCode=_multiReceiverOpCode;
@property(nonatomic) unsigned int matchStatus; // @synthesize matchStatus=_matchStatus;
@property(nonatomic) unsigned int receiverType; // @synthesize receiverType=_receiverType;
@property(nonatomic) unsigned int siriOpCode; // @synthesize siriOpCode=_siriOpCode;
@property(nonatomic) unsigned int success; // @synthesize success=_success;
@property(nonatomic) unsigned int siriSessionId; // @synthesize siriSessionId=_siriSessionId;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

