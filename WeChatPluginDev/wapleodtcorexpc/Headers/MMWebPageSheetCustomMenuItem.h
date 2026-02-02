//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface MMWebPageSheetCustomMenuItem : NSObject
{
    NSString *_title;
    UIImage *_iconImage;
    CDUnknownBlockType _actionBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithIcon:(id)arg1 title:(id)arg2 actionBlock:(CDUnknownBlockType)arg3;

@end

