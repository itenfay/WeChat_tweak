//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface GameWebVideoIncompleteResponseHeader : NSObject
{
    NSMutableDictionary *_imcompleteResponseHeader;
    unsigned long long _contentTotalLength;
    NSString *_contentType;
    NSString *_acceptRanges;
}

+ (id)getValueFromResponseHeader:(id)arg1 byInsensitiveKey:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *acceptRanges; // @synthesize acceptRanges=_acceptRanges;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(nonatomic) unsigned long long contentTotalLength; // @synthesize contentTotalLength=_contentTotalLength;
- (_Bool)isValid;
- (id)incompleteResponseHeaderFields;
- (id)initWithVideoCacheInfo:(id)arg1;
- (id)initWithResponse:(id)arg1;

@end

