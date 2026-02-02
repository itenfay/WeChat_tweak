//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSMutableArray;
@protocol StoreEmotionRecoverMyPanelListCgiDelegate;

@interface StoreEmotionRecoverMyPanelListCgi
{
    unsigned int _m_eventId;
    unsigned long long _scene;
    id <StoreEmotionRecoverMyPanelListCgiDelegate> _delegate;
    NSData *_currReqBuf;
    NSMutableArray *_emotionsArray;
    NSMutableArray *_emotionSetInfoArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *emotionSetInfoArray; // @synthesize emotionSetInfoArray=_emotionSetInfoArray;
@property(retain, nonatomic) NSMutableArray *emotionsArray; // @synthesize emotionsArray=_emotionsArray;
@property(retain, nonatomic) NSData *currReqBuf; // @synthesize currReqBuf=_currReqBuf;
@property(nonatomic) unsigned int m_eventId; // @synthesize m_eventId=_m_eventId;
@property(nonatomic) __weak id <StoreEmotionRecoverMyPanelListCgiDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (void)callFailedDelegate;
- (void)callOKDelegateWithPids:(id)arg1 andSetInfos:(id)arg2;
- (void)OnGetEmoticonPanelList:(id)arg1;
- (void)startInternalRequest;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)isActive;
- (void)startRequest;
- (id)initWithDelegate:(id)arg1;

@end

