//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ShareResult : NSObject
{
    int _errCode;
    NSString *_errMsg;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
@property(nonatomic) int errCode; // @synthesize errCode=_errCode;

@end

