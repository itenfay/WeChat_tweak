//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@protocol MailContentViewDelegate

@optional
- (void)tryShowToolView;
- (void)tryHideToolView;
- (void)makeKeyboardShow;
- (void)contentLengthChanged:(NSString *)arg1;
- (void)contentViewDidFinishEdit;
- (void)contentViewNeedSetContentOffset;
- (void)didStartWriteMailContent;
@end

