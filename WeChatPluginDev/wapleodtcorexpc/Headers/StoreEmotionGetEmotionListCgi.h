//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, SKBuiltinBuffer_t;
@protocol StoreEmotionGetEmotionListCgiDelegate;

@interface StoreEmotionGetEmotionListCgi
{
    unsigned int m_reqType;
    unsigned int m_scene;
    unsigned int m_category;
    SKBuiltinBuffer_t *m_reqBuf;
    SKBuiltinBuffer_t *m_emotionListBuf;
    id <StoreEmotionGetEmotionListCgiDelegate> _delegate;
    NSString *_setKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *setKey; // @synthesize setKey=_setKey;
@property(nonatomic) __weak id <StoreEmotionGetEmotionListCgiDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (_Bool)startRequest;
@property(readonly, nonatomic) _Bool hasMore;
- (id)initWithReqType:(unsigned int)arg1 Scene:(unsigned int)arg2 ListBuffer:(id)arg3;
- (id)initWithReqType:(unsigned int)arg1 Scene:(unsigned int)arg2 SetKey:(id)arg3;
- (id)initWithReqType:(unsigned int)arg1 Scene:(unsigned int)arg2 Category:(unsigned int)arg3;
- (id)initWithReqType:(unsigned int)arg1 Scene:(unsigned int)arg2;

@end

