//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class JSCProtocolAdapter, NSMutableArray, NSMutableDictionary, NSString;

@interface JSCTarget : NSObject
{
    JSCProtocolAdapter *_adapter;
    _Bool _isConnected;
    _Bool _isNeedFilter;
    NSMutableArray *_messageBuffer;
    NSMutableDictionary *_messageFilters;
    NSMutableDictionary *_toolRequestMap;
    NSMutableDictionary *_adapterRequestMap;
    int _requestId;
    NSString *_id;
    CDUnknownBlockType _sendToTargetImpl;
    CDUnknownBlockType _sendToRemoteImpl;
}

+ (id)jsonParse:(id)arg1;
+ (id)jsonString:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType sendToRemoteImpl; // @synthesize sendToRemoteImpl=_sendToRemoteImpl;
@property(copy, nonatomic) CDUnknownBlockType sendToTargetImpl; // @synthesize sendToTargetImpl=_sendToTargetImpl;
- (void)onMessageFromTarget:(id)arg1;
- (void)onMessageFromRemote:(id)arg1;
- (void)fireResultToRemote:(id)arg1 params:(id)arg2;
- (void)fireEventToRemote:(id)arg1 params:(id)arg2;
- (id)callTarget:(id)arg1 params:(id)arg2;
- (void)addMessage:(id)arg1 filter:(CDUnknownBlockType)arg2;
- (id)initWithTargetId:(id)arg1 needFilter:(_Bool)arg2;
- (id)initWithTargetId:(id)arg1;

@end

