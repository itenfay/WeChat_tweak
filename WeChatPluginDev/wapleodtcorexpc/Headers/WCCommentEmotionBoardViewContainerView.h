//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonBoardView;

@interface WCCommentEmotionBoardViewContainerView
{
    EmoticonBoardView *_emotionBoardView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EmoticonBoardView *emotionBoardView; // @synthesize emotionBoardView=_emotionBoardView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)addEmotionBoardView:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

