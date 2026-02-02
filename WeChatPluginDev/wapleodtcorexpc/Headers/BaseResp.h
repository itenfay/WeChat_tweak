//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface BaseResp : NSObject
{
    int errCode;
    int type;
    NSString *errStr;
}

- (void).cxx_destruct;
@property(nonatomic) int type; // @synthesize type;
@property(retain, nonatomic) NSString *errStr; // @synthesize errStr;
@property(nonatomic) int errCode; // @synthesize errCode;
- (id)init;

@end

