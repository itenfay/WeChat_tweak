//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WloginTlv_0xa
{
    unsigned short wErrorVer;
    unsigned short wErrorCode;
    NSString *sErrorInfo;
}

@property(copy) NSString *sErrorInfo; // @synthesize sErrorInfo;
@property(nonatomic) unsigned short wErrorVer; // @synthesize wErrorVer;
@property(nonatomic) unsigned short wErrorCode; // @synthesize wErrorCode;
- (void)dealloc;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;

@end

