//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, SKBuiltinBuffer_t;
@protocol StoreEmotionGetDonorListCgiDelegate;

@interface StoreEmotionGetDonorListCgi
{
    NSString *m_pid;
    NSMutableArray *m_donorList;
    SKBuiltinBuffer_t *m_reqBuf;
    _Bool m_hasMore;
    unsigned int m_eventID;
    id <StoreEmotionGetDonorListCgiDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <StoreEmotionGetDonorListCgiDelegate> delegate; // @synthesize delegate=_delegate;
- (void)callFailedDelegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)startRequest;
- (id)initWithPid:(id)arg1;

@end

