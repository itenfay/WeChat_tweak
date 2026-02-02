//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSError.h>

@class NSString;

@interface WCTError : NSError
{
    unsigned long long _level;
    NSString *_message;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) unsigned long long level; // @synthesize level=_level;
- (id)description;
- (id)numberForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (_Bool)isCorruption;
- (_Bool)isOK;
- (id)initWithError:(const void *)arg1;
- (id)initWithCode:(unsigned long long)arg1 level:(unsigned long long)arg2 message:(id)arg3 userInfo:(id)arg4;
- (id)path;
- (long long)tag;
- (id)sql;
- (unsigned long long)extendedCode;

@end

