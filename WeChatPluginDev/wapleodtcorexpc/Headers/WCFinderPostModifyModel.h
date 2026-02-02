//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderPostModifyModel : NSObject
{
    unsigned long long _sourceType;
    NSString *_fromText;
    NSString *_toText;
    struct _NSRange _fromTextRange;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *toText; // @synthesize toText=_toText;
@property(copy, nonatomic) NSString *fromText; // @synthesize fromText=_fromText;
@property(nonatomic) struct _NSRange fromTextRange; // @synthesize fromTextRange=_fromTextRange;
@property(nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
- (struct _NSRange)getToTextRange;
- (long long)getModifyCount;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isValidModel;
- (id)initWithFromTextRange:(struct _NSRange)arg1 fromText:(id)arg2 toText:(id)arg3;
- (id)initBySelectModel:(id)arg1 toText:(id)arg2;

@end

