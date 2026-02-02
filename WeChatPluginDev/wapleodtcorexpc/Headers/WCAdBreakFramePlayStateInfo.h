//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCAdBreakFramePlayStateItem;

@interface WCAdBreakFramePlayStateInfo : NSObject
{
    double _breakHideDuration;
    WCAdBreakFramePlayStateItem *_breakState;
    WCAdBreakFramePlayStateItem *_stopState;
    WCAdBreakFramePlayStateItem *_likeState;
    WCAdBreakFramePlayStateItem *_commentState;
    WCAdBreakFramePlayStateItem *_cancelLikeState;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdBreakFramePlayStateItem *cancelLikeState; // @synthesize cancelLikeState=_cancelLikeState;
@property(retain, nonatomic) WCAdBreakFramePlayStateItem *commentState; // @synthesize commentState=_commentState;
@property(retain, nonatomic) WCAdBreakFramePlayStateItem *likeState; // @synthesize likeState=_likeState;
@property(retain, nonatomic) WCAdBreakFramePlayStateItem *stopState; // @synthesize stopState=_stopState;
@property(retain, nonatomic) WCAdBreakFramePlayStateItem *breakState; // @synthesize breakState=_breakState;
@property(nonatomic) double breakHideDuration; // @synthesize breakHideDuration=_breakHideDuration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

