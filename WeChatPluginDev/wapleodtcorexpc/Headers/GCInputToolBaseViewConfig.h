//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface GCInputToolBaseViewConfig : NSObject
{
    _Bool _showRecommendEmoticon;
    NSString *_emoticonImgName;
    NSString *_keyboardImgName;
    UIColor *_backGroundBgColor;
    UIColor *_pubbleViewBgColor;
    UIColor *_growTextColor;
    UIColor *_placeHolderTextColor;
    double _growTextViewLeftMargin;
    double _growTextViewFont;
    struct CGRect _frame;
}

+ (id)chatRoomToolViewConfig;
+ (id)webInputToolViewConfig;
- (void).cxx_destruct;
@property(nonatomic) double growTextViewFont; // @synthesize growTextViewFont=_growTextViewFont;
@property(nonatomic) double growTextViewLeftMargin; // @synthesize growTextViewLeftMargin=_growTextViewLeftMargin;
@property(nonatomic) _Bool showRecommendEmoticon; // @synthesize showRecommendEmoticon=_showRecommendEmoticon;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(retain, nonatomic) UIColor *placeHolderTextColor; // @synthesize placeHolderTextColor=_placeHolderTextColor;
@property(retain, nonatomic) UIColor *growTextColor; // @synthesize growTextColor=_growTextColor;
@property(retain, nonatomic) UIColor *pubbleViewBgColor; // @synthesize pubbleViewBgColor=_pubbleViewBgColor;
@property(retain, nonatomic) UIColor *backGroundBgColor; // @synthesize backGroundBgColor=_backGroundBgColor;
@property(retain, nonatomic) NSString *keyboardImgName; // @synthesize keyboardImgName=_keyboardImgName;
@property(retain, nonatomic) NSString *emoticonImgName; // @synthesize emoticonImgName=_emoticonImgName;

@end

