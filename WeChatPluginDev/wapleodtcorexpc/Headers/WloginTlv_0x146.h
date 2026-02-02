//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WloginTlv_0x146
{
    unsigned short wErrorVer;
    unsigned short wErrorCode;
    NSString *sErrorTitle;
    NSString *sErrorMsg;
    unsigned short wErrorInfoType;
    NSString *sErrorInfo;
}

@property(copy) NSString *sErrorInfo; // @synthesize sErrorInfo;
@property unsigned short wErrorInfoType; // @synthesize wErrorInfoType;
@property(copy) NSString *sErrorMsg; // @synthesize sErrorMsg;
@property(copy) NSString *sErrorTitle; // @synthesize sErrorTitle;
@property unsigned short wErrorCode; // @synthesize wErrorCode;
@property unsigned short wErrorVer; // @synthesize wErrorVer;
- (void)dealloc;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;

@end

