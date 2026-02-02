//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData;
@protocol EmoticonListCgiDelegate;

@interface EmoticonListCgi : NSObject
{
    _Bool _isActive;
    unsigned int _reqType;
    unsigned int _scene;
    unsigned int _requestEventID;
    NSData *_boughtBuff;
    unsigned long long _sessionId;
    id <EmoticonListCgiDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int requestEventID; // @synthesize requestEventID=_requestEventID;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) __weak id <EmoticonListCgiDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned int reqType; // @synthesize reqType=_reqType;
@property(retain, nonatomic) NSData *boughtBuff; // @synthesize boughtBuff=_boughtBuff;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnGetStoreEmoticonList:(id)arg1 withReqType:(unsigned int)arg2;
- (void)onGetBoughtItemList:(id)arg1;
- (void)createRequest;
- (id)init;

@end

