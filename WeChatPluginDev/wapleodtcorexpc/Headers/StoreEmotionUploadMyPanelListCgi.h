//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;
@protocol StoreEmotionUploadMyPanelListCgiDelegate;

@interface StoreEmotionUploadMyPanelListCgi
{
    _Bool m_hasStartRequestOnce;
    _Bool m_ignoreLimit;
    unsigned int m_eventId;
    int _code;
    NSMutableArray *m_productIDList;
    id <StoreEmotionUploadMyPanelListCgiDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) int code; // @synthesize code=_code;
@property(nonatomic) _Bool m_ignoreLimit; // @synthesize m_ignoreLimit;
@property(nonatomic) _Bool m_hasStartRequestOnce; // @synthesize m_hasStartRequestOnce;
@property(nonatomic) unsigned int m_eventId; // @synthesize m_eventId;
@property(nonatomic) __weak id <StoreEmotionUploadMyPanelListCgiDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSMutableArray *m_productIDList; // @synthesize m_productIDList;
- (void)callOKDelegate;
- (void)callFailedDelegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)startSortedLogic;
- (void)startInternalRequest;
- (_Bool)isActive;
- (void)startRequest;
- (void)setNeedPids:(id)arg1;
- (id)initWithProductIDList:(id)arg1 delegate:(id)arg2;

@end

