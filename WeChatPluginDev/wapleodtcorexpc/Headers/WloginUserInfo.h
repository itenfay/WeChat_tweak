//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WloginUserInfo : NSObject
{
    unsigned int dwUserUin;
    NSString *sUserMainAccount;
    unsigned short wFaceId;
    unsigned char cAge;
    unsigned char cGender;
    NSString *sNickName;
}

@property(retain) NSString *sNickName; // @synthesize sNickName;
@property unsigned char cGender; // @synthesize cGender;
@property unsigned char cAge; // @synthesize cAge;
@property unsigned short wFaceId; // @synthesize wFaceId;
@property(retain) NSString *sUserMainAccount; // @synthesize sUserMainAccount;
@property unsigned int dwUserUin; // @synthesize dwUserUin;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)userinfo;
- (id)description;

@end

