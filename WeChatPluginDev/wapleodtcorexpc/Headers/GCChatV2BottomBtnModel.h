//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ChatroomJumpDetail, GC23070Report;

@interface GCChatV2BottomBtnModel : NSObject
{
    ChatroomJumpDetail *_jumpDetail;
    GC23070Report *_reportModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GC23070Report *reportModel; // @synthesize reportModel=_reportModel;
@property(retain, nonatomic) ChatroomJumpDetail *jumpDetail; // @synthesize jumpDetail=_jumpDetail;
- (void)handleJump;

@end

