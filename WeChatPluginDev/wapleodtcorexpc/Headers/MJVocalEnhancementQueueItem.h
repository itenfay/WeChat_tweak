//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MJVocalEnhancementQueueItem : NSObject
{
    NSString *_audioID;
    NSString *_roleID;
    CDUnknownBlockType _completionHandler;
}

+ (id)vocalEnhancementItemWithAudioID:(id)arg1 roleID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) NSString *roleID; // @synthesize roleID=_roleID;
@property(readonly, nonatomic) NSString *audioID; // @synthesize audioID=_audioID;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithAudioID:(id)arg1 roleID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

