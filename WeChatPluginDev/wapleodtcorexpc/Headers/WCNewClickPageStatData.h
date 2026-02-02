//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface WCNewClickPageStatData
{
    unsigned int _errType;
    unsigned int _errCnt;
    unsigned int _firstEnterTimeStamp;
    unsigned int _lastQuitTimeStamp;
    NSMutableDictionary *_dicPageDatas;
}

+ (void)initialize;
+ (void)PBArrayAdd_lastQuitTimeStamp;
+ (void)PBArrayAdd_firstEnterTimeStamp;
+ (void)PBArrayAdd_dicPageDatas;
+ (void)PBArrayAdd_errCnt;
+ (void)PBArrayAdd_errType;
- (void).cxx_destruct;
@property(nonatomic) unsigned int lastQuitTimeStamp; // @synthesize lastQuitTimeStamp=_lastQuitTimeStamp;
@property(nonatomic) unsigned int firstEnterTimeStamp; // @synthesize firstEnterTimeStamp=_firstEnterTimeStamp;
@property(retain, nonatomic) NSMutableDictionary *dicPageDatas; // @synthesize dicPageDatas=_dicPageDatas;
@property(nonatomic) unsigned int errCnt; // @synthesize errCnt=_errCnt;
@property(nonatomic) unsigned int errType; // @synthesize errType=_errType;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

