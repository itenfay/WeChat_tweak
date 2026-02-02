//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface KaraFeatureCenter_Text_Tokenize : NSObject
{
    NSArray *_tokenTypeIds;
    NSArray *_attentionMask;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *attentionMask; // @synthesize attentionMask=_attentionMask;
@property(retain, nonatomic) NSArray *tokenTypeIds; // @synthesize tokenTypeIds=_tokenTypeIds;
- (id)initWithTokenTypeIds:(id)arg1 attentionMask:(id)arg2;
@property(nonatomic, readonly) NSString *description;

@end

