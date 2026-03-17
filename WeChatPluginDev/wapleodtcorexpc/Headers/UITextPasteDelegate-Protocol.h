//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSAttributedString, UITextRange;
@protocol UITextPasteConfigurationSupporting, UITextPasteItem;

@protocol UITextPasteDelegate <NSObject>

@optional
- (_Bool)textPasteConfigurationSupporting:(id <UITextPasteConfigurationSupporting>)arg1 shouldAnimatePasteOfAttributedString:(NSAttributedString *)arg2 toRange:(UITextRange *)arg3;
- (UITextRange *)textPasteConfigurationSupporting:(id <UITextPasteConfigurationSupporting>)arg1 performPasteOfAttributedString:(NSAttributedString *)arg2 toRange:(UITextRange *)arg3;
- (NSAttributedString *)textPasteConfigurationSupporting:(id <UITextPasteConfigurationSupporting>)arg1 combineItemAttributedStrings:(NSArray *)arg2 forRange:(UITextRange *)arg3;
- (void)textPasteConfigurationSupporting:(id <UITextPasteConfigurationSupporting>)arg1 transformPasteItem:(id <UITextPasteItem>)arg2;
@end

