//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WADebugMenuSheetItem : NSObject
{
    NSString *_title;
    CDUnknownBlockType _clickAction;
}

+ (id)createWithTitle:(id)arg1 clickAction:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType clickAction; // @synthesize clickAction=_clickAction;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

