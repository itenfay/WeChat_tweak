//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WloginErrInfo : NSObject
{
    NSString *sErrorUserAccount;
    unsigned short wErrorCode;
    NSString *sErrorTitle;
    NSString *sErrorMsg;
    unsigned short wErrorAddType;
    NSString *sErrorAdd;
}

@property(copy) NSString *sErrorUserAccount; // @synthesize sErrorUserAccount;
@property(copy) NSString *sErrorAdd; // @synthesize sErrorAdd;
@property unsigned short wErrorAddType; // @synthesize wErrorAddType;
@property(copy) NSString *sErrorMsg; // @synthesize sErrorMsg;
@property(copy) NSString *sErrorTitle; // @synthesize sErrorTitle;
@property unsigned short wErrorCode; // @synthesize wErrorCode;
- (void)dealloc;

@end

