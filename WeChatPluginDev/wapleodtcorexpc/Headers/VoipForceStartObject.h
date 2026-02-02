//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSRecursiveLock;

@interface VoipForceStartObject : NSObject
{
    _Bool _m_hasStart;
    _Bool _canStartInUnactive;
    CDUnknownBlockType _m_block;
    NSRecursiveLock *_m_lock;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool canStartInUnactive; // @synthesize canStartInUnactive=_canStartInUnactive;
@property(nonatomic) _Bool m_hasStart; // @synthesize m_hasStart=_m_hasStart;
@property(retain, nonatomic) NSRecursiveLock *m_lock; // @synthesize m_lock=_m_lock;
@property(copy, nonatomic) CDUnknownBlockType m_block; // @synthesize m_block=_m_block;
- (void)internalStart;
- (void)whenDidActive;
- (void)start;
- (void)dealloc;
- (void)updateBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

