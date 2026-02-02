//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderBizInfo_BizInfo, NSData, NSDictionary, NSMutableArray, NSMutableSet, NSString;
@protocol WCFinderBrandProfileViewModelDelegate;

@interface WCFinderBrandProfileViewModel : NSObject
{
    _Bool _continueFlag;
    _Bool _isRequestingData;
    id <WCFinderBrandProfileViewModelDelegate> _delegate;
    unsigned long long _refreshTime;
    NSString *_bizUsername;
    NSDictionary *_jumpInfoDict;
    NSMutableArray *_dataArray;
    NSMutableSet *_containedTidSet;
    unsigned long long _state;
    NSData *_lastBuffer;
    FinderBizInfo_BizInfo *_bizInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderBizInfo_BizInfo *bizInfo; // @synthesize bizInfo=_bizInfo;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) _Bool isRequestingData; // @synthesize isRequestingData=_isRequestingData;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSMutableSet *containedTidSet; // @synthesize containedTidSet=_containedTidSet;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) NSDictionary *jumpInfoDict; // @synthesize jumpInfoDict=_jumpInfoDict;
@property(copy, nonatomic) NSString *bizUsername; // @synthesize bizUsername=_bizUsername;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(nonatomic) __weak id <WCFinderBrandProfileViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFinderUserPageFetchFail:(int)arg1;
- (void)onFinderUserPageFetchSuccess:(id)arg1;
- (id)filterDataArray:(id)arg1;
- (void)addContainedTid:(id)arg1;
- (id)tranformDataItemArray:(id)arg1;
- (void)updateState;
- (void)requestDataWithPullType:(unsigned long long)arg1;
- (void)requestNextData;
- (void)requestDataFromTop;
- (id)contentVMWithTid:(id)arg1;
- (long long)contentIndexOfTid:(id)arg1;
- (id)contentVMAtIndex:(long long)arg1;
- (unsigned long long)numberOfItem;
- (id)initWithBizUsername:(id)arg1 bizInfo:(id)arg2 brandFinderJumpInfo:(id)arg3 dataArray:(id)arg4 lastBuffer:(id)arg5 continueFlag:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

