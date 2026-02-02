//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface SlideTextSelectModel : NSObject
{
    NSString *_selectedText;
    struct _NSRange _selectedRange;
}

- (void).cxx_destruct;
@property(nonatomic) struct _NSRange selectedRange; // @synthesize selectedRange=_selectedRange;
@property(copy, nonatomic) NSString *selectedText; // @synthesize selectedText=_selectedText;
- (id)initWithContent:(id)arg1 selectedRange:(struct _NSRange)arg2;

@end

