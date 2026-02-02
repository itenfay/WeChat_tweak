//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface AddMsgWrap : NSObject
{
    NSString *_functionMsgId;
    NSData *_addMsgData;
    NSData *_businessData;
    unsigned long long _businessId;
}

+ (void)initialize;
+ (void)PBArrayAdd_businessId;
+ (void)PBArrayAdd_businessData;
+ (void)PBArrayAdd_addMsgData;
+ (void)PBArrayAdd_functionMsgId;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long businessId; // @synthesize businessId=_businessId;
@property(retain, nonatomic) NSData *businessData; // @synthesize businessData=_businessData;
@property(retain, nonatomic) NSData *addMsgData; // @synthesize addMsgData=_addMsgData;
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

