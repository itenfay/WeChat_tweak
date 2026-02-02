//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface WXOpenCustomerServiceReq : NSObject
{
    NSString *_url;
    NSData *_corpid;
}

+ (id)object;
@property(retain, nonatomic) NSData *corpid; // @synthesize corpid=_corpid;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;

@end

