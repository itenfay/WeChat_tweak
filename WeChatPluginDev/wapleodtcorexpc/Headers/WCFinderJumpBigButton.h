//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderJumpInfo;
@protocol WCFinderJumpBigButtonDelegate;

@interface WCFinderJumpBigButton
{
    _Bool _needHighlight;
    int _showPosition;
    id <WCFinderJumpBigButtonDelegate> _delegate;
    WCFinderJumpInfo *_jumpInfo;
}

- (void).cxx_destruct;
@property(nonatomic) int showPosition; // @synthesize showPosition=_showPosition;
@property(retain, nonatomic) WCFinderJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(nonatomic) _Bool needHighlight; // @synthesize needHighlight=_needHighlight;
@property(nonatomic) __weak id <WCFinderJumpBigButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void)hiddenBigButton;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)reloadWithFollowState:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

