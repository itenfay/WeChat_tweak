//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ErrInfo : NSObject
{
    unsigned int _errNumber;
    NSString *_errMsg;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
@property(nonatomic) unsigned int errNumber; // @synthesize errNumber=_errNumber;
- (id)initWithErrNumber:(unsigned int)arg1 errMsg:(id)arg2;

@end

