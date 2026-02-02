//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, UIColor;
@protocol ILinkEventExt;

@interface UrlLabel
{
    NSString *_urlString;
    NSString *_backupUrlString;
    id <ILinkEventExt> _linkDelegate;
    _Bool _ignoreHighlight;
    UIColor *_normalBackgroundColor;
    UIColor *_highlightedBackgroundColor;
    _Bool _bTouchEnds;
    NSMutableDictionary *_extraInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) UIColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property(retain, nonatomic) UIColor *normalBackgroundColor; // @synthesize normalBackgroundColor=_normalBackgroundColor;
@property(nonatomic) _Bool ignoreHighlight; // @synthesize ignoreHighlight=_ignoreHighlight;
@property(nonatomic) __weak id <ILinkEventExt> linkDelegate; // @synthesize linkDelegate=_linkDelegate;
@property(retain, nonatomic) NSString *backupUrlString; // @synthesize backupUrlString=_backupUrlString;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
- (void)cancelDelayedTouches;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)willMoveToSuperview:(id)arg1;
- (void)throwUrlMessage;
- (void)setHighlighted:(_Bool)arg1;
- (void)setHighlightedColor;
- (void)setNormalColor;
- (id)initWithFrame:(struct CGRect)arg1;

@end

