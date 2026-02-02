//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface WCFinderMsgBubbleShowStateInfo : NSObject
{
    _Bool _showPrivateMsgBubble;
    unsigned long long _unReadMsgCount;
    NSArray *_commentFailInfoArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *commentFailInfoArray; // @synthesize commentFailInfoArray=_commentFailInfoArray;
@property(nonatomic) _Bool showPrivateMsgBubble; // @synthesize showPrivateMsgBubble=_showPrivateMsgBubble;
@property(nonatomic) unsigned long long unReadMsgCount; // @synthesize unReadMsgCount=_unReadMsgCount;

@end

