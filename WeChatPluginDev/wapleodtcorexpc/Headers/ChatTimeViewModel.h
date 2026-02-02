//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ChatTimeNodeRightButtonInfo, NSString;

@interface ChatTimeViewModel
{
    NSString *m_timeText;
    double m_labelWidth;
    _Bool m_rightButtonANewLine;
    double m_rightButtonHeight;
    double m_rightButtonWidth;
    struct CGPoint m_rightButtonOrigin;
    double _showingTime;
    ChatTimeNodeRightButtonInfo *_rightButtonInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ChatTimeNodeRightButtonInfo *rightButtonInfo; // @synthesize rightButtonInfo=_rightButtonInfo;
@property(nonatomic) double showingTime; // @synthesize showingTime=_showingTime;
@property(readonly, nonatomic) struct CGPoint rightButtonOrigin; // @synthesize rightButtonOrigin=m_rightButtonOrigin;
@property(readonly, nonatomic) double rightButtonWidth; // @synthesize rightButtonWidth=m_rightButtonWidth;
@property(readonly, nonatomic) double rightButtonHeight; // @synthesize rightButtonHeight=m_rightButtonHeight;
@property(readonly, nonatomic) _Bool rightButtonANewLine; // @synthesize rightButtonANewLine=m_rightButtonANewLine;
@property(readonly, nonatomic) double labelWidth; // @synthesize labelWidth=m_labelWidth;
@property(readonly, nonatomic) NSString *timeText; // @synthesize timeText=m_timeText;
- (void)updateLayouts;
- (_Bool)isRightButtonNeedANewLine;
- (struct CGSize)measure:(struct CGSize)arg1;
- (id)cellViewClassName;
- (id)init;

@end

