//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol TextStateReadLogicDelegate;

@interface TextStateReadLogic : NSObject
{
    id <TextStateReadLogicDelegate> _delegate;
    NSMutableSet *_unreadUsernameCacheSet;
    NSMutableSet *_readUsernameCacheSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *readUsernameCacheSet; // @synthesize readUsernameCacheSet=_readUsernameCacheSet;
@property(retain, nonatomic) NSMutableSet *unreadUsernameCacheSet; // @synthesize unreadUsernameCacheSet=_unreadUsernameCacheSet;
@property(nonatomic) __weak id <TextStateReadLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clearCacheForUsername:(id)arg1;
- (void)clearCache;
- (_Bool)hasUnreadTextStateContact;
- (_Bool)isTextStateReadWithUsername:(id)arg1;
- (_Bool)isReadForTextStateWithId:(id)arg1;
- (void)setReadForTextState:(id)arg1;
- (void)initData;
- (id)init;

@end

