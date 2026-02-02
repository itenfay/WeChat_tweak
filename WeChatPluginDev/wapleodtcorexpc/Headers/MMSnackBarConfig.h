//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableAttributedString, NSString, UIImage;

@interface MMSnackBarConfig : NSObject
{
    _Bool _loading;
    _Bool _blocked;
    UIImage *_iconImage;
    NSString *_iconName;
    NSString *_title;
    NSMutableAttributedString *_attrTitle;
    double _delayDisplayInterval;
    NSString *_actionTitle;
    NSMutableAttributedString *_actionAttrTitle;
    NSString *_actionIconName;
    double _bottomInsetOffset;
    NSString *_voiceOverLabel;
    NSString *_voiceOverHint;
    double _layoutWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double layoutWidth; // @synthesize layoutWidth=_layoutWidth;
@property(retain, nonatomic) NSString *voiceOverHint; // @synthesize voiceOverHint=_voiceOverHint;
@property(retain, nonatomic) NSString *voiceOverLabel; // @synthesize voiceOverLabel=_voiceOverLabel;
@property(nonatomic) double bottomInsetOffset; // @synthesize bottomInsetOffset=_bottomInsetOffset;
@property(retain, nonatomic) NSString *actionIconName; // @synthesize actionIconName=_actionIconName;
@property(retain, nonatomic) NSMutableAttributedString *actionAttrTitle; // @synthesize actionAttrTitle=_actionAttrTitle;
@property(retain, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
@property(nonatomic) double delayDisplayInterval; // @synthesize delayDisplayInterval=_delayDisplayInterval;
@property(nonatomic) _Bool blocked; // @synthesize blocked=_blocked;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) NSMutableAttributedString *attrTitle; // @synthesize attrTitle=_attrTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(readonly, nonatomic) _Bool isValid;
@property(readonly, nonatomic) _Bool actionEnabled;
- (id)init;

@end

