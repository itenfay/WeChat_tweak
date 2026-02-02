//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock, NSString;

@interface BubbleInfo : NSObject
{
    NSRecursiveLock *m_lock;
    NSMutableDictionary *m_bubbleCaches;
    NSString *_bubbleName;
    NSString *_bubbleNameHL;
    unsigned long long _type;
    unsigned long long _position;
    struct UIEdgeInsets _edgeInsets;
    struct UIEdgeInsets _margin;
}

- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets margin; // @synthesize margin=_margin;
@property(nonatomic) unsigned long long position; // @synthesize position=_position;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(retain, nonatomic) NSString *bubbleNameHL; // @synthesize bubbleNameHL=_bubbleNameHL;
@property(retain, nonatomic) NSString *bubbleName; // @synthesize bubbleName=_bubbleName;
- (id)getNewBubbleImage:(_Bool)arg1;
- (id)getBubbleImage:(_Bool)arg1 isDarkMode:(_Bool)arg2 useCache:(_Bool)arg3;
- (id)getBubbleImage:(_Bool)arg1;
- (id)getBubbleImage:(_Bool)arg1 isDarkMode:(_Bool)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

