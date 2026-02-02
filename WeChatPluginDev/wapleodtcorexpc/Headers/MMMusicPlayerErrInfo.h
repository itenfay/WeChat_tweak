//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSError, NSString;

@interface MMMusicPlayerErrInfo : NSObject
{
    long long _errCode;
    NSString *_errMsg;
    long long _ksAudioPlayerErrorType;
    NSError *_innerError;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSError *innerError; // @synthesize innerError=_innerError;
@property(nonatomic) long long ksAudioPlayerErrorType; // @synthesize ksAudioPlayerErrorType=_ksAudioPlayerErrorType;
@property(copy, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
@property(nonatomic) long long errCode; // @synthesize errCode=_errCode;
- (id)description;

@end

