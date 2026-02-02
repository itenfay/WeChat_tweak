//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;

@interface StoreEmotionBatchEmojiDownLoadCgi
{
    unsigned int _maxCountPerRequest;
    CDUnknownBlockType _onFinishBlock;
    NSMutableArray *_waitForRequestMd5List;
    NSMutableArray *_emojiInfoList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *emojiInfoList; // @synthesize emojiInfoList=_emojiInfoList;
@property(retain, nonatomic) NSMutableArray *waitForRequestMd5List; // @synthesize waitForRequestMd5List=_waitForRequestMd5List;
@property(nonatomic) unsigned int maxCountPerRequest; // @synthesize maxCountPerRequest=_maxCountPerRequest;
@property(copy, nonatomic) CDUnknownBlockType onFinishBlock; // @synthesize onFinishBlock=_onFinishBlock;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (_Bool)continueRequestIfNeeded;
- (_Bool)startRequestWithMd5List:(id)arg1;
- (id)init;

@end

