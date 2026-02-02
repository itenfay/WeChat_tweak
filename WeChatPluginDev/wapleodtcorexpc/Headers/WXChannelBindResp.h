//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface WXChannelBindResp
{
    NSString *_extMsg;
    NSData *_authBuffer;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSData *authBuffer; // @synthesize authBuffer=_authBuffer;
@property(copy, nonatomic) NSString *extMsg; // @synthesize extMsg=_extMsg;

@end

