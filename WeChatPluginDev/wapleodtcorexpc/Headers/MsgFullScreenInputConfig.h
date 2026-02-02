//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMTextView;

@interface MsgFullScreenInputConfig : NSObject
{
    _Bool _bEnableTopicSearchInteraction;
    long long _textMaxLength;
    MMTextView *_textView;
    struct _NSRange _selectedRange;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bEnableTopicSearchInteraction; // @synthesize bEnableTopicSearchInteraction=_bEnableTopicSearchInteraction;
@property(nonatomic) struct _NSRange selectedRange; // @synthesize selectedRange=_selectedRange;
@property(retain, nonatomic) MMTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) long long textMaxLength; // @synthesize textMaxLength=_textMaxLength;

@end

