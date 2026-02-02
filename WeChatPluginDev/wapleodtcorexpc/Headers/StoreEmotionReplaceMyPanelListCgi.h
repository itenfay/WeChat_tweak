//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;
@protocol StoreEmotionReplaceMyPanelListCgiDelegate;

@interface StoreEmotionReplaceMyPanelListCgi
{
    _Bool _m_hasStartRequestOnce;
    _Bool _m_ignoreLimit;
    unsigned int _m_eventId;
    id <StoreEmotionReplaceMyPanelListCgiDelegate> _delegate;
    NSMutableArray *_m_needUploadProductIDList;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_ignoreLimit; // @synthesize m_ignoreLimit=_m_ignoreLimit;
@property(nonatomic) _Bool m_hasStartRequestOnce; // @synthesize m_hasStartRequestOnce=_m_hasStartRequestOnce;
@property(nonatomic) unsigned int m_eventId; // @synthesize m_eventId=_m_eventId;
@property(retain, nonatomic) NSMutableArray *m_needUploadProductIDList; // @synthesize m_needUploadProductIDList=_m_needUploadProductIDList;
@property(nonatomic) __weak id <StoreEmotionReplaceMyPanelListCgiDelegate> delegate; // @synthesize delegate=_delegate;
- (void)callFailedDelegate;
- (void)callOKDelegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)isActive;
- (void)startInternalRequest;
- (void)setReplaceList:(id)arg1;
- (void)startRequest;
- (id)init;

@end

