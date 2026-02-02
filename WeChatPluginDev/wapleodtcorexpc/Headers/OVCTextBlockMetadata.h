//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OVCTextBlockMetadata : NSObject
{
    _Bool _isUsingPlaceholder;
    _Bool _isEditable;
    NSString *_textBlockID;
    unsigned long long _textBlockType;
    NSString *_textBlockName;
    NSString *_textBlockContent;
    NSString *_textBlockText;
    NSString *_defaultContent;
    NSString *_placeholder;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(readonly, nonatomic) NSString *defaultContent; // @synthesize defaultContent=_defaultContent;
@property(readonly, nonatomic) _Bool isEditable; // @synthesize isEditable=_isEditable;
@property(readonly, nonatomic) _Bool isUsingPlaceholder; // @synthesize isUsingPlaceholder=_isUsingPlaceholder;
@property(readonly, nonatomic) NSString *textBlockText; // @synthesize textBlockText=_textBlockText;
@property(readonly, nonatomic) NSString *textBlockContent; // @synthesize textBlockContent=_textBlockContent;
@property(readonly, nonatomic) NSString *textBlockName; // @synthesize textBlockName=_textBlockName;
@property(readonly, nonatomic) unsigned long long textBlockType; // @synthesize textBlockType=_textBlockType;
@property(readonly, nonatomic) NSString *textBlockID; // @synthesize textBlockID=_textBlockID;
- (id)initWithTextBlockID:(id)arg1 textBlockType:(unsigned long long)arg2 textBlockName:(id)arg3 textBlockContent:(id)arg4 textBlockText:(id)arg5 isUsingPlaceholder:(_Bool)arg6 isEditable:(_Bool)arg7 defaultContent:(id)arg8 placeholder:(id)arg9;

@end

