//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, UIView;

@interface WCFinderLiveCommentBlurButtonBackView
{
    _Bool _isOpenPivateMsg;
    _Bool _isDisplayPivateMsg;
    UIView *_privateMsgAreaView;
    UIView *_seperateLineView;
    UIImageView *_privateMsgIconView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *privateMsgIconView; // @synthesize privateMsgIconView=_privateMsgIconView;
@property(retain, nonatomic) UIView *seperateLineView; // @synthesize seperateLineView=_seperateLineView;
@property(retain, nonatomic) UIView *privateMsgAreaView; // @synthesize privateMsgAreaView=_privateMsgAreaView;
@property(nonatomic) _Bool isDisplayPivateMsg; // @synthesize isDisplayPivateMsg=_isDisplayPivateMsg;
@property(nonatomic) _Bool isOpenPivateMsg; // @synthesize isOpenPivateMsg=_isOpenPivateMsg;
- (void)forceLayoutIfNeed;
- (void)updateOpenPivateMsgWithPercent:(double)arg1;
- (void)updateUIForDisplayPrivateMsgChanged;
- (void)updateUIForOpenPrivateMsgChanged;
- (void)layoutPrivateMsgIconView;
- (void)layoutSeperateLineView;
- (void)layoutPrivateMsgAreaView;
- (void)layoutUI;

@end

