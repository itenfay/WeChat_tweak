//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EmoticonBoardView, MMGrowTextView, MMUILabel, UIButton, UIView, WCInputController;

@interface WCInputControllerViews : NSObject
{
    WCInputController *_inputController;
    UIView *_inputView;
    UIButton *_expressionButton;
    MMGrowTextView *_growTextView;
    MMUILabel *_remainWordCountLabel;
    UIView *_backgroundView;
    EmoticonBoardView *_emoticonBoardView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EmoticonBoardView *emoticonBoardView; // @synthesize emoticonBoardView=_emoticonBoardView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) MMUILabel *remainWordCountLabel; // @synthesize remainWordCountLabel=_remainWordCountLabel;
@property(retain, nonatomic) MMGrowTextView *growTextView; // @synthesize growTextView=_growTextView;
@property(retain, nonatomic) UIButton *expressionButton; // @synthesize expressionButton=_expressionButton;
@property(retain, nonatomic) UIView *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) WCInputController *inputController; // @synthesize inputController=_inputController;

@end

