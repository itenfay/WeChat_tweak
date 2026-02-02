//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSObject, NSString;
@protocol PBCoding;

@interface GameHaowanContinueStatePbObj
{
    unsigned int _createTime;
    unsigned int _retryCount;
    NSObject<PBCoding> *_subState;
}

+ (void)initialize;
+ (void)PBArrayAdd_subState;
+ (void)PBArrayAdd_retryCount;
+ (void)PBArrayAdd_createTime;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<PBCoding> *subState; // @synthesize subState=_subState;
@property(nonatomic) unsigned int retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

