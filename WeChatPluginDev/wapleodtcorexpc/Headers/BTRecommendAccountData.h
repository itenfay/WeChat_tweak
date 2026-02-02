//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BTRecommendUserInfo, NSArray, NSString;

@interface BTRecommendAccountData : NSObject
{
    NSString *_bizNickName;
    NSString *_bizUserName;
    NSString *_headerUrl;
    NSString *_signature;
    NSString *_recommendReason;
    NSString *_appMsgRecommendReason;
    NSArray *_arrAppMsg;
    BTRecommendUserInfo *_userInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BTRecommendUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSArray *arrAppMsg; // @synthesize arrAppMsg=_arrAppMsg;
@property(copy, nonatomic) NSString *appMsgRecommendReason; // @synthesize appMsgRecommendReason=_appMsgRecommendReason;
@property(copy, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(copy, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(copy, nonatomic) NSString *headerUrl; // @synthesize headerUrl=_headerUrl;
@property(copy, nonatomic) NSString *bizUserName; // @synthesize bizUserName=_bizUserName;
@property(copy, nonatomic) NSString *bizNickName; // @synthesize bizNickName=_bizNickName;

@end

