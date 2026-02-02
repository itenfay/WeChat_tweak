//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PendingMessageObject : NSObject
{
    _Bool _isPrepared;
    NSMutableDictionary *_pendingMessagesDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *pendingMessagesDict; // @synthesize pendingMessagesDict=_pendingMessagesDict;
@property(nonatomic) _Bool isPrepared; // @synthesize isPrepared=_isPrepared;
- (void)removeReceiver:(id)arg1;
- (id)getMessagesFromReceiver:(id)arg1;
- (void)pendMessage:(id)arg1 toReceiver:(id)arg2;
- (id)init;

@end

