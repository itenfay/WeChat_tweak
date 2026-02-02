//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface EmoticonOperateCgi
{
    CDUnknownBlockType _onFailBlock;
    CDUnknownBlockType _onSuccessBlock;
    unsigned long long _opCode;
    unsigned long long _type;
    NSMutableArray *_md5List;
    NSString *_versionKey;
    NSString *_updatedVersionKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *updatedVersionKey; // @synthesize updatedVersionKey=_updatedVersionKey;
@property(retain, nonatomic) NSString *versionKey; // @synthesize versionKey=_versionKey;
@property(retain, nonatomic) NSMutableArray *md5List; // @synthesize md5List=_md5List;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long opCode; // @synthesize opCode=_opCode;
@property(copy, nonatomic) CDUnknownBlockType onSuccessBlock; // @synthesize onSuccessBlock=_onSuccessBlock;
@property(copy, nonatomic) CDUnknownBlockType onFailBlock; // @synthesize onFailBlock=_onFailBlock;
- (id)convertMd5List:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)callFailedDelegateWithReason:(unsigned long long)arg1 errMsg:(id)arg2;
- (void)startMoveWithType:(unsigned long long)arg1 md5List:(id)arg2 insertPositionMd5:(id)arg3 originVersionKey:(id)arg4;
- (void)startRequestWithOpCode:(unsigned long long)arg1 type:(unsigned long long)arg2 md5List:(id)arg3 insertPositionMd5:(id)arg4 originVersionKey:(id)arg5;
- (void)startRequestWithOpCode:(unsigned long long)arg1 type:(unsigned long long)arg2 md5List:(id)arg3 originVersionKey:(id)arg4;
- (id)init;

@end

