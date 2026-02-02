//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface MMFinderLivePageSheetNoticeActionConfig : NSObject
{
    NSString *_actionTitle;
    CDUnknownBlockType _actionBlock;
    UIColor *_textColor;
    UIColor *_bgColor;
}

+ (id)commonAction;
+ (id)cancelAction;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(retain, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;

@end

