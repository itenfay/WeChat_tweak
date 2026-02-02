//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAShapeLayer, CEmoticonWrap, MMEmoticonView, MMUIButton;

@interface TextStatePublishEmoticonView : UIView
{
    CEmoticonWrap *_emoticonWrap;
    MMEmoticonView *_emoticonView;
    MMUIButton *_deleteButton;
    CAShapeLayer *_maskLayer;
    CDUnknownBlockType _tapDeleteButtonHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType tapDeleteButtonHandler; // @synthesize tapDeleteButtonHandler=_tapDeleteButtonHandler;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) MMUIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) MMEmoticonView *emoticonView; // @synthesize emoticonView=_emoticonView;
@property(retain, nonatomic) CEmoticonWrap *emoticonWrap; // @synthesize emoticonWrap=_emoticonWrap;
- (id)generateBezierPath;
- (void)onTapDeleteButton;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

