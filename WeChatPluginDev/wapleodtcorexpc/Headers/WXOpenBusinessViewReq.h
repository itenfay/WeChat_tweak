//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WXOpenBusinessViewReq
{
    NSString *_businessType;
    NSString *_query;
    NSString *_extInfo;
}

+ (id)object;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(copy, nonatomic) NSString *businessType; // @synthesize businessType=_businessType;

@end

