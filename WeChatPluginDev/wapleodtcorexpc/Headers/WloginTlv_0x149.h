//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WloginTlv_0x149
{
    unsigned short wTipsType;
    NSString *sTipsTitle;
    NSString *sTipsContent;
    NSString *sOtherInfo;
}

@property(copy) NSString *sOtherInfo; // @synthesize sOtherInfo;
@property(copy) NSString *sTipsContent; // @synthesize sTipsContent;
@property(copy) NSString *sTipsTitle; // @synthesize sTipsTitle;
@property unsigned short wTipsType; // @synthesize wTipsType;
- (void)dealloc;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;

@end

