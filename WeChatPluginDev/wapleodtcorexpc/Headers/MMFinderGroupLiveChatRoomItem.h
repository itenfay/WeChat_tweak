//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderGroupLiveChatRoomItem : NSObject
{
    NSString *_chatRoomName;
    NSString *_chatRoomUsername;
}

+ (void)initialize;
+ (void)PBArrayAdd_chatRoomUsername;
+ (void)PBArrayAdd_chatRoomName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *chatRoomUsername; // @synthesize chatRoomUsername=_chatRoomUsername;
@property(retain, nonatomic) NSString *chatRoomName; // @synthesize chatRoomName=_chatRoomName;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

