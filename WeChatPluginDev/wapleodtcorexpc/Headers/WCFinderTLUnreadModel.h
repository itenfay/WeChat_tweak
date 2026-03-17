//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderTLUnreadModel : NSObject
{
    _Bool _hiddenAllBubble;
    _Bool _showPrivateMSGTips;
    double _topBlankHeight;
    long long _unReadMSGCount;
}

@property(nonatomic) _Bool showPrivateMSGTips; // @synthesize showPrivateMSGTips=_showPrivateMSGTips;
@property(nonatomic) long long unReadMSGCount; // @synthesize unReadMSGCount=_unReadMSGCount;
@property(nonatomic) _Bool hiddenAllBubble; // @synthesize hiddenAllBubble=_hiddenAllBubble;
@property(nonatomic) double topBlankHeight; // @synthesize topBlankHeight=_topBlankHeight;
- (void)onFinderNotifyPrivateMsgTipsChange;
- (void)onFinderNotifyWechatUnreadMentionCountNeedReload;
- (id)getCurCommentFailTidArray;
- (id)getCurMsgBubbleShowStateInfo;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

