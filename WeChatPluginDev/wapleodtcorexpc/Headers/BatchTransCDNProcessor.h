//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, NSArray, NSMutableArray;

@interface BatchTransCDNProcessor
{
    NSArray *_dataList;
    CMessageWrap *_msgWrap;
    NSMutableArray *_uploadTaskList;
    NSMutableArray *_arrFavTranCDNItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrFavTranCDNItem; // @synthesize arrFavTranCDNItem=_arrFavTranCDNItem;
@property(retain, nonatomic) NSMutableArray *uploadTaskList; // @synthesize uploadTaskList=_uploadTaskList;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
@property(retain, nonatomic) NSArray *dataList; // @synthesize dataList=_dataList;
- (id)genBatchTransItemArrayWithDataList:(id)arg1 withClientStrId:(id)arg2;
- (void)HandleBatchTransCDNSucc:(id)arg1;
- (void)sendBatchTransRequest:(id)arg1;
- (id)getStateName;
- (void)start;
- (id)initWithContext:(id)arg1;

@end

