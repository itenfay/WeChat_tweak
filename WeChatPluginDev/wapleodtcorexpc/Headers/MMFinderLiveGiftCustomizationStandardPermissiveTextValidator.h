//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSCharacterSet, NSRegularExpression, NSString;

@interface MMFinderLiveGiftCustomizationStandardPermissiveTextValidator : NSObject
{
    NSRegularExpression *_nonAlphanumericRegex;
    NSCharacterSet *_nonWhitespaceCharset;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSCharacterSet *nonWhitespaceCharset; // @synthesize nonWhitespaceCharset=_nonWhitespaceCharset;
@property(retain, nonatomic) NSRegularExpression *nonAlphanumericRegex; // @synthesize nonAlphanumericRegex=_nonAlphanumericRegex;
- (_Bool)isWeChatEmoticonValid:(id)arg1 atCharacterIndex:(long long)arg2 reason:(id *)arg3;
- (_Bool)isCharacterValid:(id)arg1 atCharacterIndex:(long long)arg2 reason:(id *)arg3;
- (_Bool)isTextValid:(id)arg1 transient:(_Bool)arg2 forStyle:(id)arg3 reason:(id *)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

