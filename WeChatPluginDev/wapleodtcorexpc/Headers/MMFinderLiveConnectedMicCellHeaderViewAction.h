//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface MMFinderLiveConnectedMicCellHeaderViewAction : NSObject
{
    UIImage *_iconImage;
    UIImage *_highlightedIconImage;
    NSString *_accessibilityLabel;
    CDUnknownBlockType _action;
}

+ (id)actionWithIcon:(id)arg1 highlightedIcon:(id)arg2 accessibilityLabel:(id)arg3 actionBlock:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(retain, nonatomic) UIImage *highlightedIconImage; // @synthesize highlightedIconImage=_highlightedIconImage;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;

@end

