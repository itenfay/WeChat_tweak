//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UITextInputPasswordRules;

@protocol UITextInputTraits <NSObject>

@optional
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UITextInputPasswordRules",?,C,N

@property(copy, nonatomic) NSString *textContentType;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,C,N

@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,GisSecureTextEntry

@property(nonatomic) _Bool enablesReturnKeyAutomatically;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long returnKeyType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(nonatomic) long long keyboardAppearance;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(nonatomic) long long keyboardType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(nonatomic) long long inlinePredictionType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(nonatomic) long long smartInsertDeleteType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(nonatomic) long long smartDashesType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(nonatomic) long long smartQuotesType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(nonatomic) long long spellCheckingType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(nonatomic) long long autocorrectionType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(nonatomic) long long autocapitalizationType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@end

