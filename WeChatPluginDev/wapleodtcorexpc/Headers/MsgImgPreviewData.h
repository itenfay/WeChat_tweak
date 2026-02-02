//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, UIView;

@interface MsgImgPreviewData
{
    CMessageWrap *_msgWrap;
    struct CGRect _nodeViewWindowFrame;
    _Bool _isNodeViewVisible;
    _Bool _shouldRotateToPortrait;
    _Bool _shouldFadeInFadeOut;
    UIView *_fromView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *fromView; // @synthesize fromView=_fromView;
@property(nonatomic) _Bool shouldFadeInFadeOut; // @synthesize shouldFadeInFadeOut=_shouldFadeInFadeOut;
@property(nonatomic) _Bool shouldRotateToPortrait; // @synthesize shouldRotateToPortrait=_shouldRotateToPortrait;
@property(nonatomic) _Bool isNodeViewVisible; // @synthesize isNodeViewVisible=_isNodeViewVisible;
@property(nonatomic) struct CGRect nodeViewWindowFrame; // @synthesize nodeViewWindowFrame=_nodeViewWindowFrame;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;

@end

