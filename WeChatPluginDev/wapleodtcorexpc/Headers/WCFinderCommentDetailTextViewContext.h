//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderCommentDetailTextViewContext : NSObject
{
    NSString *_lastReplacementText;
    struct _NSRange _lastReplacementRange;
    struct _NSRange _backupStartRange;
}

- (void).cxx_destruct;
@property(nonatomic) struct _NSRange backupStartRange; // @synthesize backupStartRange=_backupStartRange;
@property(copy, nonatomic) NSString *lastReplacementText; // @synthesize lastReplacementText=_lastReplacementText;
@property(nonatomic) struct _NSRange lastReplacementRange; // @synthesize lastReplacementRange=_lastReplacementRange;
- (_Bool)isLastChangeValid;
- (void)clearContext;
- (void)checkBackupStatusWithTextView:(id)arg1;
- (void)updateTextViewReplacementRange:(struct _NSRange)arg1 text:(id)arg2;

@end

