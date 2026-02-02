//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol MMKContact, MMKImageView;

@protocol MMKContactService <NSObject>
- (long long)getCryptUin;
- (_Bool)isEuropeRegUser;
- (NSString *)getUserName;
- (void)attachAvatar:(NSString *)arg1 iv:(id <MMKImageView>)arg2;
- (id <MMKContact>)get:(NSString *)arg1;
@end

