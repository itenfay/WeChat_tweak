//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact;

@interface WCFinderCommentDetailTextViewMentionEntry : NSObject
{
    _Bool _isValid;
    CContact *_mentionContact;
    struct _NSRange _mentionRange;
}

+ (id)entryWithRange:(struct _NSRange)arg1 contact:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(retain, nonatomic) CContact *mentionContact; // @synthesize mentionContact=_mentionContact;
@property(nonatomic) struct _NSRange mentionRange; // @synthesize mentionRange=_mentionRange;

@end

