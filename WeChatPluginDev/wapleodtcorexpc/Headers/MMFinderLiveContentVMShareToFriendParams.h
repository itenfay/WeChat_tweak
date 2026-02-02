//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCFinderLiveShareExtraParams;
@protocol ForwardMessageLogicDelegate;

@interface MMFinderLiveContentVMShareToFriendParams : NSObject
{
    _Bool _usePageSheet;
    _Bool _chatRoomOnly;
    id <ForwardMessageLogicDelegate> _delegate;
    WCFinderLiveShareExtraParams *_extra;
    long long _shareScene;
}

- (void).cxx_destruct;
@property(nonatomic) long long shareScene; // @synthesize shareScene=_shareScene;
@property(nonatomic) _Bool chatRoomOnly; // @synthesize chatRoomOnly=_chatRoomOnly;
@property(nonatomic) _Bool usePageSheet; // @synthesize usePageSheet=_usePageSheet;
@property(retain, nonatomic) WCFinderLiveShareExtraParams *extra; // @synthesize extra=_extra;
@property(retain, nonatomic) id <ForwardMessageLogicDelegate> delegate; // @synthesize delegate=_delegate;

@end

