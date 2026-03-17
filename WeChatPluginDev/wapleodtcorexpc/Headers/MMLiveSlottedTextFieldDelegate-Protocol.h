//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiveSlottedTextField, NSString;

@protocol MMLiveSlottedTextFieldDelegate <NSObject>

@optional
- (void)slottedTextFieldDidEndEditing:(MMLiveSlottedTextField *)arg1;
- (_Bool)slottedTextFieldShouldEndEditing:(MMLiveSlottedTextField *)arg1;
- (void)slottedTextFieldDidBeginEditing:(MMLiveSlottedTextField *)arg1;
- (_Bool)slottedTextFieldShouldBeginEditing:(MMLiveSlottedTextField *)arg1;
- (void)slottedTextFieldTextChanged:(MMLiveSlottedTextField *)arg1;
- (_Bool)isWeChatEmoticonValid:(NSString *)arg1 inSlotIndex:(unsigned long long)arg2 forSlottedTextField:(MMLiveSlottedTextField *)arg3;
- (_Bool)isCharacterStringValid:(NSString *)arg1 inSlotIndex:(unsigned long long)arg2 forSlottedTextField:(MMLiveSlottedTextField *)arg3;
@end

