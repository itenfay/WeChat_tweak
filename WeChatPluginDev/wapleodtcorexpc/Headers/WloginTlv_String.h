//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WloginTlv_String : NSObject
{
    NSString *sString;
}

@property(copy) NSString *sString; // @synthesize sString;
- (void)dealloc;
- (int)encode:(id)arg1;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;

@end

