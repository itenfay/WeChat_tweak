//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString, UIColor;

@interface WCTSettingTitleHFViewModel : NSObject
{
    NSString *_title;
    NSAttributedString *_attrTitle;
    UIColor *_backgroundColor;
    unsigned long long _accessibilityTraits;
    struct UIEdgeInsets _edgeInsets;
}

+ (id)createFooterWithTitle:(id)arg1;
+ (id)createHeaderWithTitle:(id)arg1;
+ (id)createWithTitle:(id)arg1 edgeInsets:(struct UIEdgeInsets)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long accessibilityTraits; // @synthesize accessibilityTraits=_accessibilityTraits;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) NSAttributedString *attrTitle; // @synthesize attrTitle=_attrTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (double)heightByViewWidth:(double)arg1;

@end

