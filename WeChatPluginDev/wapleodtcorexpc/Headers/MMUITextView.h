//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITextView.h>

@interface MMUITextView : UITextView
{
    _Bool isDictationPlaceholderShow;
}

@property(nonatomic) _Bool isDictationPlaceholderShow; // @synthesize isDictationPlaceholderShow;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(_Bool)arg2;
- (id)insertDictationResultPlaceholder;
- (void)dictationRecordingDidEnd;
- (void)dictationRecognitionFailed;

@end

