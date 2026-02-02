//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderSlideTextForRemarkVCParams : NSObject
{
    _Bool _linkStyle;
    _Bool _isPushed;
    NSString *_content;
    NSString *_topTitle;
    NSString *_finishWording;
    long long _maxCharLength;
    NSString *_guideIconUrl;
    NSString *_guidePreTips;
    double _guideBubbleMaxWidth;
    double _customHalfScreenHeight;
    struct _NSRange _selectedRange;
}

+ (id)paramsWithShopJumpInfo:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isPushed; // @synthesize isPushed=_isPushed;
@property(nonatomic) double customHalfScreenHeight; // @synthesize customHalfScreenHeight=_customHalfScreenHeight;
@property(nonatomic) _Bool linkStyle; // @synthesize linkStyle=_linkStyle;
@property(nonatomic) double guideBubbleMaxWidth; // @synthesize guideBubbleMaxWidth=_guideBubbleMaxWidth;
@property(copy, nonatomic) NSString *guidePreTips; // @synthesize guidePreTips=_guidePreTips;
@property(copy, nonatomic) NSString *guideIconUrl; // @synthesize guideIconUrl=_guideIconUrl;
@property(nonatomic) struct _NSRange selectedRange; // @synthesize selectedRange=_selectedRange;
@property(nonatomic) long long maxCharLength; // @synthesize maxCharLength=_maxCharLength;
@property(copy, nonatomic) NSString *finishWording; // @synthesize finishWording=_finishWording;
@property(copy, nonatomic) NSString *topTitle; // @synthesize topTitle=_topTitle;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;

@end

