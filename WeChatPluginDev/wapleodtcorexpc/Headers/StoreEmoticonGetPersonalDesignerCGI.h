//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class SKBuiltinBuffer_t;
@protocol StoreEmoticonGetPersonalDesignerCGIDelegate;

@interface StoreEmoticonGetPersonalDesignerCGI
{
    unsigned int _designerUin;
    id <StoreEmoticonGetPersonalDesignerCGIDelegate> _delegate;
    SKBuiltinBuffer_t *_reqBuffer;
    unsigned long long _retryCnt;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long retryCnt; // @synthesize retryCnt=_retryCnt;
@property(nonatomic) unsigned int designerUin; // @synthesize designerUin=_designerUin;
@property(retain, nonatomic) SKBuiltinBuffer_t *reqBuffer; // @synthesize reqBuffer=_reqBuffer;
@property(nonatomic) __weak id <StoreEmoticonGetPersonalDesignerCGIDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (_Bool)startRequest:(_Bool)arg1;
- (id)initWithBuf:(id)arg1 andDesignerUin:(unsigned int)arg2;
- (id)init;

@end

