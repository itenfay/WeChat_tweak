//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface UserIdAuthorizeSmsPageInfo
{
    NSString *_title;
    NSString *_desc;
    NSMutableArray *_phoneList;
    NSString *_appid;
    NSMutableArray *_categoryId;
    NSString *_payToken;
    NSString *_ticket;
    NSString *_mobile;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(retain, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
@property(copy, nonatomic) NSString *payToken; // @synthesize payToken=_payToken;
@property(retain, nonatomic) NSMutableArray *categoryId; // @synthesize categoryId=_categoryId;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(retain, nonatomic) NSMutableArray *phoneList; // @synthesize phoneList=_phoneList;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

