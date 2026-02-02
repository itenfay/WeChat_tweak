//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView, WCAdBreakFramePlayStateTagInfo;

@interface WCAdBreakFrameTagLogic
{
    int _interactionState;
    UIView *_iconViewCache;
    UIView *_titleViewCache;
    WCAdBreakFramePlayStateTagInfo *_tagInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdBreakFramePlayStateTagInfo *tagInfo; // @synthesize tagInfo=_tagInfo;
@property(nonatomic) int interactionState; // @synthesize interactionState=_interactionState;
@property(retain, nonatomic) UIView *titleViewCache; // @synthesize titleViewCache=_titleViewCache;
@property(retain, nonatomic) UIView *iconViewCache; // @synthesize iconViewCache=_iconViewCache;

@end

