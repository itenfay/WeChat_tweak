//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdDelReportInfo : NSObject
{
    NSString *_uxinfo;
    NSString *_snsId;
    long long _type;
    long long _errorCode;
}

- (void).cxx_destruct;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *snsId; // @synthesize snsId=_snsId;
@property(retain, nonatomic) NSString *uxinfo; // @synthesize uxinfo=_uxinfo;
- (id)toReportString;

@end

